#include <iostream>
using namespace std;
int main() {
 const int size = 5;
 int array[size] = {90, 93, 89, 85, 88};
 
 int sum = 0;
 
 for(int i = 0; i<size; i++){
 	
 	cout << i << " = " << array[i] << endl;
 }
 
 for(int i = 0; i<size ; i++){
 	sum = sum + array[i];
 }
 
 cout << "\n\nSUM = " << sum << endl << "Middle = " << sum/size;

 return 0;
} 
