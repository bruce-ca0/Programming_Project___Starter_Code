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

char**readFile(char* fp) {
    FILE *open = fopen(fp, "r");

    if (open == NULL) {
        printf("File not found\n");
        exit(-1);
    }

    char** map = (char**)malloc(11*sizeof(char*));

    for(int i = 0; i < 11; i++) {
        map[i] = (char*)malloc(11*sizeof(char));
        fscanf(open, "%c %c %c %c %c %c %c %c %c %c %c", &map[i][0], &map[i][1], &map[i][2], &map[i][3], &map[i][4], &map[i][5], &map[i][6], &map[i][7], &map[i][8], &map[i][9], &map[i][10]);
        getc(open);
    }
    fclose(open);
    return map;
}

void printMap(char**map){
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            printf("%c  ", map[i][j]);
        }
        printf("\n");
    }
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

int pressW(){
    return 0;
}

int pressA(){
    return 0;
}

int pressS(){
    return 0;
}

int pressD(){
    return 0;
}

int main() {
    char**pacman = readFile("C:\\Users\\caobr\\Downloads\\Programming Project - Starter Code\\apsc143project\\map.txt");
    printMap(pacman);
//    while(1){
//        char userInput;
//        scanf("%c", &userInput);
//        switch (userInput) {
//            case 'w':
//                pressW();
//                break;
//            case 'a':
//                pressA();
//                break;
//            case 's':
//                pressS();
//                break;
//            case 'd':
//                pressD();
//                break;
//        }
//
//    }
}
