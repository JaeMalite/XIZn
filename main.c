
#include <stdio.h>
#include <unistd.h>
#include "fun.h"

int main()
{
	while(1)
	{
    	printf("Hello world!\r\n");
		doit();
		sleep(2);
		printf("Yes\r\n");
		printf("Why\r\n");
		sleep(1);
	}
	return 0;
}
	

