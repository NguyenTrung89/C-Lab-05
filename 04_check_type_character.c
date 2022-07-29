//Unit 4. Check type of a character entered from the keyboard
#include<stdio.h>
#include<stdlib.h>

void checkCharacter(){
	char userInput;
	int enter = 10; //ASCII encoding of 'Enter'
	int space = 32; //ASCII encoding of 'Space'
	while(1){
		fflush(stdin);
		printf("Enter a Character: ");
		scanf("%c", &userInput);
		//Use the ASCII encoding to find out the character type
		//Exit when entering a space
		if(userInput == enter){
			continue;
		}
		else if(userInput == space){
			exit(0);
		}
		else if(userInput >= 'a' && userInput <= 'z' || userInput >= 'A' && userInput <= 'Z'){
			printf("%c is a alphabet\n", userInput);
		}
		else if(userInput >= '0' && userInput <= '9'){
			printf("%c is a number\n", userInput);
		}
		else {
			printf("%c is a special character\n", userInput);
		}
	}
}

int main(){
	checkCharacter();
	return 0;
}
