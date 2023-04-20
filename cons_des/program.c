#include<stdio.h>
#include<stdlib.h>

void begin(void)__attribute__((constructor));
void begin1(void)__attribute__((constructor));
void end(void)__attribute__((destructor));
void end1(void)__attribute__((destructor));


int main(){

		printf("program main function started\n");
		//do some work
		
	printf("program main function ended\n");
	return 0;
	}
void begin(void){

	printf("Initialization resources\n");

	//initalize resource or load data here
}
void begin1(void){

	printf("begin1 constructor\n");

}

void end(void){


	printf("cleaning up resorces\n");

	// release resource or save data here
}
void end1(void){

	printf("end1 destructor\n"); 

}
