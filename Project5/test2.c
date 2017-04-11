#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int f;
	int ret;	
  f = open("/dev/sleepy0",O_RDWR);
	char data[128];
	
	ret = read(f, data, 128);
	printf("Return value is: %i \n", ret); 
	return 0;
}
