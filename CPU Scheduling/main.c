#include <stdio.h>
#include <stdlib.h>
#include "QUEUE_CPUSched.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ProcQ pq = input();
	ProcQ sorted = procSort(&pq);
//	pq = display(sorted);
	visualizePQ(sorted);
	
	return 0;
}
