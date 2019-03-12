#include "types.h"
#include "stat.h"
#include "user.h"


int main(int argc, char** argv){
	int pid;
	int priority;
	pid = atoi(argv[1]);
	priority = getpriority(pid);
	if(priority == -1){
		printf(1, "Chale no se encontro el proceso con el id %d\n",pid);
	}else{
		printf(1,"El proceso %d has priority %d\n", pid, priority);
	}
	exit();
}