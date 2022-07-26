/*
									********************Project 2 is being done by both********************
									*Brandon Hang
									*Joe Romero
*/

#include <iostream>
#include <vector>
#include<chrono>
#include"SortingAlgorithms.h"
using namespace std;

int main()
{
	vector <double> InitV; //Vector that contains 10,000 integers
	vector <double> InitV2k; //Vector that contains 2,000 integers
	vector <double> InitV4k; //Vector that contains 4,000 integers
	vector <double> InitV6k; //Vector that contains 6,000 integers
	vector <double> InitV8k; //Vector that contains 8,000 integers

	//Puts values into the vectors according to their sizes.
	for (int i = 0; i < 10000; i++)
	{
		double num = rand() % 10000;

		InitV.push_back(num);

		if (i < 2000)
		{
			InitV2k.push_back(num);
		}
		if (i < 4000)
		{
			InitV4k.push_back(num);
		}
		if (i < 6000)
		{
			InitV6k.push_back(num);
		}
		if (i < 8000)
		{
			InitV8k.push_back(num);
		}
	}

	//user menu chooses what algorithm they want to use and what size
	int algoinput, sizeinput;

	std::cout << "Enter algorithm to be used: " << endl;
	std::cout << "1.) Bubble Sort" << endl;
	std::cout << "2.) Insertion Sort" << endl;
	std::cout << "3.) Selection Sort" << endl;
	std::cout << "4.) Heap Sort" << endl;
	std::cout << "5.) Quick sort" << endl;

	cin >> algoinput;

	std::cout << "Enter size of vector: " << endl;
	std::cout << "1.) size = 2k" << endl;
	std::cout << "2.) size = 4k" << endl;
	std::cout << "3.) size = 6k" << endl;
	std::cout << "4.) size = 8k" << endl;
	std::cout << "5.) size = 10k" << endl;

	cin >> sizeinput;

	//Copies the InitV vectors into the bubble sort vector according to sizes 
	vector<double> bSort2k, bSort4k, bSort6k, bSort8k, bSort10k;

	bSort2k = InitV2k;
	bSort4k = InitV4k;
	bSort6k = InitV6k;
	bSort8k = InitV8k;
	bSort10k = InitV;

	//Copies the InitV vectors into the insertion sort vector according to sizes 
	vector<double> iSort2k, iSort4k, iSort6k, iSort8k, iSort10k;

	iSort2k = InitV2k;
	iSort4k = InitV4k;
	iSort6k = InitV6k;
	iSort8k = InitV8k;
	iSort10k = InitV;

	//Copies the InitV vectors into the selection sort vector according to sizes 
	vector<double> sSort2k, sSort4k, sSort6k, sSort8k, sSort10k;

	sSort2k = InitV2k;
	sSort4k = InitV4k;
	sSort6k = InitV6k;
	sSort8k = InitV8k;
	sSort10k = InitV;

	//Copies the InitV vectors into the heap sort vector according to sizes 
	vector<double> hSort2k, hSort4k, hSort6k, hSort8k, hSort10k;

	hSort2k = InitV2k;
	hSort4k = InitV4k;
	hSort6k = InitV6k;
	hSort8k = InitV8k;
	hSort10k = InitV;

	//Copies the InitV vectors into the quick sort vector according to sizes 
	vector<double> qSort2k, qSort4k, qSort6k, qSort8k, qSort10k;

	qSort2k = InitV2k;
	qSort4k = InitV4k;
	qSort6k = InitV6k;
	qSort8k = InitV8k;
	qSort10k = InitV;
	
	/*Note:
		auto start = std::chrono::steady_clock::now(); -----THIS IS STARTING THE TIMER-----

		Sorting Algorithm(vector, size) -----THIS IS PERFORMING THE ALGORITHM-----

		auto end = std::chrono::steady_clock::now(); -----THIS IS ENDING THE TIMER-----
		
		auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(); -----Sets elapsed to the time difference in microseconds-----

		print and divide elapsed by 1e^6 (converting microseconds to seconds) -----printing the measured time in seconds-----
	*/

	//Algorithm 1 is the bubble sort
	if (algoinput == 1) 
	{
		if (sizeinput == 1)
		{
			auto start = std::chrono::steady_clock::now();
			bubbleSort(hSort2k, hSort2k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 2)
		{
			auto start = std::chrono::steady_clock::now();
			bubbleSort(hSort4k, hSort4k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 3) 
		{ 
			auto start = std::chrono::steady_clock::now();
			bubbleSort(hSort6k, hSort6k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 4)
		{ 
			auto start = std::chrono::steady_clock::now();
			bubbleSort(hSort8k, hSort8k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if(sizeinput == 5)
		{
			auto start = std::chrono::steady_clock::now();
			bubbleSort(hSort10k, hSort10k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else
		{
			std::cout << "Invalid input please restart" << endl;
		}
	}
	//Algorithm 2 is the insertion sort 
	else if (algoinput == 2)
	{
		if (sizeinput == 1)
		{
			auto start = std::chrono::steady_clock::now();
			insertionSort(iSort2k, iSort2k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 2)
		{
			auto start = std::chrono::steady_clock::now();
			insertionSort(iSort4k, iSort4k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 3)
		{
			auto start = std::chrono::steady_clock::now();
			insertionSort(iSort6k, iSort6k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 4)
		{
			auto start = std::chrono::steady_clock::now();
			insertionSort(iSort8k, iSort8k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 5)
		{
			auto start = std::chrono::steady_clock::now();
			insertionSort(iSort10k, iSort10k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else
		{
			std::cout << "Invalid input please restart" << endl;
		}
	}
	//Algorithm 3 is the selection sort 
	else if (algoinput == 3)
	{
		if (sizeinput == 1)
		{
			auto start = std::chrono::steady_clock::now();
			selectionSort(sSort2k, sSort2k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 2)
		{
			auto start = std::chrono::steady_clock::now();
			selectionSort(sSort4k, sSort4k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 3)
		{
			auto start = std::chrono::steady_clock::now();
			selectionSort(sSort6k, sSort6k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 4)
		{
			auto start = std::chrono::steady_clock::now();
			selectionSort(sSort8k, sSort8k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 5)
		{
			auto start = std::chrono::steady_clock::now();
			selectionSort(sSort10k, sSort10k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else
		{
			std::cout << "Invalid input please restart" << endl;
		}
	}
	//Algorithm 4 is the heap sort 
	else if (algoinput == 4)
	{
		if (sizeinput == 1)
		{
			auto start = std::chrono::steady_clock::now();
			heapSort(hSort2k, hSort2k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 2)
		{
			auto start = std::chrono::steady_clock::now();
			heapSort(hSort4k, hSort4k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 3)
		{
			auto start = std::chrono::steady_clock::now();
			heapSort(hSort6k, hSort6k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 4)
		{
			auto start = std::chrono::steady_clock::now();
			heapSort(hSort8k, hSort8k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 5)
		{
			auto start = std::chrono::steady_clock::now();
			heapSort(hSort10k, hSort10k.size());
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else
		{
			std::cout << "Invalid input please restart" << endl;
		}
	}
	//Algorithm 5 is the quick sort 
	else if (algoinput == 5)
	{
		if (sizeinput == 1)
		{
			auto start = std::chrono::steady_clock::now();
			quickSort(qSort2k, 0, qSort2k.size() - 1);
			printQuickSort(qSort2k);
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 2)
		{
			auto start = std::chrono::steady_clock::now();
			quickSort(qSort4k, 0, qSort4k.size() - 1);
			printQuickSort(qSort4k);
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 3)
		{
			auto start = std::chrono::steady_clock::now();
			quickSort(qSort6k, 0, qSort6k.size() - 1);
			printQuickSort(qSort6k);
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 4)
		{
			auto start = std::chrono::steady_clock::now();
			quickSort(qSort8k, 0, qSort8k.size() - 1);
			printQuickSort(qSort8k);
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else if (sizeinput == 5)
		{
			auto start = std::chrono::steady_clock::now();
			quickSort(qSort10k, 0, qSort10k.size() - 1);
			printQuickSort(qSort10k);
			auto end = std::chrono::steady_clock::now();

			auto elapsed = std::chrono::duration_cast<std::chrono:: microseconds>(end - start).count();
			std::cout << "Measure time to execute (s): " << elapsed / 1e6 << endl;
		}
		else
		{
			std::cout << "Invalid input please restart" << endl;
			return 0;
		}
	}
	else
	{
		std::cout << "Invalid input please restart" << endl;
		return 0;
	}
	return 0;
}