#!/bin/bash

# Device name
DEVICE="/dev/tty.usbmodem1101"

# Serial connection parameters
BAUD_RATE="115200"  # You can change this if needed

# Function to check if the device exists
device_exists() {
    [ -e "$DEVICE" ]
}

# Loop to keep trying to connect even after the serial console closes
while true; do
    if device_exists; then
        echo "Attempting to connect to $DEVICE..."
        
        # Try to open the serial console with screen
        screen "$DEVICE" "$BAUD_RATE"
        
        # If screen session closes, print message and retry
        echo "Serial console closed. Retrying in 2 seconds..."
        sleep 2
    else
        echo "$DEVICE not found. Retrying in 2 seconds..."
        sleep 2
    fi
done
