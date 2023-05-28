#include <stdio.h>
#include <math.h>

int main(void) {
    int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
	    int X, Y, N, R;
	    float x, y;
	    scanf("%d %d %d %d", &X, &Y, &N, &R);
	    if(N*X<=R && N*Y<=R){
	        printf("0 %d \n", N);
	    } else if(N*Y<=R){
	        printf("0 %d \n", N);
	    } else if(N*X<=R){
	        int ceilVal = (int)ceil((double)(N*Y - R)/(double)(Y - X));
	        int intY = N - ceilVal;
	        printf("%d %d \n", ceilVal, intY);
	    } else {
	        printf("-1 \n");
	    }
	}
	return 0;
}

