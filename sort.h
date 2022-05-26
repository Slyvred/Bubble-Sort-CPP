#pragma once
#include <iostream>
#include <vector>

class sorting
{
public:

	template <typename T> 
	bool bubble(std::vector<T>& vector)
	{
		int indexing_length = vector.size();

		for (int i = 0; i < indexing_length; i++)
		{
			for (int j = 0; j < indexing_length - i - 1; j++)
			{
				if (vector[j] > vector[j + 1])
				{
					std::swap(vector[j], vector[j + 1]);
				}
			}
			
		}

		return true;
	}

	template <typename T>
	bool insertion(std::vector<T> &vector)
	{
		for (int i = 1; i < vector.size(); i++)
		{
			int j = i;

			while (j >= 0 && vector[j] > vector[j + 1])
			{
				std::swap(vector[j], vector[j + 1]);
				j--;
			}
		}
		return true;
	}
};
