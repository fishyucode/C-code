#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for(j=0;j<cols;j++)
		{ 
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------\n");
	for (j = 0; j <= 9; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n");

}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷的次数
	while (win<col*row-EASY_COUNT)
	{
		printf("请输入要排查雷的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col&&show[x][y]=='*')
		{
			//如果是雷
			if (mine[x][y] == '1')
			{
				printf("你被炸了，游戏结束");
				DisplayBoard(mine, ROW, COL);
                break;
			}
			//如果不是雷
			else
			{
				win++;
				//统计mine数组中x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//转换为数字字符
				DisplayBoard(show, ROW, COL);

			}

		}
		else
		{
			printf("坐标非法，请重新输入");
		}
		if (win == col * row - EASY_COUNT)
		{
			printf("恭喜你排雷成功");
			DisplayBoard(mine, ROW, COL);

		}

	}
}
