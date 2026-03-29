#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//函数递归作业

//1.字符串逆序
//int main()
//{
//	char arr[] = "abcdef";//{a,b,c,d,e,f,\0}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;//right==strlen(arr)-1
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

//1.字符串逆序，递归实现
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse(str + 1);
//
//	* (str + len - 1) = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//1.字符串逆序，递归做法2
//int MyStrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if(left<right-1)
//	reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = MyStrlen(arr)-1;
//	
//	reverse(arr, left, right);
//	printf("%s", arr);
//	return 0;
//}

//2.写一个递归函数digisum(n),当输入一个非负整数返回它的每位数字之和1729
//int digitsum(n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + (n % 10);
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = digitsum(n);
//	printf("%d", sum);
//}

//3.写一个函数计算n的k次方，用递归实现
//double pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * pow(n,k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, & k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//4,用函数完成对数组的打印，内容的初始化以及逆序
 
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int i = 0;
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}