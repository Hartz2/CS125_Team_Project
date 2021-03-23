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
    
    int player; 
    clearScreen();
 
    for(player=1; player<(COLS-2); player+=1){
        clearScreen();
        tower[POS][player]='*';
        print_array(tower);
        tower[POS][player]=' ';
    }
    for(loop=0; loop<15; loop++){
        printf("%s\n", tower[loop]);
    
    }
     printf("\n");     
}


