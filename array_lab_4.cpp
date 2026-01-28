#include<stdio.h>
int main(){
	int n1,n2;
	int i,j,k;
	
	printf("Enter the number of employees in first list: ");
	scanf("%d", &n1);
	
	printf("Enter the number of employees in second list: ");
	scanf("%d", &n2);
	
	int first_list[n1],second_list[n2],final_list[n1+n2];
	
	printf("\nEnter the Employee ID of first list in Ascending order\n");
	for(i=1;i<=n1;i++){
		printf("Employee %d: ", i);
		scanf("%d", &first_list[i]);
	}
	
	printf("\nEnter the Employee ID of second list in Ascending order\n");
	for(i=1;i<=n2;i++){
		printf("Employee %d: ", i);
		scanf("%d", &second_list[i]);
	}
	
	for(i=1;i<=n1+n2;i++){
		for(j=1;j<=n2;j++){
			if(first_list[i]<second_list[j]){
				final_list[i]=first_list[i];
			}
			else{
				for(k=2;k<=n2;k++){
					if(second_list[j]<second_list[k]){
						final_list[i]=second_list[j];
					}
					else{
						final_list[i]=second_list[k];
					}
				}
			}
		}
		printf("%d ", final_list[i]);
	}
	
	return 0;
}
