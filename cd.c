#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
char buf[502];

int
main(int argc, char *argv[]){
 if(argc <= 1){
    printf(1, "Usage: cd directory...\n");
    exit();
  }
 int ret =chdir(argv[1]);

 if(ret==0){
  printf(1,"fail to access %s\n", argv[1]);
 printf(1, "the current directory now is %s\n", argv[1]);
  exit();
 }
 else{
  printf(1, "the current directory now is %s\n", argv[1]);
 }

 exit();
}

