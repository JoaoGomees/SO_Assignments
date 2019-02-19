#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define DEZMEGA 1024*1024

int main(int argc, char const *argv[])
{
	if(argc < 1){
		printf("Provide the file name\n");
		return 1;
	}
	char c[11] = "aaaaaaaaaa";
	int fd = open(argv[1], O_WRONLY);
	for (int i = 0; i < DEZMEGA; ++i)
	{
		write(fd,&c,1);
	}
	close(fd);
	return 0;
}
