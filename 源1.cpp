#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i <3; i++)
	{
		printf("����������");
		scanf("%s", password);
		/*if(password == "123456")*/
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i == 3)
		printf("�������붼�����˳�����");
	return 0;
}

int main()
{
	const char* p = "abcdef";// "abcded"��һ�������ַ������޷��޸�,+const���޷��޸�	
	*p = 'w';
	printf("%s\n", p);
	return 0;
}

int main()
{
	const char arr1[] = "abcdef";
	const char arr2[] = "abcdef";
	if (arr1 == arr2)
	{
		printf("666\n");
	}
	else
	{
		printf("888\n");
	}

	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	if (p1 == p2)	//  �����ַ���ָ��ͬһ����ַ
	{
		printf("666\n");
	}
	else
	{
		printf("888\n");
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 }; //��������
	char arr[5] = { 0 }; //�ַ�����
	int* arr[4] = { 0 }; //�������ָ������� - ָ������
	char* arr[6] = { 0 };//����ַ�ָ������� - ָ������
	return 0;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		{
			for(j=0;j<5;j++)
			{	
			  printf("%d ", arr[i][j]);
				printf("%d ", *(arr[i] + j));
			}
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int* p = NULL;// p - ����ָ�� - ָ�����͵�ָ�� - ������͵ĵ�ַ
	char* pc = NULL;// pc - �ַ�ָ�� - ָ���ַ���ָ�� - ����ַ��ĵ�ַ
	/*int arr[10] = { 0 };
	arr = &arr[0] - ��Ԫ�ص�ַ
	& arr - ����ĵ�ַ*/
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int(*p)[10] = &arr;	// (*p)ָ�룬(*p)[10]����ָ�룬int(*p)[10]ָ�����������ָ��
		int* pc[10] = &arr;	//pc[10]���飬��10��Ԫ�أ�ÿ��Ԫ��������int*��������
		 ���ȼ� [] > * ��(*p)��֤p����*���
	return 0;
}

int main()
{
												char* arr[5];
												       pa - ָ�����������
	 char* - ˵��paָ��������Ԫ��������char*//char*(*pa)[5] = &arr;// [5] - paָ��һ������5��Ԫ�ص�����
												      * - ˵��pa��ָ��
		int arr2[10] = { 0 };
		int(*pa2)[10] = &arr2;

	return 0;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int(*pa)[5] = &arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		/*printf("%d ", *(*pa) + i);*/
		printf("%d ", *(*pa + i));
		printf("%d ", (*pa)[i]);
	}
	return 0;
}

		 ������ ���� ����ʽ
void Print1(int arr[3][5], int x, int y)
{			 // ��ά
	int i = 0,  j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

		 ������ ָ�� ����ʽ
void Print2(int(*arr)[5], int x, int y)
{			// һά����
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", (arr[i][j]));
			printf("%d ", *(arr[i] + j));
			/*printf("%d ", *(*(arr + i) + j));
			printf("%d ", *((*arr + i) + j));
			printf("%d ", (*arr + i)[j]);
			printf("%d ", (*(arr + i))[j]);*/
		}				//  * ��ʾ��һ�У�**��ʾ������ ��
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	Print1(arr, 3, 5);
	Print2(arr, 3, 5);
	return 0;
}

int arr[5];		   // ��5�����͵���������

int* parr1[10];	   // ��10��int*����Ԫ�ص�����parr1

int(*parr2)[10];   // parr2��һ��ָ�� 10�� int���� Ԫ�� ��ָ��

	   int(*parr3[10])[5];// parr3��һ������10��Ԫ�ص����飬ÿ��Ԫ������һ������ָ�룬
�ȼ��� int(* (parr3[10]) )[5] //ÿ��ָ��ָ�� 5�� int���� Ԫ��