#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <signal.h>

//Almicke Navarro
//CST-221
//October 6, 2019
//This is my own work.

/*References:
    https://www.tutorialspoint.com/c_standard_library/c_function_signal.htm
 */

void sighandler(int);

void sighandler(int signum) {
    printf("Caught signal %d, coming out...\n", signum);
    exit(1);
}
