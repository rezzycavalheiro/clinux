In this problem you will continue developing the data feature which you started implementing in the previous problem. You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.

You are provided with a familiar date structure definition, a main function as well as the function prototypes for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions you may simply copy and paste the code you developed in the previous task.

 

Examples
Input:
```c
2018 10 2
```
Output:
```c
10/02/2018                                                                      

10/03/2018
``` 

Input:
```c
2018 10 31
```
Output:
```c
10/31/2018                                                                      

11/01/2018
``` 

Input:
```c
2018 11 30
```
Output:
```c
11/30/2018                                                                      

12/01/2018                                                                      
``` 

Input:
```c
2018 12 31
```
Output:
```c
12/31/2018                                                                      

01/01/2019
``` 
Provided code
```c
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
```
