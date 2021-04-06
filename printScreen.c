#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "functionList.h"

int position=3;
int playerPosition=8;

void print_array(char lines[ROWS][COLS]){
srand(time(NULL));

int x;
	for (x=0; x< ROWS; x++) {
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
/*    clearScreen();        
    tower[playerPosition][COLS-5]='@';
    print_array(tower); */

    for (enemyX=1; enemyX<(COLS-2); enemyX+=1) {	
        clearScreen();	
	playerPosition=rand()%15+1;
	tower[playerPosition][COLS-5]='@';		
	//usleep(1*20000);
	//if (c!='w'||c!='s')
	//{
	//   c='k';
	//}
        tower[position][enemyX]='*';	
        print_array(tower);
///////////////////[NEXT ITERATION]//////////////////////
	tower[playerPosition][COLS-5]=' ';
        tower[position][enemyX]=' ';
    }
    
        
    
    for (loop=0; loop<15; loop++) {
        printf ("%s\n", tower[loop]);
    
    }
     printf ("\n");     
}
