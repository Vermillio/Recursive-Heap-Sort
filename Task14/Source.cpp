#include <iostream>
#include"HeapSort.h"
using namespace std;


void Print(vector<double> arr)
{
	cout << "{ ";
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << "}" << endl;
}

int main()
{
	double data;
	vector<double> arr;
	HeapSort action;

	while (cin >> data)
		arr.push_back(data);
	vector<double> res = action.heapsort(arr);
	Print(res);
	system("pause");
	return 0;
}