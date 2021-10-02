
# USB to UART Bridge

This is the setup procedure for the programs in this repository. 

Toolchain supported
===================
- MCUXpresso  11.4.0

Hardware requirements
=====================
- Mini/Micro USB cable
- FRDM-K64F board
- Personal Computer
- One male to male jumper cable

Board settings
==============
Nothing special is needed.

Preparing the software
======================
You will first need to install MCUXpresso Version 11.4.0. This is the version that I'm using,
but other versions may work as well.  Once you have MCUXpresso installed, execute the program.
Once MCUXpresso comes up, you will need to select 'Switch Workspace -> Other...' from the File 
menu.  Once the pop-up has completed loading, select ./usb-2-uart-bridge/workspace as your 
workspace.  You will then need to select "Import projects..." in the Project Explorer tab.  
Then under General, select 'Existing Projects into Workspace" and press the Next button.   
Select <path>.\usb-2-uart-bridge\workspace as your root directory, make sure that the 
mek6802d5_cassette_interface project is selected and then press the Finish button.  This should load the
mek6802d5_cassette_interface program into the project Explorer tab.  Then simply left click on the 
mek6802d5_cassette_interface project, right click to bring up the menu, and then select Build Project.
This should compile the program.

Prepare the board
=================
1.  Connect a USB cable between the PC host and the OpenSDA USB port on the board.
2.  Open a serial terminal on PC for OpenSDA serial device with these settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.
5.  Connect a USB cable between the PC host and the K64 Micro Port.
6.  Place the jumper cable between pins J1[2] and J1[4].
