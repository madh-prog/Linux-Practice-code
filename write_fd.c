#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,len;
	char write_buf[50]="hi,how are you ?, wow";
	char read_buf[50];
	fd=open("maxfds.c",O_CREAT|O_RDWR,777);
	len=write(fd,write_buf,50);
	printf("return value from write option  = %d\n",len);
	lseek(fd,4,SEEK_SET);
	lseek(fd,4,SEEK_SET);
	lseek(fd,4,SEEK_SET);
	read(fd,read_buf,len);
	printf("data from buffer (read option )=%s\n",read_buf);
	
	close(fd);
	return 0;
}

