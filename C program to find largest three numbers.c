/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main() {
    int num1, num2, num3;
 
    printf("Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);
 
   if ((num1 > num2) && (num1 > num3))
            printf("The 1st Number is the greatest among three. \n");
 
  else if ((num2 > num3) && (num2 > num1))
        printf("The 2nd Number is the greatest among three \n");
 
   else if ((num3 > num1) && (num3 > num2))
           printf("The 3rd Number is the greatest among three. \n");
 
}