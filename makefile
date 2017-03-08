main.o:main.c
	gcc -g main.c
list.o:list.c
	gcc -g list.c
main:main.o list.o
	gcc -o main.o list.o
