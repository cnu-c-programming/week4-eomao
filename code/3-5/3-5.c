#include <stdio.h>

void my_print(char type, void* x){
    static unsigned char prev = 0;

    if(type == 'C'){
        prev = *(unsigned char*)x;
        printf("%c\n", prev);
    }else if(type == 'D'){
        unsigned char cur = *(unsigned char*)x;
        printf("%d\n", ((int)prev << 8) | cur);
    }else if(type == 'S'){
        printf("%s\n", (char*)x);
    }
}

int main(){
    int a = 0x61;
    char b = 'b';
    char* c = "hello world";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S', c);
    my_print('C', c);

    return 0;
}
