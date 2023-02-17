#include <iostream>
#include <vector>

int main() {
	std::vector<int> scores;
	scores.reserve(3);

	scores.push_back(10);
	scores.push_back(20);
	scores.push_back(30);

	std::vector<int>::iterator it = scores.begin();
	scores.insert(it, 90);
	for (std::vector<int>::iterator iter = scores.begin(); iter != scores. end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

}