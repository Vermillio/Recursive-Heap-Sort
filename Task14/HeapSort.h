#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>
using namespace std;

class HeapSort
{
	public:
		vector<double> heapsort(vector<double> arr);

	private:

		vector<double> heap;

		void SiftDown(int i, int size);

};


#endif