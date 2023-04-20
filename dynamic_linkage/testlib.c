#include<stdio.h>
#include<unistd.h>
void main(){

	printf("%s,Welcome to Dynamic linkage",__func__);
	f1();
	getchar();
	printf("start: %d",getpid());

}

