#include <stdio.h>
int i;
int main()
{
	int score[] = { 67,98,75,63,82,79,81,91,66,84 };
	printf("����ѧ���ɼ���");
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", score[i]);
		if (i == 9)
			printf("\n");
	}
      sum(score);
      ave(score);
	  sort(score);
	  max(score);
      min(score);
	 return 0;
}
	int sum(int score[])
	{
		int sumx = 0;
		for (i = 0; i < 10; ++i)
		{
			sumx += score[i];
		}
		printf("����ѧ���ɼ��ܺͣ�%d\n", sumx);
		return 0;
	}
	int ave(int score[])
	{
		int avex, sumx = sum(score);
		avex = sumx/10;
		printf("����ѧ���ɼ�ƽ���֣�%d\n", avex);
		return 0;
	}
	int sort(int score[])
	{
		int i;
		for (i = 9; i >= 0; i--)
		{
			int j,tem;
			for (j = 0; j < i; j++)
			{
			
				if (score[j] < score[j + 1])
				{
					tem = score[j ];
					score[j ] = score[j+1];
					score[j+1] = tem;
				}	
			}
		}
		for (i = 0; i < 10; ++i)
		{
			printf("%d ", score[i]);
			if (i == 9)
				printf("\n");			
		}
		return 0;
	}
	int max(int score[])
	{ 
		printf("����ѧ���ɼ���ߣ�%d\n", score[0]);
		return 0;
	}
	int min(int score[])
	{	
		printf("����ѧ���ɼ���ͣ�%d\n", score[9]);
		return 0;
	}
	