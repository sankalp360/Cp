#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];

	int largest = INT_MIN;
	int smallest = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		largest = max(arr[i], largest);
		smallest = min(arr[i], smallest);
	}

	cout << largest << " " << smallest;

}