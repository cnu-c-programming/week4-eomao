#include <stdio.h>
#include <string.h>

void my_print(char type, void* x){
    if(type == 'C'){
        unsigned int temp = 0;
        memcpy(&temp, x, sizeof(temp));
        printf("%c\n", (unsigned char)temp);
    }else if(type == 'D'){
        unsigned char temp = 0;
        memcpy(&temp, x, sizeof(temp));
        printf("%u\n", temp);
    }else if(type == 'S'){
        printf("%s\n", (char*)x);
    }else{
        printf("unsupported type\n");
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
