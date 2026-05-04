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
#include <map>
#include <string>

int main()
{
	// datatype of the collection
	typedef std::map<std::string, float> StringFloatMap;

	StringFloatMap coll;    // map container for string/float value pairs

						   // insert some unordered elements
						   // - two elements have the key 5
	coll["VAT"] = 0.15;
	coll["Pi"] = 3.1415;
	coll["an arbitrary number"] = 4983.223;
	
	/* output the values of all elements
	* - an iterator iterates over all elements
	* - using second, the value of the element is accessed
	*/
	StringFloatMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << "key: \"" << pos->first << "\" "
			<< "value: " << pos->second << std::endl;
	}
}
