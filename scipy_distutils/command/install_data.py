from distutils.command.install_data import *
from distutils.command.install_data import install_data as old_install_data

#data installer with improved intelligence over distutils
#data files are copied into the project directory instead
#of willy-nilly
class install_data (old_install_data):
    def finalize_options (self):
        print 'hhhhhhhhhhhheeeeeeeeeeerrrrrrrrrrrreeeeeeeeeeeee'
        self.set_undefined_options('install',
                                   ('install_lib', 'install_dir'),
                                   ('root', 'root'),
                                   ('force', 'force'),
                                  )
