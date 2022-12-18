#include "stdio.h"

#include "cpu.h"


/*
	NOTES:
	
	* I have a different project in a private repo that I'm building a core
	  simulator and assembler for. I can probably just port that to this with a
	  few changes.
	* Keep RAM and register count small for easier dependency tracking.
	* Drop false dependencies (WAW, etc.).
	* Generate dependency graph (export if requested).
	* Have several mechanisms for plotting dependency graph.
	  * time-oriented
	  * color-based clustering
	  * position-based clustering
	  * etc.
*/


int main(int ac, char** av){
	printf("Hello world!\n");
}
