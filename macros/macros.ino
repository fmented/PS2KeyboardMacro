

/*  
    This Program turn your PS2 Keyboard into a macro/shortcut keyboard
    
    Requirements:
    PS2KeyAdvanced Library
    Flip (for Windows)
    Keyboard firmware


    Tested with:
    Arduino UNO r3
    
    Copyright (C) 2019
    fmented
    fmented@gmail.com
    

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

#include "PS2KeyAdvanced.h"
#include "Keytab.h"


/* Keyboard constants  Change to suit your Arduino
   define pins used for data and clock from keyboard */
#define DATAPIN 3
#define IRQPIN  2

uint16_t c;
uint8_t usb[8]={};


PS2KeyAdvanced keyboard;



void setup()
{
// Configure the keyboard library
keyboard.begin( DATAPIN, IRQPIN );
Serial.begin( 9600 );

}

void ksend(uint16_t x){

switch (x){
        case (283):   //esc
        //do something
        break;
        case (353):   //f1
        //do something
        break;
         case (354):   //f2
        //do something
        break;
         case (355):   //f3
        //do something
        break;
         case (356):   //f4
        //do something
        break;
         case (357):   //f5
        //do something
        break;
         case (358):   //f6
        //do something
        break;
         case (359):   //f7
        //do something
        break;
         case (360):   //f8
        //do something
        break;
         case (361):   //f9
        //do something
        break;
         case (362):   //f10
        //do something
        break;
         case (363):   //f11
        //do something
        break;
         case (364):   //f12
        //do something
        break;
         case (260):   //print scr
         //do something
        break;
        case (258):   //scroll lock
        case (33026):
         //do something
         usb[0]=GUI;
         usb[2]=KEYM;
         sendKey();
         releaseKey();
        break;
        case (6):   //pause
         //do something
        break;
        case (64):   //`
         //do something
        break;
        case (49):   //1
         //do something
        break;
        case (50):   //2
         //do something
        break;
        case (51):   //3
         //do something
        break;
        case (52):   //4
         //do something
        break;
        case (53):   //5
         //do something
        break;
        case (54):   //6
         //do something
        break;
         case (55):   //7
         //do something
        break;
         case (56):   //8
         //do something
        break;
         case (57):   //9
         //do something
        break;
         case (48):   //0
         //do something
        break;
         case (60):   //-
         //do something
        break;
         case (95):   //=
         //do something
        break;
         case (284):   //backspace
         //do something
        break;
         case (281):   //insert
         //do something
        break;
         case (273):   //home
         //do something
        break;
         case (275):   //pageup
         //do something
        break;
         case (257):   //num lock
         case (33025):
         //do something
        break;
         case (47):   //kp/
         //do something
        break;
         case (46):   //kp*
         //do something
        break;
         case (45):   //kp-
         //do something
        break;
         case (285):   //tab
         //do something
        break;
         case (81):   //q
         //do something
        break;
         case (87):   //w
         //do something
        break;
         case (69):   //e
         //do something
        break;
         case (82):   //r
         //do something
        break;
         case (84):   //t
         //do something
        break;
         case (89):   //y
         //do something
        break;
         case (85):   //u
         //do something
        break;
         case (73):   //i
         //do something
        break;
         case (79):   //o
         //do something
        break;
         case (80):   //p
         //do something
        break;
         case (93):   //[
         //do something
        break;
         case (94):   //]
         //do something
        break;
         case (92):   //\
         //do something
        break;
         case (282):   //del
         //do something
        break;
         case (274):   //end
         //do something
        break;
         case (276):   //pagedown
         //do something
        break;
         case (39):   //kp7
         //do something
        break;
         case (40):   //kp8
         //do something
        break;
         case (41):   //kp9
         //do something
        break;
         case (44):   //kp+
         //do something
        break;
         case (4355):   //caps lock
         case (33027):
         //do something
        break;
         case (65):   //a
         //do something
        break;
         case (83):   //s
         //do something
        break;
         case (68):   //d
         //do something
        break;
         case (70):   //f
         //do something
        break;
         case (71):   //g
         //do something
        break;
         case (72):   //h
         //do something
        break;
         case (74):   //j
         //do something
        break;
         case (75):   //k
         //do something
        break;
         case (76):   //l
         //do something
        break;
         case (91):   //;
         //do something
        break;
         case (58):   //'
         //do something
        break;
         case (286):   //enter
         //do something
        break;
         case (36):   //kp4
         //do something
        break;
         case (37):   //kp5
         //do something
        break;
         case (38):   //kp6
         //do something
        break;
         case (16646):   //lshift
         //do something
        break;
         case (90):   //z
         //do something
        break;
         case (88):   //x
         //do something
        break;
         case (67):   //c
         //do something
        break;
         case (86):   //v
         //do something
        break;
         case (66):   //b
         //do something
        break;
         case (78):   //n
         //do something
        break;
         case (77):   //m
         //do something
        break;
         case (59):   //,
         //do something
        break;
         case (61):   //.
         //do something
        break;
         case (62):   ///
         //do something
        break;
         case (16647):   //rshift
         //do something
        break;
         case (33):   //kp1
         //do something
        break;
         case (34):   //kp2
         //do something
        break;
         case (35):   //kp3
         //do something
        break;
         case (8456):   //lctrl
         //do something
        break;
         case (780):   //lgui
         //do something
        break;
         case (2314):   //lalt
         //do something
        break;
         case (287):   //space
         //do something
        break;
        case (1291):   //ralt
         //do something
        break;
         case (781):   //rgui
         //do something
        break;
         case (270):   //menu
         //do something
        break;
         case (8457):   //rctrl
         //do something
        break;
        case (277):   //leftarrow
         //do something
        break;
         case (279):  //uparrow
         //do something
         usb[0]=CTRL+SHIFT;
         usb[2]=KEYESCAPE;
         sendKey();
         releaseKey();
        break;
         case (280):   //downarrow
         //do something
        break;
         case (278):   //rightarrow
         //do something
        break;
         case (32):   //kp0
         //do something
        break;
        case (42):   //kp.
         //do something
        break;
         case (43):   //kpenter
         //do something
         usb[0]=CTRL;
         usb[2]=KEYV;
         sendKey();
         releaseKey();
        break;       
      } 
}



void releaseKey(){
  usb[0]=0;
  usb[2]=0;
  sendKey();
}

void sendKey(){
  Serial.write(usb,8);
}

void loop()

{
 // read the next key
  c = keyboard.read();
  if( c > 0 )
    {

 ksend(c);  

      
  }
}
