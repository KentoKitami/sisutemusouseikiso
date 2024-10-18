#include <stdio.h>

int main()
{
	int k,l;
	
	printf("How many red apples?");
	scanf("%d", &k);
	
	printf("How many green apples?");
	scanf("%d", &l);
	
	printf("The number of apples is %d", k+l);
	
	return 0;

}