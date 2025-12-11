#include <stdio.h>
int main(){
	char ch;
	char str[50];
	char sentence[100];
    //taking a single character input
	printf("enter a character:");
	scanf("%c",&ch);//space before %c ignores newline
	
	//taking a string 
	printf("enter a word:");
	scanf("%s", &str);
	
	//taking a full sentence(with a space)
	printf("enter a sentence:");
	scanf("%[^\n]", sentence); //reads until newline
	
	//displaying results
	printf("\nyou entered:\n");
	printf("character:%c\n",ch);
	printf("word: %s\n", str);
	printf("sentence: %s\n",sentence);
	
	return 0;
}
