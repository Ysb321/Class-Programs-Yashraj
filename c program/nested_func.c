// Nested Function

// #include <stdio.h>
// int num_cube (int num)
//     {
//         int cal_cube()
//         {
//             return num* num* num;
//         }
//         return cal_cube();
//     }
//     int main(){
//         int x, ans;
//         printf("\nEnter a number:\n");
//         scanf("%d", &x);
//         ans = num_cube(x);
//         printf("\nThe cube if %d = %d", x, ans);
//         return 0;
//     }

#include <stdio.h>
int num_cube(){
    int num;
    int cal_cube(){
        int x;
        int result;
        printf("\nEnter a number:- ");
        scanf("%d", &num);
        x = num * num * num;
        result = printf("Cube of %d is %d", num, x);
        return result;
    }
    return cal_cube();
}
int main(){
    num_cube();
    return 0;
}