#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>


int main(int argc, char * argv[]) {
	
	printf("this is a test\n");
	int fd = socket(PF_UNIX, SOCK_STREAM, 3);
	void * buf = malloc(1024);
	printf("%p\n", buf);
	return(0);
}
