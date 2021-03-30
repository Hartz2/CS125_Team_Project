#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(){

 int position;
    srand(time(NULL));

 while(enemyX<COLS){
    position= rand()%14+2;
    enemyX++;
 }
 return 0;
}


