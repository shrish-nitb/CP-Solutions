#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
	    int a, b, c;
	    scanf("%d %d %d", &a, &b, &c);
	    int btwAB = ((a/b) && (a/c)) || !((b/a) && (b/c));
	    int btwAC = btwAB && (c/a);
	    if(!btwAB){
	        printf("BOB \n");
	    } else if(btwAC){
	        printf("CHARLIE \n", c);
	    } else {
	        printf("ALICE \n", a);
	    }
	}
	return 0;
}

