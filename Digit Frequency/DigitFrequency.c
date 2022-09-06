#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int len = 0,arr[10];
    char *s;
    s = (char *)malloc(1000*sizeof(char));
    scanf("%[^\n]%*c",s);
    len = strlen(s)+1;
    realloc(s,len*sizeof(char));
    for(int k=0;k<10;k++)
        arr[k]=0;

    for(int i=0;i<=len;i++){
        if(s[i] == '0')
            arr[0]++;
        else if(s[i] == '1')
            arr[1]++;
        else if(s[i] == '2')
            arr[2]++;
        else if(s[i] == '3')
            arr[3]++;
        else if(s[i] == '4')
            arr[4]++;
        else if(s[i] == '5')
            arr[5]++;
        else if(s[i] == '6')
            arr[6]++;
        else if(s[i] == '7')
            arr[7]++;
        else if(s[i] == '8')
            arr[8]++;
        else if(s[i] == '9')
            arr[9]++;
    }
    for(int i =0;i<10;i++)
       printf("%d ",arr[i]);
    return 0;
}
