#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n = 0;
	int item;
	char x[10] [12];
	char temp[12];
	
	printf("\nEnter each string on a separate line \n\n");
	printf("\nType 'END', when over \n\n");
	/* read in the list of strings */
	do 
	{
		printf("String %d : ", n+1);
		scanf("%s", x[n]);
	
	} while (strcmp(x[n++], "END"));
	/*reorder the list of string */
	n = n - 1;
	for(item=0; item<n-1; ++item)
	{
		/*find lowest of remaining strings */
		for (i=item+1; i<n; ++i)
	{
	if (strcmp (x[item], x[i]) >0)
	{
		/*interchange two stings */
		strcpy(temp, x[item]);
		strcpy(x[item], x[i]);
		strcpy(x[i], temp);
		
	}
}
}
/* Display the arranged list of string */
printf("Recorded list of string : \n");
for(i =0; i < n; ++i)
{
	printf("\nString %d is %s", i+1, x[i]);
}
}



