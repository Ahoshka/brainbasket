#include <stdio.h>
#include <cs50.h>


int main()
{
	
	int count, i, ncount, s, n;
	int bits[32];
	int d = 1;
	
	count = 0;
	n = GetInt();
	printf("Enter n-digit system from 2 to 10:  ");
	s = GetInt();
	
	do
	{
		d = d * s;
		count++;
	}

	while (d*s < n);
	ncount = count;

	while (count >= 0)
	{
		if (n / d > 0)
		{
			bits[count] = n / d;
			n = n % d;
			
		} 
		else
		{
			bits[count] = n / d;
		}
	
		d = d / s;
		count--;
	}
	
	// printing binary number
	for (i = ncount; i >= 0; i-- )
	{
		printf("%d", bits[i]);
	}
	
	printf("\n");

}