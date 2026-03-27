#include <stdio.h>

int main(){
    const char* date = "2026-03-24";
    char buffer[64];
    int year, month, day;

    sscanf(date, "%d-%d-%d", &year, &month, &day);
    sprintf(buffer, "%04d/%02d/%02d", year, month, day);

    printf("%s\n", buffer);
    return 0;
}
