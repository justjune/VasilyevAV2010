#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
	list<int> coll;
	list<int>::iterator pos;

	// inserting elements from 20 to 40
	for (int i = 20; i <= 40; ++i) {
		coll.push_back(i);
	}

	// element value 3 search
	/* - it is absent, so pos == coo.end() */
	pos = find(coll.begin(), coll.end(), 3);
	// reversing from 3 to end
	/* - interval is empty */
	reverse(pos, coll.end());

	// find 25 and 35
	list<int>::iterator pos25, pos35;
	pos25 = find(coll.begin(), coll.end(), 25);
	pos35 = find(coll.begin(), coll.end(), 35);

	/* Maximum search from 25 to 35, but 35 NOT INCLUDED!!!*/
	cout << "max: " << *max_element(pos25, pos35) << endl;

	// process elements including the last position
	cout << "max: " << *max_element(pos25, ++pos35) << endl;
}