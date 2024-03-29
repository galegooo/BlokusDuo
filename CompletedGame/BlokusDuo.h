#ifndef BLOKUSDUO_H
#define BLOKUSDUO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BORDERFILL '+'

#define TRUE 1
#define FALSE 0

#define AI 1

#define PIECE_ALREADY_USED -1
#define SPOT_NOT_EMPTY -2
#define SHARES_EDGE -3
#define NOT_SHARE_VERTEX -4
#define MUST_COVER_55 -5
#define MUST_COVER_AA -6
#define FIRST_MOVE -7

typedef struct move {
  int x;
  int y;
  int piece;
  int rotation;
} MOVE;

/*  Main.c  */
int switchPlayer(int currentPlayer);
int aiOrHuman(int playerNumber);

void readError(int check);
void endGame(int board[16][16], int currentPlayer, int available[2][21], int bonus[2]);


/*  Board.c */
void initBoard(int board[16][16], int available[2][21]);
void showBoard(int board[16][16]);

int remainingPieces(int currentPlayer, int available[2][21]);


/*  Play.c  */
MOVE askMove(int currentPlayer, int turn, int board[16][16], int available[2][21], char *previousCode, int bonus[2]);
MOVE decodeCode(char* code);
MOVE checkPossible(int currentPlayer, int turn, int board[16][16], int available[2][21], int check, int *final, int bonus[2]);

int checkCode(char* code);
int checkMove(int currentPlayer, MOVE move, int board[16][16], int available[2][21], int turn);

void checkIfEnd(int currentPlayer, int bonus[2], MOVE move, int available[2][21], int board[16][16]);
void placeMove(MOVE move, int board[16][16], int currentPlayer, int available[2][21]);

#endif