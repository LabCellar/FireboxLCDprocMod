# Firebox LCDproc mod

The original Firebox X-Core LCD had limited backlight life. So when these boxes were supported by LCDproc, the driver author did implement some bakclight auto-cutoff. Things have changed, and today Fireboxes are more reliable. So it's time to remove this backlight auto-cutoff.

We've tested this modification on 3 Firebox XTM-5 so far, but it should work on other models (even older ones). Feel free to leave an issue with your feedback ;)

This driver is based on LCDproc's sources, therefore we also distribute it under GPLv2.

## How to install (pfSense users) ##

These instructions suppose you already have a working LCDproc installation. If not, I can't help you :(

 * Stop LCDproc service if running
 * Make a backup of the current SDEC driver :
 ```bash
 mv /usr/local/lib/lcdproc/sdeclcd.so /usr/local/lib/lcdproc/sdeclcd.so.bak
 ```
 * Download the patched sdec driver ([our builds are available here](https://github.com/LabCellar/FireboxLCDprocMod/releases)) and copy it to `/usr/local/lib/lcdproc/`
 * Start LCDproc service
 * Enjoy !

## How to compile (pfSense users)

Firstly, refer yourself to [this webpage](https://doc.pfsense.org/index.php/Versions_of_pfSense_and_FreeBSD) to find the matching FreeBSD release for your pfSense version. Install it to a VM (same CPU arch, I don't know how to cross-compile on BSD). Download this git repository. Then run `./configure` and `make`. Locate the `sdeclcd.so` you just build, and follow the instructions above to install it on your pfSense hardware.
