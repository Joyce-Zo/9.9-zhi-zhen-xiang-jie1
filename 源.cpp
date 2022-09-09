#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i < 3; i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		/*if(password == "123456")*///错:两
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		if (i == 3)
		{
			printf("三次密码都错误，退出程序\n");
			break;
		}

	}
	
	return 0;
}