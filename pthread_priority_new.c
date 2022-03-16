#include<stdio.h>
#include<pthread.h>
void *my(void *i)
{
	printf("\n I am in %d Thread \n",(int *)i);
}
main()
{
	pthread_t tid;
	struct sched_param param;
	int priority,policy,ret;
	ret=pthread_getschedparam(pthread_self(),&policy,&param);
	printf("\n-------------------------Main thread---------------------\n Policy =%d\t Priority=%d \t\n",policy,param.sched_priority);
	policy=SCHED_FIFO;
	param.sched_priority=3;
	pthread_setschedparam(pthread_self(),policy,&param);
	pthread_getschedparam(pthread_self(),&policy,&param);
	printf("\n-------------------------Main thread---------------------\n Policy =%d\t Priority=%d \t\n",policy,param.sched_priority);
	
}
