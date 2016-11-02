#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int listFiles(char* path){
  DIR *d = opendir(path);
  struct dirent *content= readdir(d);
  while(*content){
    content=readdir(d);
  }
  printf("dirent: %s\n", content->d_name);
  printf("Errno: %d\n", errno);
}
int main(){
  listFiles("testdir");

}
