#include<stdio.h>
void twoSum(int* nums, int numsSize, int target);
int main()
{
	int num[4] = { 2,7,8,15 };
	int numsSiz = 0;
	int targe=0;
	/*int* nums = NULL;
	int target = 9, numsSize = 0;
	for (nums = &num[0]; nums < &num[0] + 4; ++nums)
	{
		scanf_s("%d", nums);
	}*/
	twoSum(num,numsSiz,targe);
	return 0;
}
	void twoSum(int* nums, int numsSize, int target)
	{
		
		int  i, j, m;
		for (i = 0; i < 4; ++i)
		{
			m = target - nums[i];
			for (j = i + 1; j < 4; ++j)
			{
				if (m == nums[j])
					printf("%d %d", nums[j], nums[i]);
			}
		}
	
	}


