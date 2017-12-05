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

	src = argv[1];
	dest = argv[2];

	if((fd = open(src, O_RDONLY)) < 0) 
	{
		printf(2, "cp: cannot open source %s\n", src);
		exit();
	}

	if((dfd = open(dest, O_CREATE|O_WRONLY)) < 0)
	{
		printf(2, "cp: cannot open destination %s\n", dest);
		exit();
	}
