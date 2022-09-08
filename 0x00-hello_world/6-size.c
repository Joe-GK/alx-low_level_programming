#include <stdio.h>
/**
* main is the entry point to our code
* return =0
*/
int main(void)
{
    char c;
    int i;
    long li;
    long long lli;
    float f;
print ("size of char: %ld  byte(s)\n" , sizeof(c));
print ("size of an int: %ld  byte(s)\n" , sizeof(i));
print ("size of a long int: %ld  byte(s)\n" , sizeof(li));
print ("size of long long int : %ld  byte(s)\n" , sizeof(lli));
print ("size of float: %ld  byte(s)\n" , sizeof(f));
return (0);
}
