#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr, sum=0;
	FILE *fdata;
	fdata=fopen("data.txt","r");
	ptr=(int*)malloc(100*sizeof(int));
	while (fdata==NULL)
		{printf("Error detected in the file"); break;}
	while ( fscanf(fdata, "%d", ptr)!=EOF)
	{ sum=sum+*ptr;	}
	printf("Sum of the numbers in the data.txt is %d\n",sum);
	fclose(fdata);
	fdata=fopen("result.txt", "w+");
	fprintf(fdata, "%d\n", sum);
	fclose(fdata);
	return sum;
}
