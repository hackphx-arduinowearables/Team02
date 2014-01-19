#  Epic Team 2 is Epic 

Our HackPHX wearable technology project is called an UnWatch!

The general idea is that you wear a device that relays information about relative time.

Time is conveyed in terms of relative distances between planned events.  

For example, you eat breakfast at some given time, and plan on going for a walk at a later time.

The device will notify you when it is time to eat breakfast, and then gradually show you incremental changes in time passed or time remaining until the next planned activity (going for walk).

But instead of telling you exactly how many minutes you have from now until the next event you will instead see that, for example, one-quarter of the time between the two events has passed, then one half, and  so on.


You have a sense of passing time and time remaining but it is relative to event intervals and not expressed in absolute values.

So, when you look at our "UnWatch" you will not think "I have 25 minutes until I go for a walk" but "I'm about 25% into the time for this current activity."

You set schedule items by sending messages over [Skynet](http://skynet.im), an Internet of Things communication tool.

You can do this using a Web interface (http://hack.tacio.us) or by sending SMS text messages.

Skynet can also be used to send instant messages or notifications to the device.

In addition to the OLED display the device uses vibration and LEDs to indicate messages received and impending events.

Our UnWatch also supports a convential time on the display using the Xadow RTC module.

## Random notes

We have Bluetooth LE which connects to SkyNet.im (an opensource machine-to-machine instant messaging platform).

We use that to talk to the Xadow Main (which includes: BLE, OLED, and RTC baords).








