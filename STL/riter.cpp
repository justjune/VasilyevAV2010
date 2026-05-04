#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	vector<int> coll;
	
	// insert elements form 1 to 9
	for (int i = 1; i <= 9; ++i) {
		coll.push_back(i);
	}

	// reverse output
	copy(coll.rbegin(), coll.rend(),	// source
		ostream_iterator<int>(cout, " "));// destnation
	cout << endl;
}