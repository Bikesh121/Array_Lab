#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter the count of number you want to enter: ");
	scanf("%d", &n);
	
	int num[n],positive=0,negative=0,odd=0,even=0;
	
	for(i=1;i<=n;i++){
		printf("\nEnter number[%d]: ",i);
		scanf("%d", &num[i]);
		
		if(num[i]>=0){
			positive++;
			if(num[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
		else{
			negative++;
			if(num[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
	}
	printf("\nTotal count of positive integer is: %d", positive);
	printf("\nTotal count of negative integer is: %d", negative);
	printf("\nTotal count of even integer is: %d", even);
	printf("\nTotal count of odd integer is: %d", odd);
	
	return 0;
}

