# Many LEDs

In this lab, you'll play with LEDs in a multiple of 8. 

This is significant in that each LED can represent a "bit" and together form an 8 bit byte.

![color-receptivity dim=310h](img/color-responsivity.png "Sensitivity of the red, green, and blue cone cells")

1.  Start with the following circuit. Make sure to orient the LED correctly -- the flat side should be on the left as in the diagram below.

    ![just-the-led dim=400wL](img/just-the-led-please.png "Fritzing for RGB LED with single active channel") ![just-the-led-schematic dim=400wL](img/just-the-led-please-schematic.png "Schematic for RGB LED with single active channel")

2.  The LEDs can be arranged in any color combination you choose. For example, you could emulate a signal meter that is green until you get to a certain level, and then turns red.  

3.  Connect the LED legs to pins 3 through 11 respectively:

    ![legs-connected-to-pins dim=400wL](img/legs-connected-to-pins.png "Fritzing for RGB LED on pins 3 to 11") ![legs-connected-to-pins dim=400wL](img/legs-connected-to-pins-schematic.png "Schematic for LEDs on pins 3 to 11")

4.  Write code to turn all the LEDs on, then turn them all off.
    <%= sequence.ino =%>
    
5.  Now turn them on one at a time from one end to the other, and then off one at a time from one end to the other.

6.  Create an array with containing 8 bits. You can think of an array as a set of drawers (Indexes) numbered 0 through 7. You can then store a 1 or a 0 in each of the indicies... and when you "draw" the array to the set of LEDs they turn on when the index = high (1) or low (0).


7.  Uploading new code to see the effects of new arguments to `analogWrite` is tedious. Instead, use a potentiometer to control the brightness of each color. Connect three potentiometers to analog pins `A0` and `A2`.

    ![three-potentiometers dim=400wL](img/three-potentiometers.png "Fritzing for RGB LED and three potentiometers") ![three-potentiometers dim=400wL](img/three-potentiometers-schematic.png "Schematic for RGB LED and three potentiometers")

8.  Use `analogRead` on pins `A0`, `A1`, respectively, to set the values. Note that `analogRead` returns a number between `0` and `1023`. Divide them by 128 to get values from 0 to 7 from each pin.

9.  Turn all the potentiometers to 0. You should observe the LED off.

10. Modify your code to use [the `map` function](http://arduino.cc/en/Reference/map) to convert the input value to the output value, instead of dividing by 4.

11. Experiment with turning potentiometers to create dark margins on the left and right that get narrower and wider as you turn the pots. 



## Challenges:
1.  Use `random()` or another algorithm to slowly move a single "pixel?"
2.  Can you create a "chase" in which only one LED is lit and it "travels" from one end to the other and back?

3.  Connect a button to a digital input pin.
    - Instead of moving LEDs with the potentiometers, increase the count whenever the button is pressed.

