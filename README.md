# Sort CPP
This is a header-only library applying the bubble-sort and insertion-sort algorithms.
It's compatible with Windows and Linux (untested on MacOs).
PS: This code might be garbage because i'm retarded.

## Simple example in C++ ##
```cpp
#include "sort.h"
#include <vector>

void main()
{
  sorting sort;
  std::vector<int> sequence = {5, 11, 22, 9, 21};
  
  // Bubble sort
  bool isSorted = sort.bubble(sequence);
  
  // Insertion sort
  bool isSorted = sort.insertion(sequence);
}
```
