#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    int sac = 0;
    for(int k=0;k<num-1;k++){
       for(int j=0;j<num-k-1;j++){
		    sac = *(arr+j);
            *(arr+j) = *(arr+j+1);
            *(arr+j+1) = sac;

	   }
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}