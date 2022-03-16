/*#include<stdio.h>
#include<pthread.h>
pthread_once_t once = PTHREAD_ONCE_INIT;
void *myinit()
{
	printf("\n I am init run\n");
}
void *mythread(void *i)
{
	printf("\n I am in mythread = %d \n",(int *)i);
	pthread_once(&once,(void *)myinit);
	printf("\n Exit from mythread : %d\n",(int *)i);
}
int main()
{
	pthread_t thread,thread1,thread2;
	pthread_create(&thread,NULL,mythread,(void *)1);
	pthread_create(&thread,NULL,mythread,(void *)2);
	pthread_create(&thread,NULL,mythread,(void *)3);
	printf("\n Exit for main thread\n");
	pthread_exit(NULL);
}*/

//pthread_attr_getinheritschedmethod
#include<stdio.h>
#include<pthread.h>
#include<sys/mman.h>
void* Proc(void* param)
{
	sleep(3);
	return 0;
}
int main(int argc,char *argv[])
{
	pthread_attr_t Attr;
	pthread_t id;
	int err,info;
	pthread_attr_init(&Attr);
	
	pthread_attr_setinheritsched(&Attr,PTHREAD_EXPLICIT_SCHED);
	pthread_attr_getinheritsched(&Attr,&info);
	switch(info)
	{
	case PTHREAD_INHERIT_SCHED: 
			printf("\n Sched from its parent\n");
			break;
	case  PTHREAD_EXPLICIT_SCHED:
			printf("\n Explicit defination own schd pol n pri\n");
			break;
	}
	pthread_create(&id,&Attr,Proc,NULL);
	return (0);
}

