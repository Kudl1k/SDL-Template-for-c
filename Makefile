main:
	gcc -g -fsanitize=address main.c init.c -lSDL2 -o program