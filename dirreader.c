#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int printFiles(char* path){
  DIR *d = opendir(path);
  printf("All files:\n");
  struct dirent *content= readdir(d);
  while(content){
    printf("Name: %s\n",content->d_name);
    //printf("Content: %d\n", content);
    content=readdir(d);
  }
  closedir(d);
}

int printRegules(char* path){
  DIR *d = opendir(path);
  printf("All files:\n");
  struct dirent *content= readdir(d);
  while(content){
    printf("Name: %s\n",content->d_name);
    //printf("Content: %d\n", content);                                         
    content=readdir(d);
  }
  closedir(d);  

}
int main(){
  listFiles("testdir");

}
