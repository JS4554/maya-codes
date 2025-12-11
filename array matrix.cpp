#include<stdio.h>
int main()
{
	int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
	printf("addition of two matrices :\n");
	printf("input the size of the square matrix; ");
	scanf("%d",&n);
	
	/* stored values into the arry*/
	printf("input elements in the first matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element - [%d],[%d] ; ",i,j);
			scanf("%d",&arr1[i][j]);
		}
    }
    printf("input elements in the second matrix :\n");
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
		printf("element - [%d],[%d] :" ,i,j);
		scanf("%d",&brr1[i][j]);
		}	
     	}
    printf("\nThe first matrix is :");
    for(i=0;i<n;i++)
    {
    	printf("\n");
    	for(j=0;j<n;j++)
    	printf("5d\t",arr1[i][j]);
	}
	printf("\nThe second matrix is :");
	for(i=0;i<n;i++)
	{
	printf("\n");
	for(j=0;j<n;j++)
	printf("%d\t",brr1[i][j]);
	}
	/*calculate the sum of the matrix */
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	crr1[i][j]=arr1[i][j]+brr1[i][j];
	printf("addition of two matrices is :\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",crr1[i][j]);
	}
	 }
