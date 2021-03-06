! $OpenBSD: xenodm-config.cpp,v 1.1 2016/10/23 08:30:37 matthieu Exp $
!
!
!
!
!
#ifndef XENODMCONFIGDIR
#define XENODMCONFIGDIR XENODMDIR
#endif
#ifndef XENODMSCRIPTDIR
#define XENODMSCRIPTDIR XENODMDIR
#endif
DisplayManager.authDir:	XENODMXAUTHDIR
DisplayManager.errorLogFile:	XENODMLOGDIR/xenodm.log
DisplayManager.keyFile:		XENODMCONFIGDIR/xenodm-keys
DisplayManager.servers:		XENODMCONFIGDIR/Xservers
DisplayManager*resources:	XENODMCONFIGDIR/Xresources
! All displays should use authorization, but we cannot be sure
! X terminals may not be configured that way, so they will require
! individual resource settings.
DisplayManager*authorize:	true
!
DisplayManager*startup:		XENODMSCRIPTDIR/Xstartup
DisplayManager*session:		XENODMSCRIPTDIR/Xsession
DisplayManager*reset:		XENODMSCRIPTDIR/Xreset
DisplayManager*authComplain:	true
! The following three resources set up display :0 as the console.
DisplayManager._0.setup:	XENODMSCRIPTDIR/Xsetup_0
DisplayManager._0.startup:	XENODMSCRIPTDIR/GiveConsole
DisplayManager._0.reset:	XENODMSCRIPTDIR/TakeConsole

DisplayManager.*.authName:	MIT-MAGIC-COOKIE-1
