#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>
#include<unistd.h>

int main(){


void *handle;

/*step1  Declare function pointer */

void (*fptr)();

printf("%s: Welcome to linux world\n",__func__);
getchar();

/* step2: Request link loader to load specified libray and
  attach it into our address sapce  */

handle=dlopen("./libtest.so",RTLD_NOW);

if(handle==NULL){

	printf("Failed To load into memory\n");
	exit(2);

}

/* step3: Lookup for address of required functiom */

fptr=dlsym(handle,"f1");
getchar();

/* step 4:  invoke function through pointer  */

(*fptr)();

/* step5:  Request link laoder to unlink library */
dlclose(handle);

printf("%s: End of main function",__func__);

return 0;

}
