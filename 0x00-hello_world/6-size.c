#include <stdio.h>

/**
* main - is the entry point to our code
*
* Description: Write a C program that prints the size of various types on the computer it is compiled and run on
* Return: 0
*/

int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of char: %ld  byte(s)\n", sizeof(c));
printf("Size of an int: %ld  byte(s)\n", sizeof(i));
printf("Size of a long int: %ld  byte(s)\n", sizeof(li));
printf("Size of long long int : %ld  byte(s)\n", sizeof(lli));
printf("Size of float: %ld  byte(s)\n", sizeof(f));
return (0);
}
