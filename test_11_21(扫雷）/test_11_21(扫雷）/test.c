#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("***** 1.play  0.exit *******\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查好的雷的信息
	InitBoard(mine, ROWS, COLS,'0');//mine初始化，用'1'表示雷
	InitBoard(show, ROWS, COLS,'*');//show初始化
	SetMine(mine, ROW, COL);//布置雷
	DispalyBoard(show, ROW, COL);//显示棋盘
	FindMine(mine, show, ROW, COL);//排查雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}