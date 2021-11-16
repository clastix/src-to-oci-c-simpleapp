#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	const char* hello_msg = getenv("HELLO_MSG");

	printf("Hello %s!\n", (hello_msg!=NULL)? hello_msg : "world");
	sleep(3600);
	return 0;
}
