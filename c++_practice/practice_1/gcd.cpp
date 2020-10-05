#include <iostream>


int main(int argc, char* argv[], char** envp){

	if(argc != 3){
		std::cout << std::endl << "Please provide exactly 2 positive integers as input." << std::endl << "closing" << std::endl;
		return -1;
	}	
	
	int m = std::stoi(argv[1]);
	int n = std::stoi(argv[2]);
	int r;

	std::cout << "Computing the greatest common divisor of " << m << " and " << n << "..." << std::endl;

	
	while(true){
		r = m%n;
		if(r == 0){
			std::cout << n << std::endl;
			return n;
		}

		m = n%r;
		if(m == 0){
			std::cout << r << std::endl;
			return r;
		}
		
		n = r%m;
		if(n == 0){
			std::cout << m << std::endl;
			return m;
		}
	}
}

