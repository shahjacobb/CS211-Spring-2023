# Review
## Pointers
```cpp
void func(int * k);
void func(int k[]);

```
are exactly the same thing. also, the size of the array doesn't carry over in both cases. if your array is an arbitrary `n` elements long, calling `sizeof(arr)` is *not* going to return the size of the array. it will return the size of the pointer depending on what size of the pointer on your machine is

### Pointer Arithmethic
working with a 1d array is easy
```cpp
int a[] = {10, 15, 20, 25, 30};
```
* `a` returns a POINTER TO THE FIRST ELEMENT, you're essentially in 'memory space' when working with the name of the array as a handle. when adding to it, you're traversing over elements but STILL IN MEMORY SPACE
* okay this is important. this is a 1d array, so `*arr + 1` dereferences it IMMEDIATLEY and adds 1 to the value at the memory location `arr[0] / *arr`
* so if you did something like `*(arr + i) + 3`, the value AT THAT `a[i]` location has 3 added to it
but working with a 2d array is much more different. so `*(arr + 3) + 3` is going to be `28`
> '*It's only gonna make sense that if I realize when I have a pointer and dereference it, I get a name to the place that I'm pointing... And I can't add to a name.'*  
```cpp
*(A + i) // a NAME to the array pointing at the (a + i) location. so adding to THIS expression lets you traverse over the array
*(A+ i) + 1 // traverses to the second element
*(*(A + i) + 1) // PRINTS out the second element being pointed to
```

## Operator Overloading
wtf is this shit?
You can overload an operator for a class or struct (aka, a user defined type) when you want to add functionality or semantics for things the compiler doesn't inherently know about. But it has to be *only for a user defined type*.
The syntax looks like this. Assuming you have a class created, you can overload an operator to do what you want. The signature is as follows:
```
returnType operator operatorInQuestion(params)
{
    do something here
}
```
### How This Applies To Us in 211

For the missionaries and cannibals problem, remember that we have a struct like
```cpp
struct state{
    int ml; // missionaries on the left
    int cl; // cannibals on the left
    int mr; // missionaries on the right
    int cr; // cannibals on the right
}
```
If we wanted to compare two structs, we couldn't just do something like
```cpp
if (state1 == state2)
// do something
```
C++ has no idea what that's supposed to mean - it never knew about the existence of this user defined type, so asking it test for quality is completely ambiguous.
```cpp
bool operator == (struct a, struct b)
{
    if (a.ml == b.ml && a.cl == b.cll && a.mr == b.mr && a.cr == b.cr )
    return true;
    else[
        return false;
    ]
}
```
This lets us 'compare' and check 'equalness' by letting us define a function that kinda sorta leverages the existing functionality of C++' `==` operator.
## Vector
Declaring a vector
1) obv include the `<vector>` header 
2) the signature looks like below
```cpp
include <vector>
std::vector<T> vectorName (size)
```
Okay, whatever, easy. Some common methods that are useful:
1. `vector.push_back()`
    * `vector.push_back()` pushes an element (of the appropiate type in the last element of vec)
2. `vector_pop_back()` 
    * `vector_pop_back()` literally 'pops' an element from the back of the vector, but it's return type is void, so it doesn't return to you that element
    * `vector.back()` returns a pointer to that last element if you'd like to go and use it
3. `
### working with vectors, some 'toy' code
```cpp
// Oh look, you get to initialize vectors using another vector. You couldn't do that with a regular C array, you'd have to manually do a copy operation.
std::vector<char> cArray = {'s', 'o', 'w', 'o', 'n'};
std::vector<char> cArray2(cArray);
``` 