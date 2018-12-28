#include<stdio.h>
int main(int i,int j)
{
	float arr[] = { 1.78, 1.77, 1.82, 1.79, 1.85, 1.75, 1.86, 1.77, 1.81, 1.80 };
	printf("*********≈≈–Ú«∞**********\n");
	for (i = 0; i <= 10;i++)
	{
		if (i < 10)
		{
			printf ("%.2f ",arr[i]);
		}
		else
			printf("\n");
	}
	printf("*********≈≈–Ú∫Û**********\n");
	for (i = 9; i >=0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				float m;
				m = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = m;
			}
			
		}
	}
	for (i = 0; i <= 10; i++)
	{
		if (i < 10)
		{
			printf("%.2f ", arr[i]);
		}
		else
			printf("\n");
	}
}
