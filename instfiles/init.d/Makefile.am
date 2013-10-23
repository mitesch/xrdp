EXTRA_DIST = xrdp.in

xrdp: xrdp.in
	  sed 's|__BASE__|$(prefix)|' xrdp.in > xrdp

startscriptdir=$(sysconfdir)/init.d
startscript_SCRIPT = xrdp
