//unit 1. show even numbers from 0 - 100 by for loop
#include<stdio.h>

void showEvenNumber(){
	int i;
	printf("Even numbers 1-100:\n");
	for(i = 2; i <= 100; i += 2){
		printf("%d ", i);
	}
}

int main(){
	showEvenNumber();
	return 0;
}
