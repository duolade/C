#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Test1() {
	//按位取反.（对补码进行取反）符号位也改变
	//取反（符号位不变，其他相反）
	//正数：源码=反码=补码
	//负数：反码=源码取反 ，补码=反码加1

	int a = 5;  //101
	a = ~a;
	/*
		00000101
		11111010（按位取反为负数）补码
		11111001（补码-为反码）
		10000110（反码取反为原码）
		取反后a=-6
	*/
	printf("%d\n", a);

	int b = -3;
	b = ~b;
	/*
		10000011
		11111100
		11111101(b补码)
		00000010(b取反)为正数-源码反码补码一样
		即b=2
	*/
	printf("%d\n", b);

	int c = 3;
	c = ~c;
	/*
		00000011(补码）
		11111100(取反后补码)
		11111011（补码-1=反码）
		10000100（反码取反为源码）c=-4
	*/
	printf("%d\n", c);

	int d = 0;
	d = ~d;
	/*
		00000000
		11111111
		11111110
		10000001 d=-1
	*/
	printf("%d\n", d);
}

//一个数的第n位二进制为1.
void Test2() {

	//a的第三位二进制改位1，求a的值.

	int a = 3; //011
	a = a | 1 << 2;
	printf("%d\n", a);
}

//一个数的第n位二进制为0.
void Test3() {

	//a的第三位二进制改位0，求a的值.
	int a = 5; //101;
	a = a ^ (1 << 2);
	printf("%d\n",a);
}

//前置、后置++a,a++;
void Test4() 
{
	int a = 1; int b,c=0;
	b = a++; //后置先赋值加++
	c = ++a; //前置先加加再赋值.
	printf("%d\n", b);
	printf("%d\n", c);
}

//逗号表达式，从左到右执行，结果是最后一个表达式.
void Test5() 
{
	int a = (1*2, 2*3, 3*2);
	printf("%d\n", a);
}

int main() {

	//按位取反.
	//Test1();

	//个数的第n位二进制为1.
	//Test2();

	//一个数的第n位二进制为0.
	//Test3

	//前置后置.
	//Test4();

	//逗号表达式.
	Test5();
	return 0;
}