
main:main.o  
	gcc -o main  main.o 

main.o:main.c creatBTree.o tree_1.o
	gcc main.c -c -o main.o 

creatBTree.o:creatBTree.c
	gcc creatBTree.c -c -o creatBTree.o

tree_1.o:tree_1.h
	gcc tree_1.h -c tree_1.o


# main.o:main.c linkedlist.h
# 	gcc main.c -c -o main.o 

# linkedlist.o:linkedlist.c linkedlist.h
# 	gcc linkedlist.c -c -o linkedlist.o

.PHONY:clean
clean:
	del *.o main.exe -rf