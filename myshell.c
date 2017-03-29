

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#define NUM_THREADS	 5

int v = 1; //sorunu çözene kadar 2 yaptım


char *inputptr;
char *splited;

void *addAll(void *threadid)
{
    long tid;
    tid = (long)threadid;
    int i;
    for(i=0;i<v;i++){
    printf("%s is on thread now\n",splited);
    system(splited);
    wait(10* rand());}

    pthread_exit(NULL);

    
}


int main(int argc, char* argv[]){
    
    pthread_t threads[5];
    int ret1;
    long t;
    char input[50];
    char *inputptr;
    
    inputptr=input;

    printf("myshell:>");
    gets(inputptr);
    
    while(strcmp(inputptr, "exit")!= 0) {
        splited=input;
        
        splited = strtok(splited, ";");
   
    
            while(splited !=NULL)
            {
                
                for(t=0; t<sizeof(splited);t++)
                {

		
		if(splited != NULL){
			/*if(splited =="cd"){
			printf("You cannot leave this directory");
			}*/   //cd için tekrar bak


                    //printf("we have %s\n",splited);
                    ret1 = pthread_create(&threads[t], NULL, addAll, (void *)t);
                    pthread_join(threads[t], NULL);
                    splited = strtok(NULL, ";");}
            }
        }
        
        printf("myshell:>");
        gets(inputptr);
        
    }
    
    return 0;
    
}
