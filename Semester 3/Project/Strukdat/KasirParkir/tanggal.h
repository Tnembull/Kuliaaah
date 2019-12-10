#include <time.h>

void tanggal(){
	int i =0;
	clock_t tanggal;
	tanggal = clock() +CLOCKS_PER_SEC;
	while(clock() < tanggal)
}
