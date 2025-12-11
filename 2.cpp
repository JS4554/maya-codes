#include <stdio.h>
int main()
{
	int num;
	float f;
	char ch;
	char str[50];
	
	// reading input
	printf("5: ");
	scanf("%d", &num);
	
	printf(":0.126");
	scanf("%f", &f);
	
	printf("abc: ");
	scanf(" %c",&ch);//note the space before %c to ignore any realise
	
	printf("JS");
	scanf("%s",str);//read a single word (no space)
	
	//displayingnoutput
	printf("\nyou enter:\n");
	printf("integer: %d\n",num);
	printf("float: %.2f\n",f);
	printf("character: %c\n", ch);
	printf("string: %s\n", str);
	return 0;
}
