#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//������������.
void ChangeTwoIntNum1(int value1,int value2) {
	int a = value1;
	int b= value2;
	int c;

	c = a;
	a = b;
	b = c;

	printf("%d%d", a, b);
}

//�÷������ܻᷢ���������.
//(int��4���ֽڴ洢�����Ϊ2^31-1,����Ӻͳ��������ʱ�������������ȥ��.)
void ChangeTwoIntNum2(int value1, int value2) {
	
	int a = value1;
	int b = value2;

	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%d", a, b);
}

void ChangeTwoIntNum3(int value1, int value2) {

	int a = value1;
	int b = value2;

	//^(��λ�����ͬΪ0����ͬΪ1)������.
	//^���㽻����
	//����a=3(010) 3^3=0;  b=5(101)5^5=0;  a=a^a^b;(��a=b) b=a^b^b;(��b=a)

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d%d", a, b);
}

int main() 
{
	//ChangeTwoIntNum1(10,20);
	ChangeTwoIntNum2(30, 40);
	return 0;
}
