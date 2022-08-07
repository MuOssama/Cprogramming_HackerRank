#include <stdio.h>
int main(){
	int a, b;
	float c, d;
	scanf("%d%d",&a,&b);
	scanf("%f%f",&c,&d);
	printf("%d %d\n",a+b,a-b);
	printf("%0.1f %0.1f",c+d,c-d); //the 0.1 in %0.1f is to print one decimal point (e.g. 4.12345 wil be 4.1)
}