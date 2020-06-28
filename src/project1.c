#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int x ;
	int w ;
	
	printf("Enter the length of the rectangle\n");
	scanf("%d",&x);
	
	printf("Enter the width of the rectangle\n");
	scanf("%d",&w);
	
	
	for(int i = 0 ; i < x ; i++) {
		for (int j = 0 ; j < w ; j++ ){
			printf("* ");
		}
		printf("\n");
	}
	
	int m ;
	printf("Enter the height of the triangle\n");
	scanf("%d",&m);
	
	for(int q = m ; q >= 1 ; q--){
		for(int r = 0 ; r < q ; r++)
		    printf("%d", q);
		    
		printf("\n");    
	}
	
			
	return 0;
}
