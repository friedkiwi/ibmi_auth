dnl config.m4
dnl

PHP_ARG_ENABLE(ibmi_auth, Enable IBM i Authenthication module, [ --enable-ibmi-auth   Enable IBM i auth])

if test "$PHP_IBMI_AUTH" != "no"; then
	PHP_NEW_EXTENSION(ibmi_auth, src/ibmi_auth.c, $ext_shared)
fi

