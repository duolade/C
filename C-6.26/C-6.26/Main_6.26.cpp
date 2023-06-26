#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������λ������ʹ���±���.(ȷ�㣺������ӿ��ܻ����)
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

	//�����ͬΪ0�����㽻����
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

//��һ����������������1�ĸ���.(ȱ�㣺-1����Ϊ1��Ӧ����32��)
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
			����input=3;
			011
			001
			---
			001=1

			//����
			001
			001
			---
			001=1

			//��������.
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
	//��λ�루&������λ��|������λ���^��
	int a = 3;  //011;
	int b = 5;  //101;

	//��λ��(��ͬΪ1����ͬΪ0)
	int c = a & b;   
	/*
		011
		101
		001
	*/
	printf("%d\n", c);

	//��λ����1Ϊ1��
	int d = a | b;
	/*
		011
		101
		111
	*/
	printf("%d\n", d);

	//��λ�������Ϊ1����ͬΪ0��
	int e = a ^ b;
	/*
		011
		101
		110
	*/
	printf("%d\n", e);

	//������������.
	//ChangeNums1();
	//ChangeNum2();

	//��һ��������������1�ĸ���.
	//GetOne1();
	GetOne2();

	return 0;
}

