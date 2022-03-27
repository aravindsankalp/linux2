#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	char s[20];
	int fd;

	//mkfifo("newfifo11", 0644);           //Create fifo (named pipe)//file

	printf("Before open()..\n");
	fd=open("newfifo11",O_RDONLY);   //3  file table rdr pro      // open fifo for read only
	printf("After open()..\n");

	read(fd, s, sizeof(s));         //read data from fifo
	printf("Data: %s\n",s);

	return 0;
}
