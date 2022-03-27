#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	char s[20];
	int fd;

	mkfifo("newfifo11",0644);              //newfifo1 is an pipe i.e a file named pipe 							Create fifo(named pipe)
	perror("mkfifo");

	printf("Before open()...\n");
	fd = open("newfifo11",O_WRONLY);       //open fifo for write only
	printf("After open()...\n");

	printf("Enter data...\n");
	scanf("%s",s);
	//gets(s);
	write(fd,s,strlen(s)+1);        //std wt();  internally filewrite data to 						fifo
	return 0;
}





//fifo is pipe with name....named pipe...will have name in file system...




/*stack

heap
bss
data
text*/
//for()
//s[i]  == ''  s[i+1] == 


//linux kernel





//wrt 						red

//mkfifo(abc1,0644)....crt fifo			mkfifo(abc1,0644) ctr abc1
