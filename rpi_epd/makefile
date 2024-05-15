TARGET = epd
CC = gcc
# CC = aarch64-none-linux-gnu-gcc 
DIR_LIB = ./lib
CFLAGS = -c -Wall -Ilib

main:main.o 
	$(CC) main.o -o main 
main.o:main.c EPD_Test.o
	$(CC)  main.c -c   
EPD_Test.o:$(DIR_LIB)/EPD_Test.h
	$(CC) $(DIR_LIB)/EPD_Test.h -c
clean:
	rm -f *.* 