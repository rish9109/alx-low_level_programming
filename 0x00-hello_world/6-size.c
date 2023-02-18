#include <stdio.h>

/*
* main - Entry point
* Return (0) - Successful
*/
int main(void)
{
printf("On a 32-bit platform:\n")
printf("The size of char is %zu bytes.\n", sizeof(char));
printf("The size of int is %zu bytes.\n", sizeof(int));
printf("The size of long int is %zu bytes.\n", sizeof(long));
printf("The size of long long int is %zu bytes.\n", sizeof(long long));
printf("The size of float is %zu bytes.\n", sizeof(float));
printf("\n");
  
printf("On a 64-bit platform:\n")
printf("The size of char is %zu bytes.\n", sizeof(char));
printf("The size of int is %zu bytes.\n", sizeof(int));
printf("The size of long int is %zu bytes.\n", sizeof(long));
printf("The size of long long int is %zu bytes.\n", sizeof(long long));
printf("The size of float is %zu bytes.\n", sizeof(float));
printf("\n");
  
return (0);
}
