UNIX BUILD NOTES
====================
Some notes on how to build Jgcoin in Unix. 

To Build
---------------------

	./autogen.sh
	./configure
	make

This will build jgcoin-qt as well if the dependencies are met.

Dependencies
---------------------

 Library     | Purpose          | Description
 ------------|------------------|----------------------
 libssl      | SSL Support      | Secure communications
 libdb4.8    | Berkeley DB      | Wallet storage
 libboost    | Boost            | C++ Library
 miniupnpc   | UPnP Support     | Optional firewall-jumping support
 qt          | GUI              | GUI toolkit
 protobuf    | Payments in GUI  | Data interchange format used for payment protocol
 libqrencode | QR codes in GUI  | Optional for generating QR codes

[miniupnpc](http://miniupnp.free.fr/) may be used for UPnP port mapping.  It can be downloaded from [here](
http://miniupnp.tuxfamily.org/files/).  UPnP support is compiled in and
turned off by default.  See the configure options for upnp behavior desired:

	--without-miniupnpc      No UPnP support miniupnp not required
	--disable-upnp-default   (the default) UPnP support turned off by default at runtime
	--enable-upnp-default    UPnP support turned on by default at runtime

IPv6 support may be disabled by setting:

	--disable-ipv6           Disable IPv6 support

Licenses of statically linked libraries:
 Berkeley DB   New BSD license with additional requirement that linked
               software must be free open source
 Boost         MIT-like license
 miniupnpc     New (3-clause) BSD license

- For the versions used in this release, see doc/release-process.md under *Fetch and build inputs*.

System requirements
--------------------

C++ compilers are memory-hungry. It is recommended to have at least 1 GB of
memory available when compiling Jgcoin Core. With 512MB of memory or less
compilation will take much longer due to swap thrashing.

Dependency Build Instructions: Ubuntu & Debian
----------------------------------------------
Build requirements:

	sudo apt-get install build-essential
	sudo apt-get install libtool autotools-dev autoconf
	sudo apt-get install libssl-dev

for Ubuntu 12.04 and later:

	sudo apt-get install libboost-all-dev

 db4.8 packages are available [here](https://launchpad.net/~jgcoin/+archive/jgcoin).
 You can add the repository using the following command:

        sudo add-apt-repository ppa:jgcoin/jgcoin
        sudo apt-get update

 Ubuntu 12.04 and later have packages for libdb5.1-dev and libdb5.1++-dev,
 but using these will break binary wallet compatibility, and is not recommended.

for Ubuntu 13.10:
	libboost1.54 will not work,
	remove libboost1.54-all-dev and install libboost1.53-all-dev instead.

for Debian 7 (Wheezy) and later:
 The oldstable repository contains db4.8 packages.
 Add the following line to /etc/apt/sources.list,
 replacing [mirror] with any official debian mirror.

	deb http://[mirror]/debian/ oldstable main

To enable the change run

	sudo apt-get update

for other Ubuntu & Debian:

	sudo apt-get install libdb4.8-dev
	sudo apt-get install libdb4.8++-dev
	sudo apt-get install libboost1.55-all-dev

Optional:

	sudo apt-get install libminiupnpc-dev (see --with-miniupnpc and --enable-upnp-default)

Dependencies for the GUI: Ubuntu & Debian
-----------------------------------------

If you want to build Jgcoin-Qt, make sure that the required packages for Qt development
are installed. Either Qt 4 or Qt 5 are necessary to build the GUI.
If both Qt 4 and Qt 5 are installed, Qt 4 will be used. Pass `--with-gui=qt5` to configure to choose Qt5.
To build without GUI pass `--without-gui`.

To build with Qt 4 you need the following:

    sudo apt-get install libqt4-dev libprotobuf-dev protobuf-compiler

For Qt 5 you need the following:

    sudo apt-get install libqt5gui5 libqt5core5 libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev

libqrencode (optional) can be installed with:

    sudo apt-get install libqrencode-dev

Once these are installed, they will be found by configure and a jgcoin-qt executable will be
built by default.

Notes
-----
The release is built with GCC and then "strip jgcoind" to strip the debug
symbols, which reduces the executable size by about 90%.


miniupnpc
---------
	tar -xzvf miniupnpc-1.6.tar.gz
	cd miniupnpc-1.6
	make
	sudo su
	make install


Berkeley DB
-----------
You need Berkeley DB 4.8.  If you have to build it yourself:

	wget 'http://download.oracle.com/berkeley-db/db-4.8.30.NC.tar.gz'
	echo '12edc0df75bf9abd7f82f821795bcee50f42cb2e5f76a6a281b85732798364ef  db-4.8.30.NC.tar.gz' | sha256sum -c
	# -> db-4.8.30.NC.tar.gz: OK
	tar -xzvf db-4.8.30.NC.tar.gz
	cd build_unix/
	../dist/configure --enable-cxx
	make
	sudo make install


Boost
-----
If you need to build Boost yourself:

	sudo su
	./bootstrap.sh
	./bjam install


Security
--------
To help make your jgcoin installation more secure by making certain attacks impossible to
exploit even if a vulnerability is found, binaries are hardened by default.
This can be disabled with:

Hardening Flags:

	./configure --enable-hardening
	./configure --disable-hardening


Hardening enables the following features:

* Position Independent Executable
    Build position independent code to take advantage of Address Space Layout Randomization
    offered by some kernels. An attacker who is able to cause execution of code at an arbitrary
    memory location is thwarted if he doesn't know where anything useful is located.
    The stack and heap are randomly located by default but this allows the code section to be
    randomly located as well.

    On an Amd64 processor where a library was not compiled with -fPIC, this will cause an error
    such as: "relocation R_X86_64_32 against `......' can not be used when making a shared object;"

    To test that you have built PIE executable, install scanelf, part of paxutils, and use:

    	scanelf -e ./jgcoin

    The output should contain:
     TYPE
    ET_DYN

* Non-executable Stack
    If the stack is executable then trivial stack based buffer overflow exploits are possible if
    vulnerable buffers are found. By default, jgcoin should be built with a non-executable stack
    but if one of the libraries it uses asks for an executable stack or someone makes a mistake
    and uses a compiler extension which requires an executable stack, it will silently build an
    executable without the non-executable stack protection.

    To verify that the stack is non-executable after compiling use:
    `scanelf -e ./jgcoin`

    the output should contain:
	STK/REL/PTL
	RW- R-- RW-

    The STK RW- means that the stack is readable and writeable but not executable.

Disable-wallet mode
--------------------
When the intention is to run only a P2P node without a wallet, jgcoin may be compiled in
disable-wallet mode with:

    ./configure --disable-wallet

In this case there is no dependency on Berkeley DB 4.8.

Mining is also possible in disable-wallet mode, but only using the `getblocktemplate` RPC
call not `getwork`.

