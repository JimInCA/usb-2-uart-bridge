
# USB to UART Bridge using NXP FRDM-K64F

The intent of this project is to create a stand alone USB to UART bridge using the FRDM-K64F's K64 Micro USB port.


![alt text](./images/FRDM-K64F-Board.jpg?raw=true "FRDM-K64F")

In the image above, the K64 Micro USB port is on the bottom left side of the board and is connected to my host through the black USB cable.  I'm using UART3 for my test which places UART3_RX on J1[2] and UART3_TX on J1[4].  I've also added a jumper cable between pins J1[2] and J1[4] to wrap the uart tx signal back into the usb rx signal for UART3 for testing.  

When the board is powered up, you can use a terminal program such as Tera Term for testing.  All you need to do is connect Tera Term to the COM port for the K64 Micro USB port.  Then just type and everything that you type would be echoed back to terminal.  Eazy-pezy...
