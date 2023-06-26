#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//交换两位整数不使用新变量.(确点：整数相加可能会溢出)
void ChangeNums1() {

	int a = 3;
	int b = 5;

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d\n", a);
	printf("%d\n", b);
}

void ChangeNum2() {

	int a = 3;  //011
	int b = 5;  //110

	//异或相同为0，满足交换率
	a = a ^ b;
	/*
		011
		110
		101
	*/
	b = a ^ b;
	/*
		011
		110
		110
		--------
		011
		000
		---------
		011
	*/
	a = a ^ b;
	/*
		011
		101
		011
		----------
		101
		000
		-----------
		101
	*/

	printf("%d\n", a);
	printf("%d\n", b);
}

//求一个整数二进制数中1的个数.(缺点：-1补码为1，应该有32个)
void GetOne1() {

	int input;
	scanf("%d", &input);
	int count=0;

	while (input)
	{
		if (input % 2 == 1)
			count += 1;

		input/= 2;
	}

	printf("%d\n", count);
}

void GetOne2() {

	int input;
	scanf("%d", &input);

	int count = 0;

	for (int i = 0; i < 32; i++) {

		count+= input >> i & 1;
		/*
			例：input=3;
			011
			001
			---
			001=1

			//右移
			001
			001
			---
			001=1

			//继续右移.
			000
			001
			---
			000=0;
		*/
	}

	printf("%d", count);
}




int main() 
{
	//按位与（&）、按位或（|）、按位异或（^）
	int a = 3;  //011;
	int b = 5;  //101;

	//按位与(相同为1，不同为0)
	int c = a & b;   
	/*
		011
		101
		001
	*/
	printf("%d\n", c);

	//按位或（有1为1）
	int d = a | b;
	/*
		011
		101
		111
	*/
	printf("%d\n", d);

	//按位异或（相异为1，相同为0）
	int e = a ^ b;
	/*
		011
		101
		110
	*/
	printf("%d\n", e);

	//交换两个整数.
	//ChangeNums1();
	//ChangeNum2();

	//求一个整数二进制中1的个数.
	//GetOne1();
	GetOne2();

	return 0;
}

