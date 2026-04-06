#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//尝试实现基础功能：标记功能；展开一片功能

void menu()
{
	printf("########################\n");
	printf("####     1.play    #####\n");
	printf("####     0.exit    #####\n");
	printf("########################\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化数组的内容为指定的内容
	Initboard(mine, ROWS, COLS,'0');//数组没有布置雷时都是‘0’
	Initboard(show, ROWS, COLS,'*');//数组没有排查雷时都是‘0’

	//设置雷
	setmine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

    //排查雷
	Findmine(mine, show, ROW, COL);



}
int main()
{
	//设置随机数的生成起点
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新选择\n");
				break;

			}
	} while (input);
	return 0;
}
