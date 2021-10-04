#include<stdio.h>
#include<unistd.h>

  int main(){
  int a;
  int i=0;
  for(i=0;i<3;i++){
          a=fork();
          if(a<0){
                  printf("process creation failed\n");
          }
          if(a==0){
          printf("child code section\n");
          printf("here is the table of 3\n");
          sleep(1);
          for(i=1;i<=30;i++)
          printf("3 * %d is %d\n",i,3*i);
          }
          if(a>0){
          printf("parent code section\n");
          printf("here is the table of 2\n");
          sleep(10);
          for(i=1;i<=10;i++)
          printf("2 * %d is %d\n",i,2*i);
          break;
	}
       }
      return 0;
  }
