Components of STL
The components of STL are the features provided by Standard Template Library (STL) in C++ that can be classified into 4 types:

Containers
Algorithms
Iterators
Functions

STL Component	Insert	Delete	Search	Access (by index/key)
vector	O(n)	O(n)	O(n)	O(1)
list	O(1)	O(1)	O(n)	O(n)
deque	O(1)	O(1)	O(n)	O(1)
set	O(log n)	O(log n)	O(log n)	N/A
unordered_set	O(1)*	O(1)*	O(1)*	N/A
map	O(log n)	O(log n)	O(log n)	O(log n)
unordered_map	O(1)*	O(1)*	O(1)*	O(1)*
stack	O(1)	O(1)	-	O(1) (top only)
queue	O(1)	O(1)	-	O(1) (front/back only)
priority_queue	O(log n)	O(log n)	-	O(1) (top only)
