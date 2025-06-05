#Bojan Grkovic 
#Simple Makefile for simple C program

all: BMRCalculator.c
	gcc BMRCalculator.c -o BMRCalculator -Wall
clear:
	rm BMRCalculator

