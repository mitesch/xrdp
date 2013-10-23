EXTRA_DIST = xrdp-sesman xrdp-sesman.other

if SESMAN_NOPAM
PAMFILE =
else
if SESMAN_PAMUSERPASS
PAMFILE =
else
if SESMAN_KERBEROS
PAMFILE =
else
if SESMAN_PAMDEBIAN
PAMFILE = xrdp-sesman.debian
else
PAMFILE = xrdp-sesman
endif
endif
endif
endif

pamddir=$(sysconfdir)/pam.d

pamd_DATA = \
  $(PAMFILE)
