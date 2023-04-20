#include<stdio.h>
#include<unistd.h>

int main(){


	printf("%s WElcome to linux world\n",__func__);
	printf("pid: %d",getpid());

}
