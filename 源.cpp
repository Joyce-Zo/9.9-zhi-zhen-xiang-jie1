#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i < 3; i++)
	{
		printf("����������");
		scanf("%s", password);
		/*if(password == "123456")*///��:��
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		if (i == 3)
		{
			printf("�������붼�����˳�����\n");
			break;
		}

	}
	
	return 0;
}