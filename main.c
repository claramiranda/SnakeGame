/* 
 * File:   main.c
 * Author: Anderson Souza <jair_anderson_bs@hotmail.com>
 *
 * Created on March 27, 2018, 7:32 PM
 */
#include "screen.h"
#include "list.h"

int main(int argc, char* argv[]) {
    //argc numbers of arguments
    //argv value of arguments


    init_mode_cursor();

    int key = default_dir;
    int next = default_next_movement;

    Screen* screen = init_game(size_screen_y, size_screen_x);

    create_food(screen);

    while (next) {
        clear();
        print_snake(screen);
        print_food(screen);
        key = key_pressed(key);
        next = next_movement(screen, key);
        refresh();
    }
    end_window();
    free_food(screen);
    free_snake(screen);
    free_screen(screen);
    return 0;
}