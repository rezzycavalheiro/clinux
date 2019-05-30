#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
	struct point *poly;
	int num;
	scanf("%d", &num);
	poly = (struct point*)malloc(num * sizeof(struct point));
	initializePoly(poly, num);
	printPoly(poly, num);
	free(poly);

	return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * poly, int num){
	int i;
	for(i=0; i<num; i++){
		poly[i].x = -i;
		poly[i].y = i*i;
	}
}
