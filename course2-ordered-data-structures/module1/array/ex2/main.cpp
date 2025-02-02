#include <iostream>

int main()
{
	int values[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 27};
	std::cout << " Size of int type " << sizeof(int) << std::endl;

	/*What This Code Does:
values[2] and values[0] are elements of an array values.
&values[2] and &values[0] give the memory addresses of these elements.
(long) &values[2] and (long) &values[0] explicitly cast the addresses to long.
Subtracting these two long values gives the byte difference between the two elements.
The result is assigned to offset, which stores the number of bytes between values[2] and values[0].


Why Use (long)?
Address Arithmetic in Bytes: Pointers are typically stored as memory addresses. Direct subtraction of pointers results in the number of elements between them, not bytes. Casting them to long ensures the subtraction gives the byte difference.
Preventing Pointer Arithmetic Behavior: Normally, subtracting two pointers of the same type gives a result in terms of the number of elements, not bytes. Casting to long ensures we get a byte offset.
Compatibility with int: The result needs to be assigned to an int. Since pointer arithmetic gives ptrdiff_t (which may not always be directly assignable to int), the cast helps ensure a direct conversion.
 */

	int offset = (long long)&(values[2]) - (long long)&(values[0]);
	std::cout << offset << std::endl;
	return 0;
}