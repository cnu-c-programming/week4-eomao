#include <stdio.h>

void inc(int* x){
    if(isnull(x)){
        return;
    }
    *x = *x + 1;
    printf("%d\n", *x);
}

int main(){
    int x = 3;

    inc(&x);
    inc(NULL);

    return 0;
}
