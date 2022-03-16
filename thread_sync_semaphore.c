/*#include<semaphore.h>
#include<stdio.h>

int sharedVar=5;
sem_t my_sem;

void *thread_inc(void *arg)
{
sem_wait(&my_sem);
sharedVar++;
printf("after incr = %d\n",sharedVar);
sem_post(&my_sem);
}
void *thread_dec(void *arg)
{
sem_wait(&my_sem);
sharedVar--;
printf("after decr=%d\n",sharedVar);
sem_post(&my_sem);
}
int main()
{
	pthread_t thread1,thread2;
	sem_init(&my_sem,0,1);
	pthread_create(&thread1,NULL,thread_inc,NULL);
	pthread_create(&thread2,NULL,thread_dec,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("shareVar=%d\n");
	return 0;
}*/


#include<semaphore.h>
#include<stdio.h>

int sharedVar=5;
pthread_mutex_t my_mutex;

void *thread_inc(void *arg)
{
	pthread_mutex_lock(&my_mutex);
	sharedVar++;
	printf("after incr = %d\n",sharedVar);
	pthread_mutex_unlock(&my_mutex);
}
void *thread_dec(void *arg)
{
	pthread_mutex_lock(&my_mutex);
	sharedVar--;
	printf("after decr=%d\n",sharedVar);
	pthread_mutex_unlock(&my_mutex);
}
int main()
{
	pthread_t thread1,thread2;
	pthread_mutex_init(&my_mutex,NULL);
	pthread_create(&thread1,NULL,thread_inc,NULL);
	pthread_create(&thread2,NULL,thread_dec,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("shareVar=%d\n");
	return 0;
}
