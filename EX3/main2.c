#include <stdio.h>



int main() {
    int z = 10;
    if ( z  > 0 && ( z & ( z - 1 ) )  ){
        printf("no");
    }    
    else{
        printf("yes");
    }
    
    return 0;
}
