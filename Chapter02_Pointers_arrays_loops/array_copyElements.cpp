#include <iostream>
using namespace std;

void copy_array()
{
	int array1[10] = {0,1,2,3,4,5,6,7,8,9}; //array1 of 10 elements

	int array2[10]; //empty array to copy array1
	
	for (auto i=0; i != 10; ++i) //copy elements from array1 to array2
		array2[i] = array1[i];

	cout << "Contents of array2: \n";

	for (auto i=0; i != 10; ++i)
		cout << array2[i] << ' ';

	cout << endl;
}

int main()
{
	copy_array();

	return 0;
}

