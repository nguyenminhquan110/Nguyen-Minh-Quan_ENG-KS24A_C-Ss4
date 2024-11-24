#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d",&number);
	if(number > 0){
		printf("So nay la so nguyen duong"); 
	}else if(number < 0){
		printf("So nay la so nguyen am"); 
	}
	return 0; 
}  
