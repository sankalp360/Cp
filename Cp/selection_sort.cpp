#include <bits/stdc++.h>
using namespace std;

void selection_sort(int* arr, int n)
{
	int min_curr_index = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[min_curr_index] > arr[j])
				min_curr_index = j;
		}

		swap(arr[i], arr[min_curr_index]);
	}

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

	selection_sort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}