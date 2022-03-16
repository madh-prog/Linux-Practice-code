//#include<stdio.h>
//#include<unistd.h>
/*int main(void)
{
printf("current process\n");
fork();
printf("LInux Process22\n");
printf("Linux Processes33\n");
while(1);
return 0;
}*/



/*int main(void)
{
	int pid_1;
	printf("current process pid : %d\n",getpid());
	pid_1=fork();
	if(pid_1==0)
	{	
		printf("")
		printf("new child process pid =%d\n",getpid());
		printf("new child process ppid : %d\n",getppid());
	}
	else
	{
		sleep(3);
		printf("parent process pid : %d\n",getpid());
		printf("parent parent process ppid : %d\n",getppid());

	}
	while(1);
	return 0;
}*/

/*
int main()
{
	printf("I am going to execute an 'ls' program\n ");
	
	execl("/bin/ls","ls","-lh",0);
	printf("l executed ls program");
	printf("l executed ls program ");
	printf("l executed ls program ");
	return 0;
}*/

/*int main(int argc,char *argv[])
{
	int i;
	printf("\n File Name : %s\n",argv[0]);
	printf("\n Total Number of arguments : %d",argc);
	printf("\n Arguments Passed : ");
	for(i=1;i<argc;i++)
	{
		printf("%s ",argv[i]);
	}
	printf("\n");
}*/


/* Facing Error 

void callback1()
{
printf("Calling callback1\n");
}


void callback2()
{
printf("Calling callback2\n");
}


void callback3()
{
printf("Calling callback3\n");
}


int main()
{
printf("Registering callback1\n");
atexit(callback1);
printf("Registering callback2\n");
atexit(callback2);
printf("Registering callback3\n");
atexit(callback3);
return 0;
}*/

/*
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
	pid_t pid1;
	pid1=fork();
	if(pid1==0)
	{
		sleep(5);
		printf("I am child with delay of 5 sec and my child pro pid : %d\n",getpid());
	}
	else
	{
		int pid2;
		printf("I am parent pro pid  =%d\n", getpid());
		pid2=wait(0);
		printf("parent saying  child %d exited/terminated normally\n",pid2);
		printf("I am parent process pro pid=%d\n",getpid());
	}
return 0;
}*/

/* Incomplete

#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0)
{
fprintf(stderr,"fork failed");
exit(-1);
}
else if(pid==0)*/





/*
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
pid_t,pid;
int option,stat;
while(1)
{
printf("Enter 1 to exec 'ls' program in child process and 0 to exit\n");
scanf("%s",&option);
if(!option)
{
exit(0);
}
printf("\n");
if(fork()==0)
{
execl("/bin/ls","ls',0);
exit(0);
}*/


/*
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
pthread_t tid;
void* thread1(void *arg)
{
printf("newly created thread is executing\n");
return NULL;
}
int main(void)
{
int ret=pthread_create(&tid,NULL,thread1,NULL);
if(ret)
printf("Thread is not created\n");
else
{
printf("Thread is created\n");
pthread_join(tid,NULL);
}
//sleep(3);
return 0;
}
*/



#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
void * start_one(void *arg)
{
int i;
for(i=0;i<1000;i++)
{
printf("Thd of con 1\n");
}
}
void * start_two(void *arg)
{
int i;
for(i=0;i<1000;i++)
{
printf("Thd of con 2\n");
}
}
main()
{
pthread_t pt1,pt2;
getchar();
pthread_create(&pt1,NULL,start_one,NULL);
pthread_create(&pt1,NULL,start_two,NULL);

