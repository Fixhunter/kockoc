<<<<<<< HEAD
#include<stdio.h>

int main(){
	int n;int q=0;
	printf("chuong trinh nay se in ra tam giac can\n" );
	printf("nhap chieu cao tam giac: \n");
	scanf("%d",&n);

	while(n>0)
	{
		for (int i = 1; i < n; ++i)
		{
			printf("%c",' ');
		}
		for (int k = 0; k <= q; ++k)
		{
			printf("%c", '*' );
		}
		n --;
		q += 2;
		printf("\n");
	}
	
	return 0;
	
}

=======
#include<stdio.h>

int main(){
	int n;int q=0;
	printf("chuong trinh nay se in ra tam giac can\n" );
	printf("nhap chieu cao tam giac: \n");
	scanf("%d",&n);

	while(n>0)
	{
		for (int i = 1; i < n; ++i)
		{
			printf("%c",' ');
		}
		for (int k = 0; k <= q; ++k)
		{
			printf("%c", '*' );
		}
		n --;
		q += 2;
		printf("\n");
	}
	
	return 0;
	
}

>>>>>>> bd22143ce8cb92145452eb6ce5105d96b5cd033d
