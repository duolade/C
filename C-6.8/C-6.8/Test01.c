#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//交换两个整数.
void ChangeTwoIntNum1(int value1,int value2) {
	int a = value1;
	int b= value2;
	int c;

	c = a;
	a = b;
	b = c;

	printf("%d%d", a, b);
}

//该方法可能会发生整数溢出.
//(int型4个字节存储数最大为2^31-1,当相加和超过最大数时，超出部分则会去掉.)
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

	//^(按位异或，相同为0，不同为1)二进制.
	//^满足交换率
	//例：a=3(010) 3^3=0;  b=5(101)5^5=0;  a=a^a^b;(即a=b) b=a^b^b;(即b=a)

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
