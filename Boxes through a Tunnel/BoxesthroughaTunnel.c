#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41


struct box
{
   int length,width,height;
};

typedef struct box box;

int get_volume(box b) {
   int v;
   v = b.length * b.width * b.height;
   return v;
}

int is_lower_than_max_height(box b) {
    int h = 0;
    if(b.height < MAX_HEIGHT)
     h = 1;
    return h;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}