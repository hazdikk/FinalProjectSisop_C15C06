#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	int fd, dfd, r, w;
	char *src, *dest;
	char buf[9999];
	
	if(argc <= 2)
	{
		printf(1, "Cannot copy its self!\n");
		exit();
	}
