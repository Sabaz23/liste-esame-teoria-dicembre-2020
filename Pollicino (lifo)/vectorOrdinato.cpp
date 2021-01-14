#include <iostream>
#include <vector>

using namespace std;

bool ordinato(vector <int> nums);

int main()
{
	vector <int> numeri;
	int n = 0;
	do{
	 	cin >> n;
	 	if(n>=0) numeri.push_back(n);
	 }while(n>=0);
	for(unsigned int i = 0; i<numeri.size();i++)
	{
		cout << numeri[i] << " ";
	}

	 
	cout << boolalpha << ordinato(numeri) << endl;
}

bool ordinato(vector <int> nums)
{
	for(unsigned int i = 0; i<nums.size();i++)
	{
		if(i!=nums.size()-1)
			if(nums[i] > nums[i+1])
				return false;
	}
	return true;
}
