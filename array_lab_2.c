#include<stdio.h>
int main(){
	int i,n;
	float max_price,min_price;
	
	printf("Enter the number of company having shares in stock market: ");
	scanf("%d", &n);
	float share_price[n];
	
	for(i=1;i<=n;i++){
		printf("\nEnter the share price of company[%d]: ", i);
		scanf("%f", &share_price[i]);
		
		if(i==1){
			max_price = share_price[i];
		    min_price = max_price;
		}
			
		else if(max_price < share_price[i]){
			max_price = share_price[i];
		}
		
		else if(share_price[i] < min_price){
			min_price = share_price[i];
		}
	}
	
	printf("\nThe maximum price of a share is: %.2f", max_price);
	printf("\nThe minimum price of a share is: %.2f", min_price);
	
	return 0;
}
