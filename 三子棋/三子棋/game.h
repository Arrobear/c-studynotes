#pragma once
//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���̵Ĵ�С����
#define ROW 3
#define COL 3

//����������
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//����ж�
void PlayerMove(char board[ROW][COL], int row, int col);
//�����ж�
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж�ʤ��
char IsWin(char board[ROW][COL], int row, int col);