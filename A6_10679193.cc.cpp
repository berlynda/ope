#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int binarySearch(int array[],int size,int searchValue)
{
	int low=0;
	int high = size - 1;
	int mid;
	
	while(low<= high)
	{
		mid = (low + high)/2;
		
		if(searchValue == array[mid])
		{
			return mid;
		}
		else if(searchValue > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main(int argc, char** argv)
 {
 	int a[] = {5,7,9,12,14,22,24,35,40};
 	int userValue;
 	cout<< "Enter an integer to be searched :" << endl;
 	cin>> userValue;
 	int result = binarySearch(a,9,userValue);
 	if(result >= 0)
 	{
 		cout <<"The number " << a[result] << " was found at the element with index "<< result << endl;
	 }
	 else 
	 {
	 	cout << "The number " << userValue << " was not found " << endl;
	 }
	return 0;
}
