#include"SortingAlgorithms.h"
#include<vector>
#include<iostream>
using namespace std;


//Swap function to swap the values within the vector
void swap(vector<double>& v, double x, double y)
{
	double temp = v.at(x);
	v.at(x) = v.at(y);
	v.at(y) = temp;
}

//********************Algorithm 1 "Bubble Sort"********************
void bubbleSort(vector <double>& v, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (v.at(j) > v.at(j + 1))
			{
				swap(v, j, j + 1);
			}
		}
	}

	std::cout << "(Bubble Sort) Printing first 100 elements within the InitV size: " << size << endl;

	for (int i = 1; i <= 100; i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << endl << endl;
}

//********************Algorithm 2 "Insertion Sort"********************
void insertionSort(vector<double>& v, int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i;
		while (j > 0 && v.at(j - 1) > v.at(j))
		{
			swap(v, j, j - 1);
			j = j - 1;
		}
	}

	std::cout << "(Insertion Sort) Printing first 100 elements within the InitV size: " << size << endl;
	for (int i = 1; i <= 100; i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << endl << endl;
}

//********************Algorithm 3 "Selection Sort"********************
void selectionSort(vector<double>& v, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (v.at(j) < v.at(min))
			{
				min = j;
			}
			swap(v, min, i);
		}
	}

	std::cout << "(Selection Sort) Printing first 100 elements within the InitV size: " << size << endl;
	for (int i = 1; i <= 100; i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << endl << endl;
}

//********************Algorithm 4 "heap sort"********************
void maxHeapify(vector<double>& v, int i, int size)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < size && v.at(l) > v.at(largest))
	{
		largest = l;
	}

	if (r < size && v.at(r) > v.at(largest))
	{
		largest = r;
	}
	if (largest != i)
	{
		swap(v, i, largest);
		maxHeapify(v, largest, size);
	}
}

void buildMaxHeap(vector<double>& v, int size)
{
	for (int i = (size / 2) - 1; i >= 0; i--)
	{
		maxHeapify(v, size, i);
	}
}

void heapSort(vector<double>& v, int size)
{
	buildMaxHeap(v, size);
	for (int i = size - 1; i >= 0; i--)
	{
		swap(v, 0, i);
		maxHeapify(v, 0, i);
	}

	std::cout << "(Heap Sort) Printing first 100 elements within the InitV size: " << size << endl;
	for (int i = 1; i <= 100; i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << endl << endl;
}

//********************Algorithm 5 "Quick Sort"********************
int partition(vector<double>& v, int low, int high)
{
	int pivot = high;
	int j = low;

	for (int i = low; i < high; i++)
	{
		if (v.at(i) < v.at(pivot))
		{
			swap(v, i, j);
			j++;
		}
	}
	swap(v, j, pivot);
	return j;
}

void quickSort(vector<double>& v, int low, int high)
{
	if (low < high)
	{
		int partitionI = partition(v, low, high);
		quickSort(v, low, partitionI - 1);
		quickSort(v, partitionI + 1, high);
	}
}

void printQuickSort(vector<double>& v)
{
	std::cout << "(Quick Sort) Printing first 100 elements within the InitV size: " << v.size() << endl;
	for (int i = 1; i <= 100; i++)
	{
		std::cout << v.at(i) << " ";
	}
	std::cout << endl << endl;
}