#include <stdio.h>
#include <stdlib.h>
#include "QUEUE_CPUSched.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ProcQ pq;
	initProcQ(&pq);
	
	pq = input();
	display(pq);
//	visualizePQ(pq);
	
	return 0;
}
