#!/bin/bash
git status --ignored --untracked-files=all --short | grep '!!' | sed 's_!! __g'
