#include<stdio.h>
int inputInteger(){
	int userInput;
	while(1){
		printf("\nNhap mot so nguyên duong (N > 0): \n");
		scanf("%d", &userInput);
		if(userInput > 0){
			break;
		}
	}
	return userInput;
}

void displayFibonaci(){
	int userInput;
	int fibo[1000];
	userInput = inputInteger();
	printf("Hien thi chuoi fibonacci nho hon %d:\n", userInput);
	for(int i = 0; ; i++){
		if(i == 0){
			fibo[i] = 0;
		}
		else if(i == 1){
			fibo[i] = 1;
		}
		else {
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		
		if(fibo[i] < userInput){
			printf("%d ", fibo[i]);
		}
		else{
			break;
		}
	}
}

int main(){
	displayFibonaci();
	return 0;
}
