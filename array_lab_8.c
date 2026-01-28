#include<stdio.h>
int main(){
	int i;
	long user_id;
	long book_id[10] = {110001,110002,110003,110004,110005,110006,110007,110008,110009,110010};
	
	printf("Enter the id of a book: ");
	scanf("%ld", &user_id);
	
	for(i=0;i<10;i++){
		if(user_id == book_id[i]){
			printf("\nThe book is found.");
			return 0;
		}
	}
	printf("\nThe book is not found.");
	
	return 0;
}
