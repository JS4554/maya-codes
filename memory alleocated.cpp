#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int *p = (int*)malloc(n * sizeof (int)); //memory allocated & initial
	
	if(p==NULL){
		printf("Memory not allocated\n");
		return 0;
	}
	
	printf("value stored initially in calloc memory:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]); // all will be 0
	}
	
	free(p); //releasing memory
	return 0;
}
