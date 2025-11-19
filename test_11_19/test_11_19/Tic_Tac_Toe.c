/*
可调整ROW||COL来实现不同的棋
比如:五子棋
*/

#include"game.h"

//菜单
menu()
{
	printf("******************************\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;
	char board[BOARD_COL][BOARD_COL] = { 0 };
	//初始化棋盘的函数
	Initboard(board, BOARD_COL, BOARD_COL);
	DispalyBoard(board, BOARD_COL, BOARD_COL);

	//开始下棋
	while (1)
	{
		//Player用'*'
		PlayerMove(board, BOARD_ROW, BOARD_COL);
		ret = IsWin(board, WIN_ROW, WIN_COL);
		if (ret != 'C')//用'C'表示继续进行
		{
			break;
		}
		DispalyBoard(board, BOARD_ROW, BOARD_COL);
		//Computer用'#'
		ComputerMove(board, BOARD_ROW, BOARD_COL);
		ret = IsWin(board, WIN_ROW, WIN_COL);
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, BOARD_ROW, BOARD_COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else//平局用'Q'表示
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}