#include <iostream>

using namespace std;

int main(){
	int x;
	int arr[10];
	int *pLocation6 = &arr[6];
	int *pLocation0 = &arr[0];

	cout << "pLocation6 = " << pLocation6 <<endl;
	cout << "pLocation0 = " << pLocation0 <<endl;
	printf("Enter number ");
	cin >> x;
	cout << x;

	return 0;
}
