#include <stdio.h>
#include <stdlib.h>

int main()
{
	// հայտարարում ենք n տիպի փոփոխական և նրան վերագրում ենք 6 
	int  n  = 6;  
	printf("n = %d\n", n);
	printf("\n");
	
	// հայտարարում ենք pn pointer և առանձնացնում ենք նրա համար հիշողություն 
	int *pn = malloc( sizeof ( int ) ); 
	
	//pn pointer-ին վերագրում ենք 5
	*pn = 5; 
	printf("*pn = %d\n", *pn);
	printf("\n");
	//n-ին վերագրվում է այն արժեքը, որը ցույց է տալիս pn-ը
	n = *pn;  
	printf("*pn = %d\n", *pn);
	printf("\n");
	free(pn);  // դատարկում ենք pn-ի համար առանձնացված հիշողությունը
	pn = &n;   //pn  pointer-ին վերագրում ենք n փոփոխականի արժեքը
	n = 7;     // *pn դարձավ 7
	printf("*pn = %d\n", *pn);
}