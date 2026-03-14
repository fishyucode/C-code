#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数递归：必须有限制，并在每一次递归调用后越来越接近限制条件

//练习1：接受一个无符号的整型，按顺序打印出它的每一位

//%d打印有符号的整数
//%u打印无符号的整数

//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//
//	return 0;
//}

//用函数递归的方法做练习1

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//功能：接受一个无符号的整型，按顺序打印出它的每一位
//	return 0;
//
//}

//练习2：编写函数 不允许创建变量，求字符串长度。（模拟实现strlen）

//int my_strlen(char str[])参数写成指针的形式
//int my_strlen(char* str)//参数写成数组的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;//计数，；临时变量
//		str++;//找下一个字符
//	}
//	return count;
//}

//递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{ 
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//练习3：求n的阶乘

//递归方式
//int fac(n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * fac(n - 1);
//}
//
// 迭代方式
//int fac(n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d", ret);
//	return 0;
//}

//练习4：求第n个斐波那契数（1，1，2，3，5，8...)

//int fib(n)//用递归解决，效率低下，浪费算力
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}


//int fib(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//作业：把输入的三个数字从大到小排序
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//		printf("%d %d %d", a, b, c);
//	return 0;
//}

//从十个数中找到最大的数字
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//
//	for(i = 1;i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//在屏幕上输出九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);//两位左对齐
//		 
//		printf("\n");
//	}
//	return 0;
//
//}
//

//猜数字游戏
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("##########################\n");
	printf("########  MENU  ##########\n");
	printf("######## 1:PLAY ##########\n");
	printf("######## 0:EXIT ##########\n");
	printf("##########################\n");
}
void game()
{
	//生成随机数,范围是1~100
	int ret = rand() % 100 + 1;//此为生成随机数的函数,randmax=32767
	int guess = 0;
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");

		}
		else if (ret < guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对啦\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("GOODBYE!\n");
			break;
		default:
			printf("又调皮了,重新选！\n");
			break;
		}

	} while (input);

	return 0;
}
