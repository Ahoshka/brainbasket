#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    int n;
    int k;
    int x;
    int y;

    do
    {
        printf("Please enter a number from 0 to 23:");
        n = GetInt();
    }
    while ((n<0) || (n>23));

    for (k=1; k<=n; k++) 
    {
        for (x=(n-k); x>0; x--)
        {
            printf(" "); 
        }

        for (y=1; y<=(k+1); y++)
        {   
            printf("#"); 
        }

        printf("\n");
    }
    return 0;
}
        
