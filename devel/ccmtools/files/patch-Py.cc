--- cpp-environment/ccm/CCM_Python/Py.cc.orig	2007-04-18 22:09:38.000000000 -0600
+++ cpp-environment/ccm/CCM_Python/Py.cc	2007-04-18 22:10:01.000000000 -0600
@@ -43,9 +43,9 @@
 
 /****** directories ordered in reverse order of priority ******/
 static char *dirs_init[] = {
-    "/opt/local/lib/python%V",
+    "@@PREFIX@@/lib/python%V",
     "/usr/local/lib/python%V",
-    "/opt/local/Library/Frameworks/Python.framework/Versions/%V/lib/python%V",
+    "@@PREFIX@@/Library/Frameworks/Python.framework/Versions/%V/lib/python%V",
     "%H/.ipython",
     0,
 };
@@ -64,7 +64,7 @@
 #if defined(PYTHONLIB)
     PYTHONLIB,
 #endif
-    "/opt/local/Library/Frameworks/Python.framework/Versions/%V/lib/python%v.zip",
+    "@@PREFIX@@/Library/Frameworks/Python.framework/Versions/%V/lib/python%v.zip",
     0
 };
 
@@ -72,7 +72,7 @@
 
 /****** directories ordered in reverse order of priority ******/
 static char *dirs_init[] = {
-    "/opt/local/lib/python%V",
+    "@@PREFIX@@/lib/python%V",
     "/usr/local/lib/python%V",
     "/usr/lib/python%V",
     "/usr/bin",
@@ -97,7 +97,7 @@
 #endif
     "/usr/lib/python24.zip",
     "/usr/local/lib/python24.zip",
-    "/opt/local/lib/python24.zip",
+    "@@PREFIX@@/lib/python24.zip",
     0
 };
 
@@ -113,11 +113,11 @@
 #if defined(PYTHONPATH)
     PYTHONPATH,
 #endif
-    "/opt/local/bin/python" PYTHON_VERSION,
+    "@@PREFIX@@/bin/python" PYTHON_VERSION,
     "/usr/local/bin/python" PYTHON_VERSION,
     "/opt/bin/python" PYTHON_VERSION,
     "/usr/bin/python" PYTHON_VERSION,
-    "/opt/local/bin/python",
+    "@@PREFIX@@/bin/python",
     "/usr/local/bin/python",
     "/opt/bin/python",
     "/usr/bin/python",
