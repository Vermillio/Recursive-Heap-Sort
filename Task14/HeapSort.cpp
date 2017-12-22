#include "HeapSort.h"

#include <vector>
#include <queue>
using namespace std;



vector<double> HeapSort::heapsort(vector<double> arr)
{
	heap.resize(arr.size());
	copy(arr.begin(), arr.end(), heap.begin());
	int cur_size = heap.size();

	while (cur_size > 1)
	{
		cur_size--;

		for (int i = cur_size; i >= 0; i--)
			SiftDown(i, cur_size);

		swap(heap[0], heap[cur_size]);
	}

	return heap;
}

void HeapSort::SiftDown(int i, int size)
{
	int l = 2*i + 1, r = 2 * i + 2;
	if ((l > size || heap[l] <= heap[i]) && (r > size || heap[r] <= heap[i]))
		return;
	if ((l > size || (heap[l] < heap[r])) && r <= size && (heap[r] > heap[i]))
	{
		swap(heap[i], heap[r]);
		SiftDown(r, size);
		return;
	}
	else if ((r > size || (heap[r] < heap[l])) && l <= size && (heap[l] > heap[i]))
	{
		swap(heap[i], heap[l]);
		SiftDown(l, size);
	}
}
