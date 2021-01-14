#include <iostream>
#include <vector>

using namespace std;

bool is_Even(vector <int> nums);

int main()
{
	vector <int> numeri;
	numeri.push_back(5);
	numeri.push_back(3);
	numeri.push_back(7);
	numeri.push_back(2);
	cout << boolalpha << is_Even(numeri) << endl;
}

bool is_Even(vector <int> nums)
{
	for(unsigned int i = 0; i<nums.size();i++)
	{
		if(nums[i] % 2 == 0)
			return true;
	}
	return false;
}
