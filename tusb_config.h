#ifndef TUSB_CONFIG_H
#define TUSB_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

// tusb_config.h

#define BOARD_TUD_RHPORT      0
//#define CFG_TUSB_DEBUG 2
//#define CFG_TUSB_DEBUG_PRINTF printf
#define BOARD_TUD_MAX_SPEED   OPT_MODE_DEFAULT_SPEED
#define CFG_TUSB_RHPORT0_MODE  OPT_MODE_DEVICE
#define CFG_TUD_ENABLED       1
#define CFG_TUD_MAX_SPEED     BOARD_TUD_MAX_SPEED
#define CFG_TUSB_MEM_ALIGN        __attribute__ ((aligned(4)))
#define CFG_TUD_ENDPOINT0_SIZE    64

#define CFG_TUD_CDC               1
#define CFG_TUD_MSC               0
#define CFG_TUD_HID               0
#define CFG_TUD_MIDI              1
#define CFG_TUD_VENDOR            0

#define CFG_TUD_CDC_RX_BUFSIZE 64
#define CFG_TUD_CDC_TX_BUFSIZE 64
#define CFG_TUD_MIDI_RX_BUFSIZE (TUD_OPT_HIGH_SPEED ? 512 : 64)
#define CFG_TUD_MIDI_TX_BUFSIZE (TUD_OPT_HIGH_SPEED ? 512 : 64)

#ifdef __cplusplus
}

#endif

#endif