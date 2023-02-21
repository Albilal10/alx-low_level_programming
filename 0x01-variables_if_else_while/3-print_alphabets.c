#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
char ch = 'A';
char ch2 = 'a';
 
 
for (; ch <= 'Z' ; ch++)
 
{

putchar(tolower(ch));

}


for (; ch2 <= 'z'; ch2++)
{
putchar(toupper(ch2));

}

putchar("\n");

return(0);


}

