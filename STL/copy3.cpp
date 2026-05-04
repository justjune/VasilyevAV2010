/* The following code example is taken from the book
 * "Object-Oriented Programming in C++"
 * by Nicolai M. Josuttis, Wiley, 2002
 *
 * (C) Copyright Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include<set>
#include <algorithm>
#include<iterator>

int main()
{
    std::list<int>   lst;
    std::vector<int> vctr;
    std::deque<int>  dqe;
	std::set<int> st;

    // insert elements 1 to 6 in the first collection
    for (int i=1; i<=6; i++) {
        lst.push_back(i);
    }

    // copy elements inserting at the back of the second collection
    std::copy(lst.begin(), lst.end(),    // source range
              std::back_inserter(vctr));    // destination range
	std::cout << "vector: ";
	for each (int i in vctr)
		std::cout << i << ' ';
	std::cout << std::endl;

    // copy elements inserting at the front of the third collection
	// reverse order!
    std::copy(lst.begin(), lst.end(),    // source range
              std::front_inserter(dqe));   // destination range
	std::cout << "deque: ";
	for each (int i in dqe)
		std::cout << i << ' ';
	std::cout << std::endl;
	
	// copy elements inserting at the front of the fourth collection
	// the only way to do it with associative container!
	std::copy(lst.begin(), lst.end(),   // source range
		std::inserter(st, st.begin()));  // destination range
	std::cout << "set: ";
	for each (int i in st)
		std::cout << i << ' ';
	std::cout << std::endl;
}
