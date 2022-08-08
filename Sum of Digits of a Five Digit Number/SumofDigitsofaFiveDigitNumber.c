#include<stdio.h>
#include<math.h>
int main(){
	unsigned int n,div = 10000,max = 0;
	char i=0;
	scanf("%d",&n);
	while( i<5){
		max = (max + (n / div));
		n = (n%div);
		i++;
		div = div/10;
	} 
	        printf("%d",max);

		return 0;

}