
#include <stdio.h>
#include <stdlib.h>

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "virtual_com.h"


int main(void)
{
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();
    BOARD_InitUSB2UARTBridge();

    while (1)
    {
    }
}
