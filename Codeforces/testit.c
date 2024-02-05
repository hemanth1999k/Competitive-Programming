#include<stdio.h>
#include<unistd.h>
int main(){
	pid_t var1;
	var1 = fork();
	if (var1 > 0)
		printf("%d\n",var1);
	else 
		printf("%d\n",-1);
	return 0;
}