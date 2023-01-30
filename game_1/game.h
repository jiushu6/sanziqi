#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//���Ŷ���
#define ROW 3
#define COL 3
 


//����������

//��ʼ������
void InitBoard(char board [ROW][COL],int row,int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ��Ӯ�Ƿ����
char IsWin(char board[ROW][COL], int row, int col);