--- src/driver_oss.c.orig	Sun Aug 31 15:32:02 2003
+++ src/driver_oss.c	Tue Feb 20 22:44:43 2007
@@ -27,7 +27,7 @@
 #if defined(__linux__)
   #include <sys/soundcard.h>
 #elif defined(__FreeBSD__)
-  #include "machine/soundcard.h"
+  #include <sys/soundcard.h>
 #elif defined(__NetBSD__)
   #include <soundcard.h>
 #endif
@@ -253,8 +253,10 @@
  * oss_open() before initializing. */
 int oss_init(void)
 {
+#if 0
 	/* this is an OSS structure, defined in soundcard.h */
 	struct mixer_info oss_info;
+#endif
 	int old_mixer;
 	int ch;
 	int i;
@@ -288,9 +290,13 @@
 	mixer_ptr->numchan = SOUND_MIXER_NRDEVICES;
 	mixer_ptr->numchan = CLAMP(mixer_ptr->numchan,0,SOUND_MIXER_NRDEVICES);
 
+#if 0
 	/* get the mixer name */
 	eioctl(mixer_ptr->fd, SOUND_MIXER_INFO, &oss_info);
 	strncpy(mixer_ptr->name, oss_info.name, sizeof(mixer_ptr->name));
+#else
+	strncpy(mixer_ptr->name, "", 1);
+#endif
 	
 	mixer_ptr->curr_chan = 0;
 #ifdef UMIX_DEBUG
@@ -329,9 +335,11 @@
 		oss_set_curr_chan(i);
 		oss_update(OSS_UPD_READ);
 	}
+#if 0
 	/* init the modify counter */
 	eioctl(mixer_ptr->fd, SOUND_MIXER_INFO, &oss_info);
 	mixer_ptr->modifycount = oss_info.modify_counter;
+#endif
 
 #ifdef UMIX_DEBUG
 	err_msg("oss_init: initialized #%d with %d channels",
@@ -388,6 +396,7 @@
  * the device and compares it to the old */
 static int oss_check_update(void)
 {
+#if 0
 	struct mixer_info oss_info;
 
 	eioctl(mixer_ptr->fd, SOUND_MIXER_INFO, &oss_info);
@@ -396,6 +405,7 @@
 		mixer_ptr->modifycount = oss_info.modify_counter;
 		return 1;
 	}
+#endif
 
 	return 0;
 }
