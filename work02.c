#include <stdio.h>

int main() {

  printf("Testing out random stuff \n");
	int a = 86; 
	int b = 2;
	printf("Testing Int Division %d \n", a/b);
	
	float r = 86; 
	float y = 3;
	printf("Testing Division with decimal %0.2f \n", r/y);
	
	float c = 51.2;
	float d = 5.2;
	printf("Testing float multiplication %0.2f \n", c*d);
	
	unsigned e = 123512;
	char x = -480;
	printf("This is an unsigned %d and this is a char %c \n",e,x);
	printf("Interesting.. compiler is more trusting \n");
  return 0;
}