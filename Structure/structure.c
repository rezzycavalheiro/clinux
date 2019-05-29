#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *data){
	scanf("%d %d %d", &(*data).year, &(*data).month, &(*data).day);
}

void printDate(struct date imprimeData){
	printf("%02d/%02d/%d\n", imprimeData.month, imprimeData.day, imprimeData.year);
}
