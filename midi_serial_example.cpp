#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "tusb.h"


int main()
{
    tusb_init();
    stdio_init_all();

    // Wait for the USB CDC connection
    while (!tud_cdc_connected()) {
        // Call TinyUSB task to process USB events
        tud_task();
    }

    printf("Serial connected! Proceeding...\n");

    while (true)
    {
        tud_task();
    }

    return 0;
}
