# README #

This is a simple WiFi oscilloscope using a STM32F303RE (Nucleo64) as the analog frontend (capturing analog samples) and an Onion Omega 2+ (acting as a serial-to-WiFi bridge and TCP server).
A graphic frontend (written in Free Pascal / Lazarus) connects to the TCP server, collects and displays data.

For more information visit: http://embeddedsystems.io/wifi-scope

# TODO #

* improve operation (remove artifacts that sometimes appear on screen)
* add auto-discovery feature
* use two ADCs interleaving convertions to double the maximum sample-rate to 10Msps

## Fabio ##
* TCP server
* frontend working
* connection working

## Divesh ##
capture sampled data

## Charlie ##
* work around code for the issue of sending '\n'
* packet handler
* common header which can be used commonly among frontend, onion and STM32

## ##