# Guitar-Hero-Controller

This is the file that has the code for the Arduino controller. The code itself is fairly simple, it's simply checking each pin's input and sending the xinput signal it is tied to. The pins are using pull up resistors, so they are actually set to high by default. That's why the inputs are inverted. Due to not needing the analog stick for this it isn't mapped in the file. The difficult part was creating the PCB and soldering all the connections correctly, as is apparent the code itself is very simple.
