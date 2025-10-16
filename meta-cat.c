#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[]){
	int fd =open("test",O_RDONLY);
	close(fd);
	return 0;
}
