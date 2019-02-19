#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char** argv){
    int server = open("pip", O_WRONLY);
    if(server < 0){
        printf("Server offline\n");
        return 1;
    }
    for(int i=0; i<argc; i++)
        write(server, argv[i], strlen(argv[i]));
    close(server);

    return 0;
}
