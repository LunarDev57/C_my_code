#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5
#define ROWS ROW+2
#define COLS COL+2
#define GB 3

//≥ı ºªØ∆Â≈Ã
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

//œ‘ æ∆Â≈Ã
void DispalyBoard(char board[ROWS][COLS],int row,int col);

//≤º÷√¿◊
void SetMine(char mine[ROWS][COLS], int row, int col);

//≈≈≤È¿◊
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
