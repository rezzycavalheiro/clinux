#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void copyStr(char *source, char *target);
/* add other prototypes here if needed */

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

struct student *createStudent(char studentName[], int studentAge){
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}

void copyStr(char *source, char *target) {
    int i = 0;
    while (source[i]!='\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

struct student *append(struct student * end, struct student * newStudptr){
    end->next = newStudptr;
    end = newStudptr;
    return (end);
}

void printStudent(struct student *start){
    struct student * ptr = start;
    while (ptr)
}

void printNumber(stuct digit *start){
    //! heap=showMemory(start=277, cursors=[ptr,start])
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%s", ptr->name);
        printf("%d", ptr->age)
        ptr = ptr->next;
    }
    printf("\n");
}
