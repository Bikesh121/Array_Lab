#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter the number of company listed: ");
	scanf("%d", &n);
	
	float stock_price[n],max_value,min_value;
	
	for(i=0;i<n;i++){
		printf("\nEnter the price of stock of company[%d]: ", i+1);
		scanf("%f", &stock_price[i]);
		
		if(i==0){
			max_value = stock_price[i];
			min_value = max_value;
		}
		if(stock_price[i]>max_value){
			max_value = stock_price[i];
		}
		else if(stock_price[i]<min_value){
			min_value = stock_price[i];
		}
	}
	
	printf("\nThe maximum value of stock: %.2f", max_value);
	printf("\nThe minimum value of stock: %.2f", min_value);
	
	return 0;
}
