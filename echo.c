/* echo.c - echo user input */
/* [Ethan] */
/* Last updated: 3/28/22 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
<<<<<<< HEAD
    char input[250];
    while(fgets(input, 250, stdin)){  //read from STDIN (aka command-line)
=======
    char input[1000];
    while(fgets(input, 1000, stdin)){  //read from STDIN (aka command-line)
>>>>>>> update-buffer-size
        printf("%s\n", input);  //print out what user typed in
        memset(input, 0, strlen(input));  //reset string to all 0's
    }
    return 1;
}