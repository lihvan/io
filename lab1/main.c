#include "msc.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
	sc_memoryInit();
	sc_memorySet(5, 1);
	sc_memoryLoad("c.txt");
	its_showtime();
	}
