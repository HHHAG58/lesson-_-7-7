#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//float与int的转换
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001 - 9的补码
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);//9
	printf("*pFloat的值为:%f\n", *pFloat);//0.000000
	//(-1)^0 * 0.00000000000000000001001 * 2^(-126)

	*pFloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^3
	//0 10000010 00100000000000000000000

	printf("num的值为:%d\n", n);//1091567616 
	printf("*pFloat的值为:%f\n", *pFloat);//9.0
	return 0;
}

//int main()
//{
//	float f = 5.5 ;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011 * 2^2
//	//S=0
//	//M=1.011
//	//E=2      +127=129
//	//0 10000001 01100000000000000000000
//	//0x40b000000
//	return 0;
//}