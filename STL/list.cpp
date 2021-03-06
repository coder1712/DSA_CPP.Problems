/*Lists are sequence containers that allow non-contiguous memory allocation. 
List in C++ STL implements a doubly linked list and not arrays. 
As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. 
Normally, when we say a List, we talk about doubly linked lists. 
For implementing a singly linked list, we can use forward_list class in C++ STL.

Some important and commonly used functions of List are:
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front(g) – Adds a new element ‘g’ at the beginning of the list.
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
begin() and end() – begin() function returns an iterator pointing to the first element of the list.
empty() – Returns whether the list is empty(1) or not(0).
insert() – Inserts new elements in the list before the element at a specified position.
reverse() – Reverses the list.
size() – Returns the number of elements in the list.
sort() – Sorts the list in increasing order.*/

#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 

//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main() 
{ 

    list <int> gqlist1, gqlist2; 


    for (int i = 0; i < 10; ++i) 
    { 
        gqlist1.push_back(i * 2); 
        gqlist2.push_front(i * 3); 
    } 
    cout << "\nList 1 (gqlist1) is : "; 
    showlist(gqlist1); 

    cout << "\nList 2 (gqlist2) is : "; 
    showlist(gqlist2); 

    cout << "\ngqlist1.front() : " << gqlist1.front(); 
    cout << "\ngqlist1.back() : " << gqlist1.back(); 

    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front(); 
    showlist(gqlist1); 

    cout << "\ngqlist2.pop_back() : "; 
    gqlist2.pop_back(); 
    showlist(gqlist2); 

    cout << "\ngqlist1.reverse() : "; 
    gqlist1.reverse(); 
    showlist(gqlist1); 

    cout << "\ngqlist2.sort(): "; 
    gqlist2.sort(); 
    showlist(gqlist2); 

    return 0; 
}