#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("########################\n");
	printf("#####    1.play    #####\n");
	printf("#####    0.exit    #####\n");
	printf("########################\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化棋盘的函数
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		playmove(board, ROW, COL);//玩家下棋
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
		
		DisplayBoard(board, ROW, COL);//打印棋盘
		computermove(board, ROW, COL);//电脑下棋
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//打印棋盘
	}
	if(ret == '#')
	{
		printf("你输了\n");
	}
	else if (ret == '*')
	{
		printf("你赢了。但是！别骄傲！\n");

	}
	else
	{
		printf("你打出了平局\n");
	}
	DisplayBoard(board, ROW, COL);//打印棋盘


}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("又调皮了\n");
			break;
		}
	} while (input);
	return 0;
}