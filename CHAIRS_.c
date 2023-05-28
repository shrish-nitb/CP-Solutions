#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
	    int X, Y;
	    scanf("%d %d", &X, &Y);
	    int extraChairs = X - Y;
	    if(extraChairs > 0){
	        printf("%d \n", extraChairs);
	    } else {
	        printf("0 \n");
	    }
	}
	return 0;
}

