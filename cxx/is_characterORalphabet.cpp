#include<iostream>
#include<ctype.h>

int main(){
	char s = '>';
	if (isalpha(s)){
		std::cout << s << " is an alphabet." << std::endl;
	}
	else if (isdigit(s))
	{
		std::cout << s <<" is a digit." << std::endl;
	}
	else{
		std::cout << s <<" is a special character." << std::endl;
	}
	std::cout << "helllo" << std::endl;
	return 0;
}
