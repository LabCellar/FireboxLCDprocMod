/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define version of lcdproc API */
#define API_VERSION "0.5"

/* Define to 1 if <curses.h> defines the acs_map array */
#define CURSES_HAS_ACS_MAP 1

/* Define to 1 if you have the redrawwin function in the curses library */
#define CURSES_HAS_REDRAWWIN 1

/* Define to 1 if you have the wcolor_set function in the curses library */
#define CURSES_HAS_WCOLOR_SET 1

/* Define to 1 if <curses.h> defines the _acs_char array */
/* #undef CURSES_HAS__ACS_CHAR */

/* Define if you're using Darwin/Mac OS X. */
/* #undef DARWIN */

/* Define to 1 to show debug information */
/* #undef DEBUG */

/* Define to 1 to enable additional charmaps in drivers */
/* #undef EXTRA_CHARMAPS */

/* Define if you're using FreeBSD. */
#define FREEBSD 1

/* Define to 1 if you have the `cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define to 1 if you have the <dev/iicbus/iic.h> header file. */
#define HAVE_DEV_IICBUS_IIC_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have freetype */
/* #undef HAVE_FT2 */

/* Define to 1 if you have the <g15daemon_client.h> header file. */
/* #undef HAVE_G15DAEMON_CLIENT_H */

/* Define to 1 if you have the `getloadavg' function. */
#define HAVE_GETLOADAVG 1

/* Define to 1 if you have the `getmntinfo' function. */
#define HAVE_GETMNTINFO 1

/* Define to 1 if you have the <glcdproclib/glcdprocdriver.h> header file. */
/* #undef HAVE_GLCDPROCLIB_GLCDPROCDRIVER_H */

/* Define to 1 if you have the i2c headers */
#define HAVE_I2C 1

/* Define if you have the FreeBSD version of the i386_ioperm functions. */
/* #undef HAVE_I386_IOPERM_FREEBSD */

/* Define if you have the NetBSD&OpenBSD version of i386_ioperm functions. */
/* #undef HAVE_I386_IOPERM_NETBSD */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `ioperm' function. */
/* #undef HAVE_IOPERM */

/* Define to 1 if you have the `iopl' function. */
/* #undef HAVE_IOPL */

/* Define to 1 if you have the <kvm.h> header file. */
#define HAVE_KVM_H 1

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `dld' library (-ldld). */
/* #undef HAVE_LIBDLD */

/* Define to 1 if you have libftdi */
/* #undef HAVE_LIBFTDI */

/* Define to 1 if you have the <libg15render.h> header file. */
/* #undef HAVE_LIBG15RENDER_H */

/* Define to 1 if you have libhid */
/* #undef HAVE_LIBHID */

/* Define to 1 if you have the `kstat' library (-lkstat). */
/* #undef HAVE_LIBKSTAT */

/* Define to 1 if you have the <libmx5000/mx5000.h> header file. */
/* #undef HAVE_LIBMX5000_MX5000_H */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have libpng */
/* #undef HAVE_LIBPNG */

/* Define to 1 if you have the `posix4' library (-lposix4). */
/* #undef HAVE_LIBPOSIX4 */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have libusb */
/* #undef HAVE_LIBUSB */

/* Define to 1 if you have libusb-1.0 */
/* #undef HAVE_LIBUSB_1_0 */

/* Define to 1 if you have X11 library */
/* #undef HAVE_LIBX11 */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/i2c-dev.h> header file. */
/* #undef HAVE_LINUX_I2C_DEV_H */

/* Define to 1 if you have the <linux/spi/spidev.h> header file. */
/* #undef HAVE_LINUX_SPI_SPIDEV_H */

/* Define to 1 if you have the <machine/apm_bios.h> header file. */
#define HAVE_MACHINE_APM_BIOS_H 1

/* Define to 1 if you have the <machine/cpufunc.h> header file. */
#define HAVE_MACHINE_CPUFUNC_H 1

/* Define to 1 if you have the <machine/pio.h> header file. */
/* #undef HAVE_MACHINE_PIO_H */

/* Define to 1 if you have the <machine/sysarch.h> header file. */
#define HAVE_MACHINE_SYSARCH_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <mntent.h> header file. */
/* #undef HAVE_MNTENT_H */

/* Define to 1 if you have the <mnttab.h> header file. */
/* #undef HAVE_MNTTAB_H */

/* Define to 1 if you have the <ncurses.h> header file. */
#define HAVE_NCURSES_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define if you have a parallel port and LCDproc knows how to talk to it. */
#define HAVE_PCSTYLE_LPT_CONTROL 1

