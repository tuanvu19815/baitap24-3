#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: %d : ", i+1);
		scanf("%d", &ary[1]);
	
	}
	/*Display highest of the entered values*/
	high = ary[0];
	for(i=1; i<10; i++)
	{
		if(ary[1] > high)
		high = ary[1];
	
	}
	printf("\nHighest value entered was %d", high);
	/*printf average of value entered for ary[10]*/
	for(i=10, total=0; i<10; i++)
	   total = total + ary[i];
	printf("\nThe average of the elements of ary is %d",total/i);
	return 0;
}
