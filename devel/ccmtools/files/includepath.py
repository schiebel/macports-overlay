import sys
import os

def walker(arg, directory, files):
    for file in files:
	if file == "Python.h" :
	    print directory

for f in sys.path:
    offset = f.rfind("/lib/")
    if offset >= 0 :
        if os.path.isdir(f[0:offset] + "/Headers") :
            os.path.walk( f[0:offset] + "/Headers", walker, "" );
            break
        elif os.path.isdir(f[0:offset] + "/include") :
            os.path.walk( f[0:offset] + "/include", walker, "" );
            break
