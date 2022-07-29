//Unit 5. Write program according to flowchart
#include<stdio.h>

int main(){
	int num, result = 0;
	int check = 0;
	do{
		printf("Input num:\n>>");
		scanf("%d", &num);
		if(num >= 0 && num < 100){
			result++;
			check = 1;
		}
		else check = 0;
	}while(check == 1);
	
	printf("Result = %d", result);
	
	return 0;
}
