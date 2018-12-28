#include<stdio.h>
void sort(int x, int y, int z);
int main()
{
	int num1,num2,num3;
	printf("please input three numbers: \n");
	scanf_s("%d%d%d",&num1,&num2,&num3);
	sort(num1, num2, num3);
	return 0;
}
void sort(int x, int y, int z)
{
	int temp;
	if (x > y)
	{
		temp = y;
		y = x;
		x = temp;
	}
	if (x > z)
	{
		temp = z;
		z = x;
		x = temp;
	}
	if (y > z)
	{
		temp = z;
		z = y;
		y = temp;
	}
	printf("from small to large:%d %d %d",x,y,z);	
}