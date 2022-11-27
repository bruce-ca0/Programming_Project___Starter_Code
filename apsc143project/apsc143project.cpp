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
    FILE *inputMap;
    inputMap = fopen("map.txt", "r");
    char **map = (char **) malloc(11 * 21 * sizeof(char));
    for (int i = 0; i < 11; ++i) {
        map[i] = (char*) malloc(21 * sizeof(char));
    }

    for (int i = 0; i < 11; ++i) {
        //fscanf(inputMap, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", &map[i][0], &map[i][1],&map[i][2],&map[i][3],&map[i][4],&map[i][5],&map[i][6],&map[i][7],&map[i][8],&map[i][9],&map[i][10],&map[i][11],&map[i][12],&map[i][13],&map[i][14],&map[i][15],&map[i][16],&map[i][17],&map[i][18],&map[i][19],&map[i][20]);
        //fscanf(inputMap, "%s", &map[i]);

        for (int j = 0; j < 21; ++j) {
            map[i][j] = fgetchar();
        }
    }


    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 21; ++j) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }

}
