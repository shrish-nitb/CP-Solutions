#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
	    int l;
	    scanf("%d", &l);
	    char s[l];
	    scanf("%s", &s);
	    for(int k = 0;k<l;k++){
	        switch(s[k]){
	            case 'A':
	               printf("T");
	               break;
	            
	            case 'C':
	                printf("G");
	                break;
	            
	            case 'T':
	                printf("A");
	                break;
	            
	            case 'G':
	                printf("C");
	                break;
	        }
	    }
	    printf("\n");
	}
	return 0;
}