/* Define to 1 if you have the <procfs.h> header file. */
/* #undef HAVE_PROCFS_H */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if <signal.h> defines the SA_RESTART constant. */
#define HAVE_SA_RESTART 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define if you have the sched_setscheduler function. */
#define HAVE_SCHED_SETSCHEDULER 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have working serdisplib */
/* #undef HAVE_SERDISPLIB */

/* Define to 1 if you have the <serdisplib/serdisp.h> header file. */
/* #undef HAVE_SERDISPLIB_SERDISP_H */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the spi headers */
/* #undef HAVE_SPI */

/* Define to 1 if you have the `statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `swapctl' function. */
/* #undef HAVE_SWAPCTL */

/* Define if you have System V IPC */
#define HAVE_SYSV_IPC 1

/* Define to 1 if you have the <sys/cpuvar.h> header file. */
/* #undef HAVE_SYS_CPUVAR_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dkstat.h> header file. */
#define HAVE_SYS_DKSTAT_H 1

/* Define to 1 if you have the <sys/dustat.h> header file. */
/* #undef HAVE_SYS_DUSTAT_H */

/* Define to 1 if you have the <sys/filsys.h> header file. */
/* #undef HAVE_SYS_FILSYS_H */

/* Define to 1 if you have the <sys/fstyp.h> header file. */
/* #undef HAVE_SYS_FSTYP_H */

/* Define to 1 if you have the <sys/fs_types.h> header file. */
/* #undef HAVE_SYS_FS_TYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/io.h> header file. */
/* #undef HAVE_SYS_IO_H */

/* Define to 1 if you have the <sys/loadavg.h> header file. */
/* #undef HAVE_SYS_LOADAVG_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/pcpu.h> header file. */
#define HAVE_SYS_PCPU_H 1

/* Define to 1 if you have the <sys/procfs.h> header file. */
#define HAVE_SYS_PROCFS_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
/* #undef HAVE_SYS_STATFS_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define if your system's sys/sem.h file defines union semun */
#define HAVE_UNION_SEMUN 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Set default port where LCDd should listen */
#define LCDPORT 13666

/* Define to 1 to enable menu support in lcdproc client */
/* #undef LCDPROC_MENUS */

/* Define to 1 to allow transitions between different client's menus */
/* #undef LCDPROC_PERMISSIVE_MENU_GOTO */

/* Define to 1 to enable server test menus */
/* #undef LCDPROC_TESTMENUS */

/* Define if you're using Linux. */
/* #undef LINUX */

/* Set to the extension for dynamically loaded modules */
#define MODULE_EXTENSION ".so"

/* Location of your mounted filesystem table file */
#define MTAB_FILE "/etc/fstab"

/* Define if you're using NetBSD. */
/* #undef NETBSD */

/* Define if you're using OpenBSD. */
/* #undef OPENBSD */

/* Name of package */
#define PACKAGE "lcdproc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "lcdproc@lists.omnipotent.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "lcdproc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "lcdproc 0.5.7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "lcdproc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.5.7"

/* Define version of lcdproc client-server protocol */
#define PROTOCOL_VERSION "0.3"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 to avoid gaps in horizontal bar graphs (if HW supports it) */
/* #undef SEAMLESS_HBARS */

/* Define if you're using Solaris. */
/* #undef SOLARIS */

/* Define to 1 to display NFS filesystem stats in lcdproc client */
/* #undef STAT_NFS */

/* Define to 1 to display SMBFS filesystem stats in lcdproc client */
/* #undef STAT_SMBFS */

/* Define to 1 if you have the two-argument statfs function with statfs.bsize
   member (AIX, 4.3BSD) */
/* #undef STAT_STATFS2_BSIZE */

/* Define to 1 if you have the two-argument statfs function with statfs.fsize
   member (4.4BSD and NetBSD) */
/* #undef STAT_STATFS2_FSIZE */

/* Define to 1 if you have the two-argument statfs function with struct
   fs_data (Ultrix) */
/* #undef STAT_STATFS2_FS_DATA */

/* Define to 1 if you have the 3-argument statfs function (DEC OSF/1) */
/* #undef STAT_STATFS3_OSF1 */

/* Define to 1 if you have the four-argument statfs function (AIX-3.2.5, SVR3)
   */
/* #undef STAT_STATFS4 */

/* Define to 1 if you have the statvfs function */
#define STAT_STATVFS 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Set this to your system host (Linux, Solaris, OpenBSD, NetBSD, FreeBSD or
   Darwin) */
#define SYSTEM_HOST FreeBSD

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "0.5.7"

/* Define to 1 if you want to build hd44780 driver with ethlcd support */
#define WITH_ETHLCD 1

/* Define if you are using a Raspberry Pi. */
/* #undef WITH_RASPBERRYPI */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
