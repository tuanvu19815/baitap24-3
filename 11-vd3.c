#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alpha[26];
	int i,j;
	for(i=65, j=0; 1<9; i++, i++)
	{
		alpha[j] = i;
		printf("\nThe character now assigned is %c \n", alpha[j]);
		
	}
	getcha();
	return 0;
}
