#include <stdio.h>
int main()
{
  int i, j, a[2][2], b[2][2], c[2][2];
  char option;

printf("Enter a first matrix:- \n");
for(i=0; i<2; i++){
 for(j=0; j<2; j++){
   scanf(" %d", &a[i][j]);
}
}

printf("Enter a second matrix:- \n");
for(i=0; i<2; i++){
 for(j=0; j<2; j++){
   scanf(" %d", &b[i][j]);
}
}
printf("Enter a option:(+,-,*,/,):-\n");
scanf(" %c", &option);
switch(option){
	case '+':
          printf("Your option is Addition\n");
           for(i=0; i<2; i++)
           for(j=0; j<2; j++)
          c[i][j] = a[i][j] + b[i][j];
	  break;
        case '-':
	  printf("Your option is Substraction\n");
           for(i=0; i<2; i++)
           for(j=0; j<2; j++)
          c[i][j] = a[i][j] - b[i][j];
	  break;
	case '*':
	  printf("Your option is Multiplication\n");
           for(i=0; i<2; i++)
           for(j=0; j<2; j++)
          c[i][j] = a[i][j] * b[i][j];
	  break;
	case '/':
         printf("Your option is Division\n");
           for(i=0; i<2; i++)
           for(j=0; j<2; j++)
          c[i][j] = a[i][j] / b[i][j];
	  break;
	default:
	 printf("No Option Selected!!\n");
 	 break;
}

printf("Calculaton of Matrix:-");
for(i=0; i<2; i++){
   printf("\n");
 for(j=0; j<2; j++){
   printf(" %d", c[i][j]);
}
}
 return 0;
}