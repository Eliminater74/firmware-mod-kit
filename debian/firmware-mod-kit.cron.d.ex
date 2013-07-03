#
# Regular cron jobs for the firmware-mod-kit package
#
0 4	* * *	root	[ -x /usr/bin/firmware-mod-kit_maintenance ] && /usr/bin/firmware-mod-kit_maintenance
