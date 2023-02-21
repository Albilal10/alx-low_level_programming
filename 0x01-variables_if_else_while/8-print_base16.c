#include <stdio.h>

int main(void)
{

int n = 0;
char ch = 'a';


while (n <= 9)
{

putchar(n + '0');

n++;

}

while (ch <= 'f')
{

putchar(ch);

ch++;
}

putchar('\n');


}
