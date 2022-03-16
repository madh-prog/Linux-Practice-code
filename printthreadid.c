/*#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *PrintHello(void *threadid)
{
printf("\nHello World:\n");
while(1);
}
int main()
{
pthread_t thread;
int rc,t=0;
printf("Creating thread\n");
rc=pthread_create(&thread,NULL,PrintHello,NULL);
printf("\n Thread ID : %u",thread);
sleep(6);
t=pthread_cancel(thread);
if(t==0)
{
printf("\n Canceled thread\n");
}
printf("\n Thread ID: %u\n",thread);
return 0;
}*/

#include<pthread.h>
static void* threadFunc(void *arg)
{
char *s = (char *)arg;
printf("%s\n",s);
sleep(5);
}
int main(int argc,char *argv[])
{
pthread_t t1;
void *res;
int s;
pthread_create(&t1,NULL,threadFunc,"Hello World");
printf("Message from main()\n");
pthread_join(t1,&res);
printf("thread returned %ld\n",(long)res);
exit(0);
}


