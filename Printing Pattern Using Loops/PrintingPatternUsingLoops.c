#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int start = 0,input=(2*n)-1;
	int arr[input][input],end = input-1;
    for(int k=n;k>0;k--){
        
    for(int i=start;i<=end;i++){
        for(int j=start;j<=end;j++){
            arr[i][j]=n;
        }

    }
    start++;
	end--;
	n--;
    }
	 for(int i=0;i<input;i++){
        for(int j=0;j<input;j++){
			printf("%d ",arr[i][j]);
        }
	  printf("\n");

    }
    return 0;
}