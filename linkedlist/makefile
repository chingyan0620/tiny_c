


main:main.o linkedlist.o
	gcc main.o -o  main 
main.o:main.c linkedlist.h
	gcc main.c -c -o main.o 

linkedlist.o:linkedlist.c linkedlist.h
	gcc linkedlist.c -c -o linkedlist.o

.PHONY:clean
clean:
	del *.o main.exe -rf