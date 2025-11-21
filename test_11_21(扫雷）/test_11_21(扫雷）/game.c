#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏----------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷游戏----------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = GB;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-GB)
	{
		printf("请输入要排查的坐标:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已被排查，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DispalyBoard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = Bomb_Count(mine, x, y);
					show[x][y] = count + '0';
					DispalyBoard(show, ROW, COL);
					win++;
				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - GB)
	{
		printf("恭喜你，排雷成功\n");
		DispalyBoard(mine, ROW, COL);
	}
}

int Bomb_Count(char mine[ROWS][COLS], int x, int y)
{
	int n = 0;
	if (mine[x-1][y-1] == '1')
		n++;
	if (mine[x][y-1] == '1')
		n++;
	if (mine[x+1][y-1] == '1')
		n++;
	if (mine[x-1][y] == '1')
		n++;
	if (mine[x+1][y] == '1')
		n++;
	if (mine[x-1][y+1] == '1')
		n++;
	if (mine[x][y+1] == '1')
		n++;
	if (mine[x+1][y+1] == '1')
		n++;
	return n;
}
