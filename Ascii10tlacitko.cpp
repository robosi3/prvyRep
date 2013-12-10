#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, k=0;
    char x;

    for (i= 1;i<=127;i++)
    {
        
        printf("\nASCII %d ....  '%c'", i, i);
		k++;
        if(k == 10)
        {
            do
            {
               x = getch();
			   printf("\n");
            }while (x == '\n');
            k = 0;
        }

    }
        return 0;
}