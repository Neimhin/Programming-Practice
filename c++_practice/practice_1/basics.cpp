#include <iostream>


int main(int argc, char** argv, char** envp, char** auxp){

	while(*argv){
		printf("%s\n", *argv++);
	
	}

	while(*envp){
		printf("%s\n", *envp++);
	
	}

	while(*auxp){
		printf("%s\n", *auxp++);
	
	}

}
