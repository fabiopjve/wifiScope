# README #

This is a simple WiFi oscilloscope using a STM32F303RE (Nucleo64) as the analog frontend (capturing analog samples) and an Onion Omega 2+ (acting as a serial-to-WiFi bridge and TCP server).
A graphic frontend (written in Object Pascal / Lazarus) connects to the TCP server, collects and displays data.

# TODO #

* improve operation

## Fabio ##
* TCP server
* frontend working
* connection working

## Divesh ##
capture the samples data

## Charlie ##
* work around code for the issue of sending '\n'
* packet handler
* common header which can be used commonly among frontend, onion and STM32

## ##