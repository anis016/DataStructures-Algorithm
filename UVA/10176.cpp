/*
 11111111111111111     1
 111111111111111110    2
 1011111111111111101   3
 1111111111111111100   4
 10011111111111111011  5
 10111111111111111010  6
 11011111111111111001  7
 11111111111111111000  8
 100011111111111110111 9
 100111111111111110110 10
*/


#include<stdio.h>

int main()
{
	char ch;
	int r;

	r = 0;
	while(scanf("%c", &ch) ==1 )
	{
		if(ch == '0')
			r = (r << 1) % 131071;

		else if(ch == '1')
			r = ( (r << 1) | 1 ) % 131071;

		else if(ch == '#')
		{
			if(r)
				printf("NO\n");
			else
				printf("YES\n");

			r = 0;
		}
	}
	return 0;
}