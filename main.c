/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Anderson Souza <jair_anderson_bs@hotmail.com>
 *
 * Created on March 27, 2018, 7:32 PM
 */
#include <ncurses.h>
#include "screen.h"
#include "list.h"

int main(int argc, char** argv) {
    int y = 0, x = 0;

    init_mode_cursor();


    Screen* screen = initGame(y, x);
    
    
    //    Screen* screen = createScreen(y, x);


    //    initscr();
    //    noecho();
    //    cbreak();
    //    keypad(stdscr, TRUE); //teclas do teclado funcionarem
    //    curs_set(0); //desabilitar cursor
    //    timeout(100);
    // 43, 130


    //    screen

    //    Snake* snake1 = malloc(sizeof(Snake));
    //    snake1->coordinatey = 10;
    //    snake1->coordinatex = 10;
    //
    //    Snake* snake2 = (Snake*) malloc(sizeof(Snake));
    //    snake2->coordinatey = 10;
    //    snake2->coordinatex = 9;
    //
    //    snake1->next = snake2;
    //
    //    Screen* screen = createScreen(snake1, 10, 10);
    //    int key = right;
    //
    //    while (true) {
    //        clear();
    //        printSnake(screen->snake);
    //        //moveSnake(screen->snake, key);
    //        key = keyPressed(key);
    //        nextMovement(screen, key);
    //        refresh();
    //    }
    //    freeSnake(screen->snake);
    //    freeBoard(screen);
    //    killScreen();
    return 0;
}