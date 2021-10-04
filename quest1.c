//write a c program to create 4 child prcess in nested order.
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
	}
	if(a>0){
	printf("parent code section\n");
	break;
       }
      }
    return 0;
}

