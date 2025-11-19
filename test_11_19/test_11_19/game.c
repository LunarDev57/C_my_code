#include"game.h"

void Initboard(char board[BOARD_ROW][BOARD_COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DispalyBoard(char board[BOARD_ROW][BOARD_COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1 )
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[BOARD_ROW][BOARD_COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:--->\n");
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}

}

void ComputerMove(char board[BOARD_ROW][BOARD_COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:--->\n");
	x = rand() % row;
	y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[BOARD_ROW][BOARD_COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0; i < BOARD_ROW; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; j < BOARD_COL; j++)
		{
			if (board[i][j] == board[i][j+1] && board[i][j] != ' ')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == (row-1))
			{
				return board[i][j+1];
			}
		}
	}

	//列
	int j = 0;
	for (j = 0; j < BOARD_COL; j++)
	{
		int i = 0;
		int count = 0;
		for (i = 0; i < BOARD_ROW; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] != ' ')
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == (col-1))
			{
				return board[i+1][j];
			}
		}
	}

	//对角线
	 i = 0;
	 j = 0;
	 int count = 0;
	for (i = 0; i < BOARD_ROW; i++)
	{
		for (j = 0; j < BOARD_COL; j++)
		{
			int m = i;
			int n = j;
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
			{
				for (; i < BOARD_ROW && j < BOARD_COL; i++, j++)
				{
					if (board[i][j] == board[i + 1][j + 1])
					{
						count++;
					}
					else
					{
						count = 0;
						break;
					}
					if (count == (row - 1))
					{
						return board[i + 1][j + 1];
					}
				}
			}
			 i = m;
			 j = n;
		}
	}

	//斜对角线
     i = 0;
     j = 0;
     count = 0;
	for (i = 0; i < BOARD_ROW; i++)
	{
		for (j = 0; j < BOARD_COL; j++)
		{
			int m = i;
			int n = j;
			if (board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
			{
				for (; i < BOARD_ROW && j < BOARD_COL; i++, j--)
				{
					if (board[i][j] == board[i + 1][j - 1])
					{
						count++;
					}
					else
					{
						count = 0;
						break;
					}
					if (count == (row - 1))
					{
						return board[i + 1][j - 1];
					}
				}
			}
			 i = m;
			 j = n;
		}
	}

	//平局
	if (IsFull(board))
	{
		return 'Q';
	}

	//继续
	return 'C';
}

//满了就返回1
//没满就返回0
int IsFull(char board[BOARD_ROW][BOARD_COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < BOARD_ROW; i++)
	{
		for (j = 0; j < BOARD_COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}