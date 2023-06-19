#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"

void Menu()
{
	printf("***********Player:1************\n");
	printf("*******************************\n");
	printf("***********Exit:0**************\n"); 
}

void Game()
{
	//定义.
	char mine[Rows][Cows] = { 0 };
	char show[Rows][Cows] = { 0 };

	//初始化.
	InitBoard(mine,Rows,Cows,'0');
	InitBoard(show, Rows, Cows, '*');

	//显示.
	Display(mine, Row, Cow);
	Display(show, Row, Cow);

	//布雷.
	SetMine(mine, Row, Cow);
	//Display(mine, Row, Cow);

	//排雷.
	FineMine(mine, show, Row, Cow);
}

void Test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择：>");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			Game();
			break;
		default:
			printf("选择错误：请重新选择\n");
			break;
		}

	} while (input);
}

int main()
{
	Test();
	return 0;
}






