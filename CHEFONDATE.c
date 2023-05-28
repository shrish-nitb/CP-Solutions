#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for(int i = 0; i<T; i++){
	    int X, Y;
	    scanf("%d %d", &X, &Y);
	    if(Y > X){
	        printf("NO \n");
	    } else {
	        printf("YES \n");
	    }
	}
	return 0;
}

