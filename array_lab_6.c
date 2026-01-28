#include<stdio.h>
int main(){
	int n;
	int i,j;
	
	printf("Enter the number of students: ");
	scanf("%d", &n);
	
	int roll[n];
	
	printf("\nEnter roll number of students: ");
	for(i=0;i<n;i++){
		scanf("%d", &roll[i]);
	}
	
	int temp;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(roll[j]>roll[j+1]){
				temp = roll[j];
				roll[j] = roll[j+1];
				roll[j+1] = temp;
			}
		}
	}
	
	printf("\nRoll number of students in ascending order: ");
	for(i=0;i<n;i++){
		printf("%d ", roll[i]);
	}
	
	return 0;
}
