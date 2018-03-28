/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   screen.h
 * Author: Anderson Souza <jair_anderson_bs@hotmail.com>
 *
 * Created on March 27, 2018, 8:15 PM
 */

#include <ncurses.h>

#define size_screen_y getmaxy(stdscr)
#define size_screen_x getmaxx(stdscr)


typedef struct screen Screen;
typedef struct snake Snake;

int draw_menu();

int init_mode_cursor();

Screen* initGame(int y, int x);

Screen* createScreen(int y, int x);

int calculateMiddleScreen(int value);

Snake* createSnake(int y, int x);

void endWindow();
//Screen* createScreen(Snake* snake);
//
//
//int calculateMiddleScreen(int value);
////return some error e.g.
//Snake* createSnake();
//
//void killScreen();
//
//void freeSnake(Snake* snake);
//
//void freeBoard(Screen* screen);
//
//
//Snake* createNewSnake(int y, int x);
//
//Snake* calculateCoordinate(int y, int x, int newDirection);
//
//int keyPressed(int previous);
//
//void d(Snake* snake, Snake* snakeTemp);
//
//void printSnake(Snake* snake);
//
////novo cálculo passando as coordenadas
//Snake* calculateNextCell(Screen* screen, Snake* newSnake);
//void isEdge(Screen* screen);
//int nextMovement(Screen* screen, int movement)
//
