#include <stdio.h>

void main(void)

{

int var = 10;

int *ptrvar = &var;

printf("The address of the variable var is: %08x\n",&var);

printf("The value of the pointer ptrvar is: %08x\n",*ptrvar);

printf("Both values are the same\n");

printf("The value of the variable var is: %d\n", var);

printf("The value of *ptrvar is: %d\n", *ptrvar);

printf("Both values are the same\n");

printf("The address of the value pointed by ptrvar is:%d\n", &*ptrvar);

printf("The value inside the address of ptrvar is: %d\n",*&ptrvar);

printf("Both values are the same\n");

}