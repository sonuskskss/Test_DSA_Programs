//Bubble sort
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	int array[] = {-3,44,-9,-333,0,0,2222,9,3,3,55};
 	int size = sizeof(array) / sizeof(array[0]);
 	
 	for(int i = 0; i<size-1; i++)
 	{
 		for(int j = 0; j<size-1-i; j++)
 		{
 			if(array[j] > array[j+1])
 			swap(array[j], array[j+1]);
		 }
	 }
	 
	 
	 for(int i = 0; i<size; i++)
	 {
	 	cout << array[i] << " ";
	 }
 }
