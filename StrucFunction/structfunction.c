#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date);


int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *data){
	scanf("%d %d %d", &(*data).year, &(*data).month, &(*data).day);
}

void printDate(struct date now){
	printf("%02d/%02d/%d\n", now.month, now.day, now.year);
}

struct date advanceDay(struct date tomorrow){
	if(tomorrow.day == 31 && (tomorrow.month == 1 || tomorrow.month == 3 || tomorrow.month == 5 || tomorrow.month == 7 || tomorrow.month == 8 || tomorrow.month == 10 || tomorrow.month == 12)){
		tomorrow.day = 1;
	}
	else if(tomorrow.day == 27)
	printf("%02d/%02d/%d\n", tomorrow.month+1, tomorrow.day+1, tomorrow.year);
}
