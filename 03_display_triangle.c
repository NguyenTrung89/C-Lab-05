//Unit3. Displays a triangle with the height entered from the keyboard
#include<stdio.h>

void displayTriangle(){
	int i, j, heigt;
	do{
		printf("Enter height of triangle:\n>>");
		scanf("%d", &heigt);
	}while(heigt < 2);
	
	for(i = 1; i <= heigt; i++){
		for(j = 1; j <= i; j++){
			printf("%c", '*');
		}
		printf("\n");
	}
}

int main(){
	displayTriangle();
	return 0;
}
