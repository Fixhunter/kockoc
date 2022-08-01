#include"stdio.h"
#include"math.h"

int main() {
int k,n, max, min;
printf("Nhap n = ");
scanf("%d",&n);
max=n%10;
min=n%10;
while(n>0){
	k=n%10;
	printf("%d\n",k);
	n=n/10;
	
	if(k>max)
	max=k;

	if(min>k)
	min=k;
}
printf("\n so lon nhat la : %d",max);
printf("\n so be nhat la :%d", min);
}
