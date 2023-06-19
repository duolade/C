#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"

void InitBoard(char mine[Rows][Cows], int row, int cow,char set)
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < cow; j++)
		{
			mine[i][j] = set;
		}
	}
}

void Display(char mine[Rows][Cows], int row, int cow)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (int j = 1; j <= cow; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[Rows][Cows], int row, int cow) 
{
	int count = 0;

	while (count<=EASY_Count)
	{
		int i = rand() % row + 1;
		int j = rand() % cow + 1;

		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count += 1;
		}
	}
}

int GetCount(char mine[Rows][Cows],int x,int y) 
{
	return mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';
}


void FineMine(char mine[Rows][Cows], char show[Rows][Cows], int row, int cow)
{
	int x;
	int y;
	int win = 0;

	while (win<Row*Cow-EASY_Count)
	{
		printf("请输入位置：");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= cow) 
		{
			if (mine[x][y] == '1') 
			{
				printf("很遗憾，你被炸死了");
				break;
			}
			else
			{
				int count = GetCount(mine,x,y);
				show[x][y] = count + '0';
				Display(show, row, cow);

				win += 1;
			}
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	}

	if (win == Row * Cow - EASY_Count)
	{
		printf("恭喜你通关了\n");
	}
}

