#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int c ;
  
/* use system call to make terminal send all keystrokes directly to stdin */

	system ("/bin/stty raw") ;

	while ( (c=getchar() ) != '.' ) {

    /* type a period to break out of the loop, since CTRL-D won't work raw */

	switch (c) {
	
	case 'w' :
		printf ("You pressed up") ;
		break ;
	
	case 's' :
		printf ("You pressed down") ;
		break ;
	
	case 'd' :
		printf ("You pressed right") ;
		break ;
	
	case 'a' :
		printf ("You pressed left") ;
		break ;
	
	default :
		printf ("") ;
		break ;
	}

	}

  /* use system call to set terminal behaviour to more normal behaviour */

	system ("/bin/stty cooked") ;

return 0 ;
}
