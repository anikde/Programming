#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

void count_duplicates(int a[]){
	std::vector<int> vec;
	for (int i = 0; i <= sizeof(a); i++){
		int d = a[i];
		int num = 0;
		for (int j = i; j <= sizeof(a); j++){
			// if (std::any_of(vec.begin(), vec.end(), [](int k, int d ){ return k == d;})){
			// 		continue;
			// 	}
			if (a[i]==a[j]) num +=1;
		}
		if (num > 1) std::cout << a[i] << " appears " << num << " times." <<std::endl;
		vec.push_back(a[i]);
	}
}


int main(){

	// std::array<int,7>* arr = {1, 5, 2, 2, 2, 5, 9};
	int arr[] ={1, 5, 2, 2, 2, 5, 9};
	count_duplicates(arr);
	// if (std::any_of(arr.begin(), arr.end(), [](int i){ return i==5;}))
	std::cout << "hello";
	return 0;
}
