#pragma once
#include <iostream>
#include <vector>

class sorting
{
private:

	template <typename T>
	void swap(T& a, T& b)
	{
		T tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

public:

	template <typename T> 
	bool bubble(std::vector<T>& vector)
	{
		bool sorted = false;
		int indexing_length = std::size(vector) - 1;

		while (!sorted)
		{
			sorted = true;
			for (int i = 0; i < indexing_length; i++)
			{
				if (vector[i] > vector[i + 1])
				{
					sorted = false;
					std::swap(vector[i], vector[i + 1]);
					//swap(vector[i], vector[i + 1]); // Useless since we already have std::swap() in c++
				}
			}
		}

		return sorted;
	}
};