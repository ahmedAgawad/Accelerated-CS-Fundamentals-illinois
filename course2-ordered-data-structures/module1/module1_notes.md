# Arrays :

## Array limitations :

- all data must be of same type
- have a fixed capacity --> store data sequentially (size : current number of elements , capacity : max number of elements that can be stored in that array).

## Sizeof operator :

using sizeof(type) will return the size used to store one object or variable of this type --> used to calc the offset to some specific index

## std::vector :

implements an array that dynamically grows in size automatically. However, all other properties of array holds true --> (same data type , fixed capacity and must be expanded when reached)

`std::vector <type> name = {values}`

# Linked Memory :

stores data together with a "link" to the location in memory of the next list node

## List Nodes :

refers to pair of both the data and the link (data, pointer to next node)

```cpp
template <typename T>
class ListNode {
   public :
     T & data;
     ListNode *next;
     ListNode(T & data) : data(data), next(NULL) {}
};
```

## Linked List :

Zero or more ListNode elements linked together form a **Linked List.**

a pointer called **head pointer** stores the link to the beginning of the list.  
a pointer to nullptr (phi) marks the end of the list.

&nbsp;

<img src=":/bd329721126a4eeabcca3446487158d8" alt="shapes at 25-02-01 16.57.37.png" width="451" height="130" class="jop-noMdConv">

## List::get :

return element at index k

Logic : starting from head pointer moving each element and decrease given index untill reaching

Time taken to access given index grows based on the size of the list on contrast arrays access any element in a constant fixed time amount

## List::insert :

add element to the list

Logic : make a new ListNode element in heap and set the new node pointer to current head of the list then set the head to the new node;

## List Capacity :

in list, the **capacity** is bounded only by the memory available on the system in contrast to arrays which has fixed capacity (list more flexible)

## Data Types :

in both arrays and lists , all data within an instance of a container must be the same type

&nbsp;

# Run Time Analysis :

allows us to formalize a method of comparing the speed of an algorithm as the size of input grows.

## Example : Access a given index in array and list :

in array --> index \* sizeof(type) = desiredPlace in memory O(1)  
in list --> element is accessed by traversing each element till the desired element O(n)

## Array Resize Strategy and their analysis :

### Strategy #1 : When the array is full , add 2 to the capacity :

0 --> 0 copies   
1 --> 2 copies   
2 --> 2 \* 2 copies   
3 --> 2 \* 3 copies  
..  
r --> 2 \* r copies  --> r = n/2

∑from 1 to r(2 \* k) = (r(r+1)) / 2 = r<sup>2</sup> + r --> replace r with n as we are interesed more in n --> (n<sup>2</sup> + 2n) / 4 --> O(n^2)

### Strategy #2 : When the array is full, double the capacity :

0 --> 0 copies   
1 --> 2 copies 2 power 1  
2 --> 4 copies 2 power 2  
3 --> 8 copies 2 power 3

r = log(n) --> 2 power r

∑from 1 to r(2power k) = 2 (2 <sup>r</sup> - 1) = 2 (2 <sup>log n</sup> - 1) = 2(n-1) = O(n)

average work per element (amortized running time) = O(n) / n = 1  
**Amortized Runtime** : the way to express the time complexity when an algorithm has the very bad time complexity only once in a while besides the time complexity that happens most of time.

# Array and List Operations :

## Access a Given Index :

Array : O(1) : direct access via offset formula  
List : O(n) : traverse every element to reach the index

## Insert at front :

Array : O(1)\* : amortized constant time when size is doubled when copied   
List : O(1) : fixed constant by adding the new data at the head of the list

## Find Data : find location of data

Array : O(n) : requires searching up to full array one by one  
List : O(n) : requires searching up to full list, one ListNode at a time

## Find Data in sorted linear structure (index) :

Unsorted Array : O(n)  
Sorted Array : O(log(n)) --> binary search   
All lists : O(n)

## Insert After :

Given an element (ListNode or index ), insert a new element immediately afterwards.

Array : O(n) : requires copying up to half of the array to make space for new element  
List : O(1) : fixed time to add new element after finding previous element

## Delete After :

Given an element (ListNode or index), delete the element immediately afterwards :

Array : O(n) : requires copying up to half of the array to remove the blank space  
List : O(1) : fixed constant time to remove a ListNode and repair the list

# Queue :

First in first out data structure   
<img src=":/2daf8dce5e844ae7a0caa3a830816f54" alt="Screenshot from 2025-02-02 18-16-35.png" width="423" height="78">

## Queue ADT :

create/push/pop/empty

NOTE : std lib has already queue structure

## Implementation :

Array-based :  
adding elements to end of array and moving backwards 

List-based :  
having additional pointer to last element tail_ we can use to perform pop operation  
adding elements directly to the head_

| Operation / Based On | Array | Linked List (doubly linked list required for O(1)) |
| --- | --- | --- |
| Create | O(1) | O(1) |
| Push | O(1)\* : amortized runtime --> occasional need to double the capacity of the array | O(1) |
| Pop | O(1)\* : amortized runtime --> occasional need to double the capacity of the array | O(1) |
| Empty | O(1) | O(1) |

#  Stack :

last in first out data structure   
<img src=":/c68492601c9b4d29baf3a5e41aed7b88" alt="Screenshot from 2025-02-02 18-43-08.png" width="361" height="108">

## Stack ADT :

create / push / pop / empty

NOTE : std library has a stack class

## Implementation :

Array-based :

adding to the beginning to array and pop from beginning also

List-based :

making the head always point to last element added to stack

| Operation / Based On | Array | Linked List (doubly linked list required for O(1)) |
| --- | --- | --- |
| Create | O(1) | O(1) |
| Push | O(1)\* : amortized runtime --> occasional need to double the capacity of the array | O(1) |
| Pop | O(1)\* : amortized runtime --> occasional need to double the capacity of the array | O(1) |
| Empty | O(1) | O(1) |

&nbsp;