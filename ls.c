#include <types.h>
#include <stat.h>
#include <user.h>
#include <fs.h>


void ls(char *path)
{
	char *p;
	char buf[512]; //
	struct dirent de; // fs.h  
	struct stat st; //stat.h
	int file_open//untuk mendapatkan hasil dari open(path,0)

	if((file_open=open(path,0)) < 0)
	{
		printf(2,"ls : tidak dapat dibuka %s\n", path);
		return;
	}

	if(fstat(file_open, &st))
	{
		printf(2,"ls:tidak dapat stat %s\n", path);
		close(file_open)
		return;
	}

}

int main(int argc, char *argv[])
{
	if (argc <2)
	{
		//masuk ke fungsi ls
	}
	for (int a=1;a<argc;a++)
	{
		//masuk ke fungsi ls berdasarkan format input yang dimasukkan
	}
}