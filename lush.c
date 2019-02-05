#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void loop(void){
    char * line; 
    char ** args;
    int status;

//read the commands entered by user
//it will parse the commands computer can understand the commands
// execute the commands

    do{
        printf("%s","lush>"); //print the prompt 
        line = getline();
        args = parse(line);
        status = execv(const char *path, char *const argv[]);

        //free memory 
        free(line);
        free(args);

    }while(status);
}


// DO THIS PART NEXT 

int main(int argc, char** argv){

    //running loop here
    loop();

    //fork creates child process here 
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    if (rc = -1) {         // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) { // child successfully created 
        printf("hello, I am child (pid:%d)\n", (int) getpid());
    } else {              // parent goes down this path (main)
        printf("hello, I am parent of %d (pid:%d)\n",
        rc, (int) getpid());
}
    return 0;

}
