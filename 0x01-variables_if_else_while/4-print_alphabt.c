#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main (void)
{
char ch = 'A';
 
 char res;
 
for (; ch <= 'Z' ; ch++)
 
{

if (ch == 'Q' || ch == 'E') continue;

putchar(tolower(ch));

}

putchar("\n");
return(0);


}

