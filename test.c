#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ�����

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";
//	//printf("%c\n", *p);//�����Ԫ�ص�ַ
//	//printf("%s\n", p);//������Ԫ�ص�ַ����ַ���
//
//	/*����(��const)
//	*p = 'W';
//	printf("%s\n", p);*/
//	return 0;
//}

//������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}*/
//	if (p1 == p2)
//	{
//		printf("hehe\n");//hehe
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//����ָ��������� - �˷���������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//���ñ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n"); 
//	}
//	return 0;
//}

//����ָ�� - ָ��
//int main()
//{
//	//int* p = NULL;//����ָ�� - ָ�����ε�ָ��- ���Դ�����εĵ�ַ
//	//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//p��������ָ�� - ��д�������
//
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//������ָ�����ʽ
void print2(int(*p) [5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1,2,3,4,5 } ,{ 2,3,4,5,6 } ,{ 3,4,5,6,7 } };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}