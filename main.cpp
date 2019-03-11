#include <iostream>
#include "quick_iter.hpp"


//przykład
int main()
{
	std::vector<int> v {1,2,757,3,324,123,66768,23,989,2,67,23,89,-2,23};
	sort::quicksort_iter<int>(v);
	for(const auto& i: v)
	std::cout<<i<<" ";
}