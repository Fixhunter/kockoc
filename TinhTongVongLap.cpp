#include<stdio.h>
int main(){
    int n;
    int chik;
    int s = 0;
    printf("Nhap zo: ");
    scanf("%d",&n);
    for(;n!=0;){
        chik = n % 10;
        s += chik;
        n /= 10;
    }    
    printf("%d",s);
}
 