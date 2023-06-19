#define _CRT_SECURE_NO_WARNINGS

#define Row 9
#define Cow 9

#define Rows Row+2
#define Cows Cow+2

#define EASY_Count 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char mine[Rows][Cows], int row, int cow);
void Display(char mine[Rows][Cows], int row, int cow);
void SetMine(char mine[Rows][Cows], int row,int cow);
void FineMine(char mine[Rows][Cows], char show[Rows][Cows], int row, int cow);

