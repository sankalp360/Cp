#include <bits/stdc++.h>
using namespace std;

int binary_search(int* arr, int size, int key)
{
	int start = 0;
	int end = size - 1;

	int mid;


	while (start <= end)
	{
		mid = start + ((end - start) / 2);

		if (arr[mid] == key)
			return mid;

		if (arr[mid] > key)
			end = mid - 1;

		if (arr[mid] < key)
			start = mid + 1;
	}

	return -1;

}


int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int key;
	cin >> key;

	cout << binary_search(arr, n, key);
}