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
	//����.
	char mine[Rows][Cows] = { 0 };
	char show[Rows][Cows] = { 0 };

	//��ʼ��.
	InitBoard(mine,Rows,Cows,'0');
	InitBoard(show, Rows, Cows, '*');

	//��ʾ.
	Display(mine, Row, Cow);
	Display(show, Row, Cow);

	//����.
	SetMine(mine, Row, Cow);
	//Display(mine, Row, Cow);

	//����.
	FineMine(mine, show, Row, Cow);
}

void Test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��ѡ��>");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			Game();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
}

int main()
{
	Test();
	return 0;
}






