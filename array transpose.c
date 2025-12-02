#include<stdio.h>
int main()
{
	int A[10][10],r,c,i,j;
    printf("enter matrix rows & columns size");
	scanf("%d%d",&r,&c);
	printf("enter A matrics values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("transpose matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
