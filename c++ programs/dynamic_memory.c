// malloc:- memory allocation (create dynamic memory)
// calloc :- continuous allocation (create continuous dynamic memory )
// realloc :- realocation (use to reallocate memory reallocate from calloc)
// free :- deleating dynamic memory


// if pointer not finding address then its dangling pointer 

// if dynamic variable not deleted then that time it will be garbage value

// #include <stdio.h>

// int main() {
//     int i, ptr[5];
    
//     // Reading 5 integers from the user
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &ptr[i]);
//     }

//     // Printing the 5 integers
//     printf("Entered numbers are:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//     }

//     return 0;
// }

