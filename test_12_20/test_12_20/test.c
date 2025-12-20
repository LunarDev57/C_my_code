#include"contact.h"

void menu() {
	printf("**************************************************\n");
	printf("************   1.add       2.delete   ************\n");
	printf("************   3.sort      4.modify   ************\n");
	printf("************   5.show      6.search   ************\n");
	printf("************   0.exit                 ************\n");
	printf("**************************************************\n");
}

int main() 
{
	int input = 0;
	Contact con;
	InitContact(&con);//初始化
	do {
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input) {
		case 1:
			AddContact(&con);//添加
			break;
		case 2:
			DelContact(&con);//删除
			break;
		case 3:
			SortContact(&con);//排序
			break;
		case 4:
			ModifyContact(&con);//修改
			break;
		case 5:
			ShowContact(&con);//显示
			break;
		case 6:
			SearchContact(&con);//查找
			break;
		case 0:
			SaveContact(&con);//保存
			DestroyContact(&con);//销毁
			printf("退出通讯录!\n");//退出
			break;
		default :
			printf("输入错误，请重新输入!\n");//重输
			break;
		}
	} while (input);
	return 0;
}