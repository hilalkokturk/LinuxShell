#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#define NUM_THREADS	10
#define MAX_CHAR	100


int i=0;
char str[100];
FILE *file;
char *str2;
char *p;

void *addAll(void *threadid)
{
	
   printf("%s is on thread now\n", p);
	system(p);
	
        
        pthread_exit(NULL);

    
}

int main(int argc, char* argv[]){
    	pthread_t threads[NUM_THREADS];
	long th;
	int ret1;
	
    file = fopen("/home/lilo/Documents/OperatingSystem/commands.txt" , "r");
 while (fgets(str, MAX_CHAR, file) != NULL)
    {
 printf(" --- readed line %s\n", str);
 	str2 = strstr(str,";");

	if(str2 != NULL){

	 p = strtok(str, ";");


            while(p != NULL)
            {
                
                if(strcmp(p,"exit") == 0)
                {
                    printf("Exit code!" );
                }

		else{

		    int t;
		    for(t=0;t<sizeof(p);t++){
		    if(p !=NULL){
		    ret1 = pthread_create(&threads[t], NULL, addAll, (void *)t);
                    pthread_join(threads[t], NULL);
                    p = strtok(NULL, ";");
			}
}
		}

		}	
	}
  

}
     fclose(file);
    return(0);
	
}
