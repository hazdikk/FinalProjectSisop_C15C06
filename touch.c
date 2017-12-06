#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc, char* argv[])
{
	if (argc < 2) printf(1,"Kesalahan syntax, seharusnya touch NAMAFILE");

	int a, file;
	for (a=1;a<argc;a++)
	{
		file = open(argv[a], O_CREATE);
		if (file < 0)
		{
			printf(1, "Error dalam membuat file\n");
			exit();
		}
		close(file);
	}
	exit();
}