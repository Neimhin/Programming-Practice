#include <iostream>
#include <typeinfo>
#define GET_VARIABLE_NAME(Variable)(#Variable)

void print(int i){
	std::cout << "type: " <<typeid(i).name() << 
		"\tvalue: " << i << 
		"\tsizeof: " << sizeof(i) << std::endl;

}

void print_with_name(std::string name, int i){
	std::cout <<
		"name: " << name <<	
		"\ttype: " << typeid(i).name() << 
		"\tvalue: " << i << 
		"\tsizeof: " << sizeof(i) << std::endl;
}

void print_with_name(std::string name, unsigned long long int i){
	std::cout <<
		"name: " << name <<	
		"\ttype: " << typeid(i).name() << 
		"\tvalue: " << i << 
		"\tsizeof: " << sizeof(i) << std::endl;
}
int main(int argc, char** argv){
	auto i = 0;
	print_with_name(GET_VARIABLE_NAME(i), i);

	unsigned long long int j = 0x80000000;
	print_with_name(GET_VARIABLE_NAME(j), j);
	
	//binary literal
	int k = 0b11000;
	print_with_name(GET_VARIABLE_NAME(k), k);

	//octal literal
	k = 030;
	print_with_name(GET_VARIABLE_NAME(k), k);

	//decimal literal
	k = 24;
	print_with_name(GET_VARIABLE_NAME(k), k);


	//hex literal
	k = 0x18;
	print_with_name(GET_VARIABLE_NAME(k), k);
}
