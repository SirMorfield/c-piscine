#!/bin/bash
ifconfig | grep -io "[0-9A-F]\{2\}\(:[0-9A-F]\{2\}\)\{5\}"