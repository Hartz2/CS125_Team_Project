#include <stdio.h>
#include <unistd.h>

//#define ROWS 16
//#define COLS 57
//#define POS 3
#include "functionList.h"

void print_array(char lines[ROWS][COLS]){
   
int x;
 for (x=0; x< ROWS; x++){
    printf("%s\n", lines[x]);
 }
}

void clearScreen(){
    usleep(1*200000);
    printf("\e[2J\e[H");
}

void printTower(){
    int loop;
    char tower[ROWS][COLS]={
     "          ____________________________________________ ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "          ___________________________________________| "};
    
    int enemyX; 
    clearScreen();
 
    for(enemyX=1; enemyX<(COLS-2); enemyX+=1){
        clearScreen();
        tower[POS][enemyX]='*';
        print_array(tower);
        tower[POS][enemyX]=' ';
    }
    for(loop=0; loop<15; loop++){
        printf("%s\n", tower[loop]);
    
    }
     printf("\n");     
}


