#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//找100到200之间的所有素数，素数是除了1和它本身不能被整除的数

//循环版本
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//只验证奇数
//	{
//		//用2到i-1作为被除数验证--->用2到sqrt(i)验证，注意相应的头文件
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//			{
//			    count++;
//				printf("%d\n", i);
//				
//			}
//		
//	}
//      printf("\n%d\n", count);
//	return 0;
//}

//函数版本

//int is_prime(int n)
//{
//	    int j = 0;
//
//		for (j = 2; j <= sqrt(n); j++)
//		{
//			if (n % j == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//		
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d\n", i);
//			
//	    }
//	
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//写一个函数找出1000到2000年之间的闰年
//闰年年份可以被 400整除 或者被4整除并且不能被100整除
//int is_leap_year(int i)
//{
//	if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ",   year   );
//		}
//	}
//	return 0;
//}

//写一个函数用二分法查找有序数组中元素的下标
//int search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = search(arr,sz,k);
//
//		if (ret == -1)
//		{
//			printf("找不到\n");
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", ret);
//		}
//	return 0;
//}

//写一个函数，每调用一次这个函数，num+1
void add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	add(&num);
		printf("%d ", num);
	return 0;
}