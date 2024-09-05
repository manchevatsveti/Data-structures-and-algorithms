
# Linked List Challenges from MyCodeSchool

This repository contains several challenges related to linked lists, which are part of a tutorial track by MyCodeSchool. The tasks involve implementing various functions for manipulating linked lists. Each task is detailed below.

## Task 1: Merging Two Sorted Linked Lists

**Description**  
Given pointers to the heads of two sorted linked lists, merge them into a single, sorted linked list. Either head pointer may be `null`, meaning that the corresponding list is empty.

**Function Signature**
```cpp
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB);
```

### Input Format
- The first line contains an integer `t`, the number of test cases.
- For each test case:
  - The first line contains an integer `n`, the length of the first linked list.
  - The next `n` lines contain an integer each, the elements of the first linked list.
  - The next line contains an integer `m`, the length of the second linked list.
  - The next `m` lines contain an integer each, the elements of the second linked list.

### Output Format
- Return a reference to the head of the merged list.

### Constraints
- \( 1 \leq n, m \leq 1000 \)
- Elements in each list are integers in the range \( -10^4 \leq a_i \leq 10^4 \).

### Sample Input
```
1
3
1
2
3
2
3
4
```

### Sample Output
```
1 2 3 3 4
```

---

## Task 2: Remove Duplicates from a Sorted Linked List

**Description**  
You are given the pointer to the head node of a sorted linked list, where the data in the nodes is in ascending order. Remove any duplicate nodes and return a sorted list with each distinct value from the original list.

**Function Signature**
```cpp
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head);
```

### Input Format
- The first line contains an integer `t`, the number of test cases.
- For each test case:
  - The first line contains an integer `n`, the number of elements in the linked list.
  - Each of the next `n` lines contains an integer, the data value for each of the elements of the linked list.

### Output Format
- Return a reference to the head of the revised list.

### Sample Input
```
1
5
1
2
2
3
4
```

### Sample Output
```
1 2 3 4
```

---

## Task 3: Insert a Node at a Specific Position in a Linked List

**Description**  
Given the pointer to the head node of a linked list and an integer to insert at a certain position, create a new node with the given integer as its `data` attribute, insert this node at the desired position, and return the head node.

**Function Signature**
```cpp
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position);
```

### Input Format
- The first line contains an integer `n`, the number of elements in the linked list.
- The next `n` lines contain an integer `SinglyLinkedListNode[i].data`.
- The next line contains an integer `data`, the data of the node to be inserted.
- The last line contains an integer `position`, the position to insert the new node (0-based indexing).

### Sample Input
```
3
16
13
7
1
2
```

### Sample Output
```
16 13 1 7
```

---

## Task 4: Implement a Simple Cache

**Description**  
Implement a cache system that supports the following operations:

1. `put(key, value)`: Adds an element with key `key` and value `value`. If the key already exists in the cache, update its value. This element becomes the most recently used. If the cache reaches its capacity, the least recently used element is removed before adding the new one.
2. `get(key)`: Prints the value of the element with key `key` if it exists in the cache. This element becomes the most recently used. If the key does not exist, print `-1`.

After every `K` requests, the cache overheats, causing the least recently used element to be removed.

### Input Format
- The first line contains three integers `C`, `Q`, and `K`, representing the cache capacity, number of requests, and the number of requests after which the cache overheats.
- The next `Q` lines contain the requests, either in the form `put key value` or `get key`.

### Output Format
- For every `get` request, print the result on a new line.

### Sample Input
```
2 9 4
put 1 1
put 2 2
get 1
put 3 3
get 2
put 4 4
get 1
get 3
get 4
```

### Sample Output
```
1
-1
-1
3
-1
```

---

## Task 5: Zack's Cheating Strategy

**Description**  
Zack loves to cheat during exams by using notes provided by his classmates. Whenever a note is passed to Zack, he places it under his desk. However, the invigilator occasionally shuffles his notes, making it harder for Zack to copy.

- `add x`: Zack adds note number `x` to the rightmost position under his desk.
- `gun`: Zack copies from the rightmost note and removes it.
- `milen`: The invigilator shuffles Zack's notes by taking the first half (or slightly less if the number of notes is odd) and placing them at the rightmost position.

### Input Format
- The first line contains an integer `N`, the number of operations.
- The next `N` lines contain commands: `add x`, `gun`, or `milen`.

### Output Format
- After processing all the commands, print the number of notes left and their order.

### Sample Input
```
8
add 1
add 2
add 4
add 3
add 5
add 8
gun
milen
```

### Sample Output
```
5
4 3 5 1 2
```

