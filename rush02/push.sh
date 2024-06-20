#!/bin/bash

git add data/*
git add includes/*
git add srcs/ft_*.c
#git add srcs/*.c
git add srcs/main.c
git add Makefile
git add push.sh

git commit -m "ngoc"

git push
