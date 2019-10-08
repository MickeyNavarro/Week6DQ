#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <signal.h>

//Almicke Navarro
//CST-221
//October 6, 2019
//This is my own work.

/*References: https://stackoverflow.com/questions/17504122/taking-a-string-as-input-and-storing-them-in-a-character-array-in-c
    https://en.wikibooks.org/wiki/C_Programming/Simple_input_and_output
 */

int main() {
    
    //define buffer
    char buffer[10];
    int counter = 0;
    
    //get user input and place into the buffer
    printf("Please input a char value:\n");
    fgets(buffer, 10, stdin);
    
    if (buffer[0] == 'Q' || buffer[0] == 'q')
    {
        printf("Letter is Q & cannot be added to the buffer.\n");
        //exit the program
        exit(1);
    }
    else
    {
        buffer[counter++] = buffer[10];
        printf("Since letter is not Q, it has been added to buffer.\n");
        
        //send the signal to the handler (consumer.c)
        signal(SIGINT, sighandler);
    }
    
    return 0;

}
