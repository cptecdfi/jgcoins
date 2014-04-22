from distutils.core import setup
setup(name='jgcspendfrom',
      version='1.0',
      description='Command-line utility for jgcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@jgcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
