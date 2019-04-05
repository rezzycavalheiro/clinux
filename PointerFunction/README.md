*From edX*

### Activity: pointers and functions

You are continuing to work on your elixir of youth, and it turns out that, before purchasing the elixir, customers would like to know how young they will become after drinking the elixir!

The way your elixir works is that anyone who is at least 21 years old becomes ten years younger. However, the elixir does not work on anyone twenty years old or younger - when these people try the elixir, they actually double in age!

You have already created a main function, shown below. All you need to do now is write a function which accepts the integer pointer "ageAddr" as an argument and modifies the integer this pointer points to according to the rules of your elixir. Since you are using pointers to change the value of the variable age, your function should have a void return type.

Be sure not to modify the code that has been given to you, other than to add the following:

Your function definition.
The appropriate function call where indicated in the main function.
Your function prototype where indicated in the provided code.

```c
#include <stdio.h>

//Write your function prototype here

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here


Example
Input:
55
Output:
Your current age is 55.
Your new age will be 45!

Input:
19
Output:
Your current age is 19.
Your new age will be 38!
```
