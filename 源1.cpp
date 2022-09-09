#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i <3; i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		/*if(password == "123456")*/
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3)
		printf("三次密码都错误，退出程序");
	return 0;
}

int main()
{
	const char* p = "abcdef";// "abcded"是一个常量字符串，无法修改,+const更无法修改	
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
	if (p1 == p2)	//  常量字符串指向同一个地址
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
	int arr[10] = { 0 }; //整型数组
	char arr[5] = { 0 }; //字符数组
	int* arr[4] = { 0 }; //存放整型指针的数组 - 指针数组
	char* arr[6] = { 0 };//存放字符指针的数组 - 指针数组
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
	int* p = NULL;// p - 整型指针 - 指向整型的指针 - 存放整型的地址
	char* pc = NULL;// pc - 字符指针 - 指向字符的指针 - 存放字符的地址
	/*int arr[10] = { 0 };
	arr = &arr[0] - 首元素地址
	& arr - 数组的地址*/
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int(*p)[10] = &arr;	// (*p)指针，(*p)[10]数组指针，int(*p)[10]指向整型数组的指针
		int* pc[10] = &arr;	//pc[10]数组，存10个元素，每个元素类型是int*，是数组
		 优先级 [] > * ，(*p)保证p先与*结合
	return 0;
}

int main()
{
												char* arr[5];
												       pa - 指针变量的名字
	 char* - 说明pa指向的数组的元素类型是char*//char*(*pa)[5] = &arr;// [5] - pa指向一个包含5个元素的数组
												      * - 说明pa是指针
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

		 参数是 数组 的形式
void Print1(int arr[3][5], int x, int y)
{			 // 二维
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

		 参数是 指针 的形式
void Print2(int(*arr)[5], int x, int y)
{			// 一维数组
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
		}				//  * 表示第一行，**表示解引用 列
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

int arr[5];		   // 有5个整型的整型数组

int* parr1[10];	   // 有10个int*类型元素的数组parr1

int(*parr2)[10];   // parr2是一个指向 10个 int类型 元素 的指针

	   int(*parr3[10])[5];// parr3是一个包含10个元素的数组，每个元素又是一个数组指针，
等价于 int(* (parr3[10]) )[5] //每个指针指向 5个 int类型 元素