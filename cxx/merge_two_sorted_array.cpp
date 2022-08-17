#include<iostream>

void merge_array(int a[], int b[], int m, int n, int c[]){
	int i=0, k=0, l=0;
	while(i < m && k < n){
		if (a[i] < b[k]){
			c[l++] = a[i++];
		}
		else{
			c[l++] = b[k++];
		}
	}
	while(i < m){
		c[l++] = a[i++];
	}
	while(k < n){
		c[l++] = b[k++];
	}
}


int main(){
	int a[] = {1, 5, 9, 17};
	int n1 = sizeof(a) / sizeof(a[0]);
	int b[] = {2, 3, 4, 8};
	int n2 = sizeof(b) / sizeof(b[0]);
	int c[n1+n2];

	merge_array(a, b, n1, n2, c );

	for (int i = 0; i < n1+n2; i++){
		std::cout << c[i] << " ";
	}
	printf("\n");
	return 0;
}
