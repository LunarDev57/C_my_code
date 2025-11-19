#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BOARD_ROW 3
#define BOARD_COL 3
#define WIN_ROW 3
#define WIN_COL 3

//初始化棋盘
void Initboard(char board[BOARD_ROW][BOARD_COL], int row, int col);

//打印棋盘
void DispalyBoard(char board[BOARD_ROW][BOARD_COL], int row, int col);

//玩家下棋
void PlayerMove(char board[BOARD_ROW][BOARD_COL], int row, int col);

//电脑下棋
void ComputerMove(char board[BOARD_ROW][BOARD_COL], int row, int col);

//判断输赢
char IsWin(char board[BOARD_ROW][BOARD_COL], int row, int col);