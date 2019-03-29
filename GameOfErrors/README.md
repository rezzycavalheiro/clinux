*From edX:*

### Game of Errors

We already need you! Our full-time developer went on sick leave, leaving us with an erroneous C-program without telling us how to fix it. All we have are the compiler error messages produced by this code.
Please help us fix this code. Here is the program in question:

```c
#include <stdio.h>

int main(void) { 
    pri
    tf ("This is code with errors: ") 
    printf "Fix them!"; 
    return 0; 
}
```

And here are the compiler error messages:

```c
/user-input:4:43: error: expected ';' after expression
    printf ("This is code with errors : ")
                                          ^
                                          ;
/user-input:5:11: error: expected ';' after expression
    printf "Fix them!";
          ^
          ;
/user-input:5:5: warning: expression result unused
    printf "Fix them!";
    ^~~~~~
/user-input:5:12: warning: expression result unused
    printf "Fix them!";
          ^~~~~~~~~~~  
 ```
