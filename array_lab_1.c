#include<stdio.h>
int main(){
	int i,n;
	float sum=0.0,average;
	
	printf("Enter the number of days you want to calculate: ");
	scanf("%d", &n);
	
	int day[n];
	
	for(i=1;i<=n;i++){
		printf("\nEnter the temperature of day[%d]: ", i);
		scanf("%d", &day[i]);
		
		sum += day[i];
	}
	
	average = sum/n;
	printf("\nThe average temperature is: %.2f", average);
	
	return 0;
}
