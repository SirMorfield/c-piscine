#!/bin/bash
find . -type f -name "*.sh" -execdir echo '{}' ';' | sed 's/.sh$//'
