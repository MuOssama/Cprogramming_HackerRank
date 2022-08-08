#include <stdio.h>
int max_num(int a, int b, int c,int d); //function decleration to prevent implicit decleration warning

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d",max_num(a,b,c,d));
}

int max_num(int a, int b, int c,int d){
	int max = 0;
	if(a>b){
		if(a>c){
			if(a>d){
				max = a;
			}
			else{
				max = d;
			}
		}
		else{
			if(c>d){
				max = c;
			}
			else{
				max = d;
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				max = b;
			}
			else{
				max = d;
			}
		}
		else{
			if(c>d){
				max = c;
			}
			else{
				max = d;
			}
		}
	}
	return max;
}