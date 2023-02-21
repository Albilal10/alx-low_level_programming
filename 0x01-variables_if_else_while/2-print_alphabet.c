#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
char ch = 'A';
 
 
for (; ch <= 'Z' ; ch++) 

{
putchar(tolower(ch));
}

putchar("\n");
return(0);


}

