include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = jgcoin-qt
noinst_LIBRARIES = libjgcoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# jgcoin qt core #
QT_TS = \
  locale/jgcoin_ach.ts \
  locale/jgcoin_af_ZA.ts \
  locale/jgcoin_ar.ts \
  locale/jgcoin_be_BY.ts \
  locale/jgcoin_bg.ts \
  locale/jgcoin_bs.ts \
  locale/jgcoin_ca_ES.ts \
  locale/jgcoin_ca.ts \
  locale/jgcoin_ca@valencia.ts \
  locale/jgcoin_cmn.ts \
  locale/jgcoin_cs.ts \
  locale/jgcoin_cy.ts \
  locale/jgcoin_da.ts \
  locale/jgcoin_de.ts \
  locale/jgcoin_el_GR.ts \
  locale/jgcoin_en.ts \
  locale/jgcoin_eo.ts \
  locale/jgcoin_es_CL.ts \
  locale/jgcoin_es_DO.ts \
  locale/jgcoin_es_MX.ts \
  locale/jgcoin_es.ts \
  locale/jgcoin_es_UY.ts \
  locale/jgcoin_et.ts \
  locale/jgcoin_eu_ES.ts \
  locale/jgcoin_fa_IR.ts \
  locale/jgcoin_fa.ts \
  locale/jgcoin_fi.ts \
  locale/jgcoin_fr_CA.ts \
  locale/jgcoin_fr.ts \
  locale/jgcoin_gl.ts \
  locale/jgcoin_gu_IN.ts \
  locale/jgcoin_he.ts \
  locale/jgcoin_hi_IN.ts \
  locale/jgcoin_hr.ts \
  locale/jgcoin_hu.ts \
  locale/jgcoin_id_ID.ts \
  locale/jgcoin_it.ts \
  locale/jgcoin_ja.ts \
  locale/jgcoin_ka.ts \
  locale/jgcoin_kk_KZ.ts \
  locale/jgcoin_ko_KR.ts \
  locale/jgcoin_ky.ts \
  locale/jgcoin_la.ts \
  locale/jgcoin_lt.ts \
  locale/jgcoin_lv_LV.ts \
  locale/jgcoin_ms_MY.ts \
  locale/jgcoin_nb.ts \
  locale/jgcoin_nl.ts \
  locale/jgcoin_pam.ts \
  locale/jgcoin_pl.ts \
  locale/jgcoin_pt_BR.ts \
  locale/jgcoin_pt_PT.ts \
  locale/jgcoin_ro_RO.ts \
  locale/jgcoin_ru.ts \
  locale/jgcoin_sah.ts \
  locale/jgcoin_sk.ts \
  locale/jgcoin_sl_SI.ts \
  locale/jgcoin_sq.ts \
  locale/jgcoin_sr.ts \
  locale/jgcoin_sv.ts \
  locale/jgcoin_th_TH.ts \
  locale/jgcoin_tr.ts \
  locale/jgcoin_uk.ts \
  locale/jgcoin_ur_PK.ts \
  locale/jgcoin_uz@Cyrl.ts \
  locale/jgcoin_vi.ts \
  locale/jgcoin_vi_VN.ts \
  locale/jgcoin_zh_CN.ts \
  locale/jgcoin_zh_HK.ts \
  locale/jgcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_jgcoinaddressvalidator.cpp \
  moc_jgcoinamountfield.cpp \
  moc_jgcoingui.cpp \
  moc_jgcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

JGCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  jgcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_jgcoin.cpp
QT_QRC = jgcoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

JGCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  jgcoinaddressvalidator.h \
  jgcoinamountfield.h \
  jgcoingui.h \
  jgcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/jgcoin.ico \
  res/icons/jgcoin.png \
  res/icons/jgcoin_testnet.ico \
  res/icons/jgcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

JGCOIN_QT_CPP = \
  jgcoin.cpp \
  jgcoinaddressvalidator.cpp \
  jgcoinamountfield.cpp \
  jgcoingui.cpp \
  jgcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
JGCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

JGCOIN_RC = res/jgcoin-qt-res.rc

libjgcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libjgcoinqt_a_SOURCES = $(JGCOIN_QT_CPP) $(JGCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libjgcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libjgcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# jgcoin-qt binary #
jgcoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
jgcoin_qt_SOURCES = jgcoin.cpp
if TARGET_DARWIN
  jgcoin_qt_SOURCES += $(JGCOIN_MM)
endif
if TARGET_WINDOWS
  jgcoin_qt_SOURCES += $(JGCOIN_RC)
endif
jgcoin_qt_LDADD = libjgcoinqt.a $(LIBJGCOIN_SERVER)
if ENABLE_WALLET
jgcoin_qt_LDADD += $(LIBJGCOIN_WALLET)
endif
jgcoin_qt_LDADD += $(LIBJGCOIN_CLI) $(LIBJGCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
jgcoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

jgcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/jgcoinstrings.cpp

translate: jgcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(JGCOIN_QT_CPP) $(JGCOIN_QT_H) $(JGCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/jgcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name jgcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
