#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "BST.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	NodePtr tr;
	initBST(&tr);
	
	Product p3 = {"Cadbury", 100.00, 30, {12, 7, 2024}};
	Product p1 = {"Ferrero", 200.00, 30, {22, 1, 2024}};
	Product p2 = {"Hershey", 150.00, 20, {2, 4, 2024}};
	Product p4 = {"Lindt", 235.00, 50, {24, 11, 2024}};
	Product p5 = {"Goya", 90.00, 100, {8, 8, 2024}};
	Product p6 = {"M&Ms", 110.00, 100, {15, 10, 2024}};
	Product p7 = {"Crashers", 125.00, 30, {27, 11, 2024}};
	insertProd(&tr, p1);
	insertProd(&tr, p2);
	insertProd(&tr, p3);
	insertProd(&tr, p4);
	insertProd(&tr, p5);
	insertProd(&tr, p6);
	
	visualizeBST(tr);
	
	bool member = isMember(&tr, p7);
	printf("\n\nIs %s a member? %d", p7.prodName, member);
	
	
	
	return 0;
}
