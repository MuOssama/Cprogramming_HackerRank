#include<stdio.h>
int main(){
	char ch,i=0,s[99],sen[99];
	scanf("%c",&ch);
	scanf("\n");              //this new line \n is to prevent the next scanf to read the "enter" of the past scanf character a input  
	scanf("%[^\n]%*c",s);     //this line read full line until \n (new line character) remember this %[^\n]%*c
	scanf("\n");
    scanf("%[^\n]%*c",sen);
	
	printf("%c\n",ch);
	printf("%s\n",s);
	printf("%s\n",sen);
	




}
