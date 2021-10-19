# Bubble Sort CPP
This is a header-only library applying the bubble sort algorithm

## Simple example in C++ ##
```cpp
#include "bubble_sort.h"
#include <vector>
#include <iostream>

template <typename T>
void printVector(std::vector<T>& vector)
{
	for (int i = 0; i < std::size(vector); i++)
		std::cout << vector[i] << " ";
	std::cout << "\n" << std::endl;
}

void main()
{
  sorting sort;
  std::vector<int> sequence = {5, 11, 22, 9, 21};
  
  sort.bubble(sequence);
  
  printVector(sequence);
}
```
