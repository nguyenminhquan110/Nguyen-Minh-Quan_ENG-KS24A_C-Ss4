#include<stdio.h>
int main(){
	int number1, number2, number3; 
	printf("Moi ban nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Moi ban nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	printf("Moi ban nhap so nguyen thu ba: ");
	scanf("%d", &number3);
	if(number1 > number2) {
		int temp = number1;
		number1 = number2;
		number2 = temp;
    }
    if(number1 > number3){
    	int temp =number1;
		number1 = number3;
		number3 = temp; 
	} 
	if(number2 > number3){
		int temp = number2;
		number2 = number3;
		number3 = temp; 
	} 
		printf("Cac so sap xep theo thu tu tu nho den lon la: %d, %d, %d\n", number1, number2, number3); 
	return 0; 
} 
