//write a c program to create 4 child prcess in parellel order.Each child should able to print table of 2,3,5 respectively and one child is stating process firefox .Parent is doing nothing only creating child

  #include<stdio.h>
  #include<unistd.h>
 
  int main(){
  pid_t a;
  
  int i=0;
  for(i=0;i<3;i++){
          a=fork();
         if(a<0){
                 printf("process creation failed\n");
         }
         if(a==0){
         printf("child code section\n");
		printf("here is the table of 2\n");
		for(i=1;i<=10;i++)
		printf(" 2 * %d is %d\n",i,2*i);
		printf("here is the table of 3\n");
		for(i=1;i<=10;i++)
		printf("3 * %d is %d\n",i,3*i);
		printf("here is the table of 5\n");
		for(i=1;i<=10;i++)
		printf("5 * %d is %d\n",i,5*i);
		if(i==0)
		execl("/usr/bin/firefox","firefox",NULL);
         }
         if(a>0){
         printf("parent code section\n");
         break;
        }
       }
     return 0;
 }
