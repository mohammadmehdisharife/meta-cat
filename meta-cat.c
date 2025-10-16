#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[]){
	int fd =open(argv[1] ,O_RDONLY);
	
	close(fd);
	return 0;
}
