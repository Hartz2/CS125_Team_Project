#define ROWS 16
#define COLS 57
void collide(int, int);
void clearScreen();
void printScreen();
void printArray(char lines[ROWS][COLS]);
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
