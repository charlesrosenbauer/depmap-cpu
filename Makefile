all:
	clang -lSDL2 -O3		src/*.c -o depmap

debug:
	clang -lSDL2 -Og -g		src/*.c -o depmap
