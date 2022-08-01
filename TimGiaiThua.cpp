#include <stdio.h>
 
int main()
{
    int i, n;
    int fact = 1;
 
    printf("Nhap 1 So Tu Nhien = ");
    scanf("%d", &n);
 
    for(i = 1; i <= n; i++) 
    {
        fact = fact * i;
    }
 
    printf("%d! = %d\n", n, fact);
 
    return 0;
}

