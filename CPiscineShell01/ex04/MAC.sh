#!/bin/sh

ip link | awk '/ether/ {print $2}'
