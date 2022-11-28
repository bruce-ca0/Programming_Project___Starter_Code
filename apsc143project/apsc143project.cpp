// APSC 143 Engineering Programming Project Starter Code
// Feel free to change anything about this file, but do not remove "#include "colours.h".

// Make sure to include all relevant libraries
#include <stdio.h>
#include "colours.h"
#include <stdlib.h>

// You don't need to use these, but they help make your code look more organized
#define PACMAN 'P'
#define GHOST 'G'
#define DOT '.'
#define WALL 'W'
#define EMPTY ' '
#define UP 'w'
#define LEFT 'a'
#define DOWN 's'
#define RIGHT 'd'

// Below are the required functions for this program, but you will need to create your own as well.
// Make sure to specify the required parameters, if any.

void printMap(/*parameters*/){
    }
int winCheck(/*parameters*/){
    return 0;
}
int loseCheck(/*parameters*/){
    return 0;
}
int isWall(/*parameters*/){
    return 0;
}

int main() {
    FILE *fp;
    fp = fopen("map.txt", "r");
    char* map[11];

    for (int i = 0; i < 11; ++i) {
        map[i] = (char*) malloc(22 * sizeof(char));
    }

    for (int i = 0; i < 11; ++i) {
        fscanf(fp, "%21s", map[i]);
    }


    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 22; ++j) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }

}
