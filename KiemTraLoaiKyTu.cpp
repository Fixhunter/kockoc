#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a;
    int b;
    printf("Nhap 1 ki tu: ");
    a = getchar();
    b = a;
    if ((b > 32 && b < 48)
    ||(b > 57 && b < 65) 
    ||(b > 90 && b < 97)
    ||(b > 122 && b < 127)
    ||(b > 154 && b < 160)
    ||(b > 165 && b < 198)
    ||(b > 200 && b < 254)) 
    {
        printf("\nDay la ki tu dac biet");
    } 

        else if (b >= 48 && b <= 57) {
        printf("\nDay la ki tu so");
    } 
    else if (b == 32) {
        exit(0);
    } 
    else {
        printf("\nDay la ki tu chu");
    }
}
