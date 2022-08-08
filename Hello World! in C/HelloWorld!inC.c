#include<stdio.h>
int main(){
	char s[99];
	scanf("%[^\n]%*c",s); //this scans one line of input (with and without spaces)
	printf("Hello, World!\n");
	printf("%s",s);

	
}