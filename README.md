# PS2KeyboardMacro
turn a ps2 keyboard into a macro keyboard using Arduino Uno

Requirements:
    PS2KeyAdvanced Library,
    https://github.com/techpaul/PS2KeyAdvanced
    Flip (for Windows),
    https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/FLIP
    Keyboard firmware,
    http://www.tinkernut.com/demos/arduino_hid/arduino_hid.zip

connect keyboard clock to pin 2
connect keyboard data to pin 3
https://en.wikipedia.org/wiki/PS/2_port

you need to modify ksend function

change usb[2] value to any key you want to send.

see Keytab.h 
https://github.com/fmented/PS2KeyboardMacro/blob/master/macros/Keytab.h


if you need a modifier key use:
usb[0]=CTRL; or usb[0]=ALT;


if you need more than one modifier, use:
usb[0]=CTRL+SHIFT;


to send a keystroke use:
sendKey();
make sure to use releaseKey(); 
everytime you send a keystroke otherwise it can causes an error to your PC

note: if keyboard doesn't work properly, please turn numlock or capslock on/off and see if it works
      Here’s a link to the keycap images, thank to Taran from LTT:
      https://www.dropbox.com/s/ei97zf83ivaa9i4/taran%20keys%205.png?dl=0
      
   

