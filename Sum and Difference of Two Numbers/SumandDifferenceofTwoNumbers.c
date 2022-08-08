#include <stdio.h>

void update(int *a,int *b) {
    int sac = *a;
	*a = *a + *b;
	*b = *b - sac;
	*b = abs(*b);
	*a = abs(*a);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}