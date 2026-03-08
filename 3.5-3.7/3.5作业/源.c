#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算1到n的阶乘的和：循环语句
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//}
//	printf("%d\n", sum);
//		return 0;
//}


//对上面的代码进行优化
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//       ret = ret * n;
//	   sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//二分查找 在一个有序数组中查找数字n
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


