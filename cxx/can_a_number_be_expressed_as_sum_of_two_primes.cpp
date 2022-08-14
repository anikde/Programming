#include <iostream>

bool check_prime(int n){
	if (n==1 || n==0 || n==2 || n==3) return true;
	for (int i = 2; i <= n/2; i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}



int main(){
	int n = 79;
	int i;
	for (i = 1; i<=n/2; i++){
		if (check_prime(i) == true & check_prime(n-i) == true){
			std::cout << n << " can be expressed as sum of " << i << " + " << n-i <<std::endl;
		}
	}
	if (i == (n/2)+1) std::cout << "Can't be expressed as a sum of two prime numbers."<< std::endl;
	return 0;
}
