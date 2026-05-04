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
#include <algorithm>

int main()
{
    std::list<int>   lst;
    std::vector<int> vctr;

    // insert elements 1 to 6 in the first collection
    for (int i=1; i<=6; i++) {
        lst.push_back(i);
    }

    // create space for the elements for being copied
    vctr.resize(lst.size());

    // copy elements into the second collection
    std::copy(lst.begin(), lst.end(),    // source range
              vctr.begin());                // destination range

    /* define a third collection sufficiently large
     * - the start size is passed as a parameter
     */
    std::deque<int> coll3(lst.size());

    // copy elements into the third collection
    std::copy(lst.begin(), lst.end(),    // source range
              coll3.begin());                // destination range
}
