#include<stdio.h>
#include<math.h>
int main()
{
	int x[] = { 0,1,4,5,6,10,20,30,40,50,100,200,500 };
	

	for (int i = 0; i < 13; i++)
	{
		int function = 0;
		if (x[i] < 5 && x[i] != 0)
		{
			function = 1 / x[i] + x[i] - 1;
		}
		else if (10 <= x[i] && x[i]<100 && x[i]!=20)
		{
			function = pow(x[i], 2) + 6;
		}
		else
		{
			function = 1;
		}
		printf("%d ", function);
	}

	return 0;
}