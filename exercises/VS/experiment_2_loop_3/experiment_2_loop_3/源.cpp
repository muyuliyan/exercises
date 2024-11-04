#include<stdio.h>
int main()
{
	int left;

	for (int sum = 20; sum < 10000 ; sum++)
	{
		int day = 1;
		left = sum;

		while (1)
		{
			left = left-left / 2 - 1;
			day++;
			//log the consuming days

			if (10 == day && 1==left)
			{
				printf("The sum of peach is:%d\n", sum);
				break;
			}
			else if (left <= 0)
			{
				break;
			}
			//simplify the process
		}
	}
}