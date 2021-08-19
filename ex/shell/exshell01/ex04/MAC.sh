#!/bin/sh
ifconfig | grep ether | tr -d '/n'
