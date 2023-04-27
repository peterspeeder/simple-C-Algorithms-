#include <stdio.h>


int count_ones(int arry[], int length)		// ~Algorithm that counts the number one one's in an array.
{
	int counter = 0;
	for(int i = 0; i < length; i++)
	{
		if(arry[i] == 1)
		{
			counter++;
		}
		printf("Elements: = [%d] \n", arry[i]);
	}
	
	printf("counter = ");

	return counter;

	printf("\n");
}


int bub_sort(int a[], int length)		// ~Algorithm that sorts an array from lowest to greatest.
{
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < length - 1; j++)		// ~All this does is exludes the element after the last element since its nonexistant.
		{
			if(a[j] > a[j+1])		// ~Given an array, {1, 2, 4, 3}; This states that if 2 > 4, It is wrong.
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);

	}

	return 0;
}

int main(void)
{
	int array[] = {1, 2, 1, 4, 1, 5, 1, 6};
	int length = sizeof(array)/sizeof(array[0]);

	int answer = bub_sort(array, length);

	printf("%d", answer);


	return 0;
}
