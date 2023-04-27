#include <stdio.h>





int main(void)
{
	int a[] = {1, 5, 7, 3, 5, 8, 5, 9, 3, 2, 4};
	int len = sizeof(a)/sizeof(a[0]);

	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len - 1; j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(int i = 0; i < len; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
