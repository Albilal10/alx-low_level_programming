#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
char ch = 'Z';
 
 
for (; ch >= 'A' ; ch--) 

{
putchar(tolower(ch));
}


putchar("\n");
return(0);


}

