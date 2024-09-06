# Task 1: Forest Fire Bounding Boxes

## Problem Description:
You are provided with a square map of a forest. Trees are represented with `0` (healthy) and `1` (burning). Your task is to compute the area of the bounding box for each burning region.

### Input Format:
- First line: an integer `n` representing the side length of the square forest matrix.
- Next `n` lines: each containing `n` integers (either `0` or `1`), representing the state of each tree in the forest.

### Output Format:
- Print the areas of the bounding boxes for each burning region in descending order, separated by spaces.

### Constraints:
- The matrix contains at least one `1`.
  
### Sample Input:
```
6
0 1 1 0 0 0
1 1 1 0 0 0
0 0 1 0 0 0
0 0 1 0 0 0
0 0 0 0 1 1
0 0 0 0 1 0
```

### Sample Output:
```
12 4
```

---

# Task 2: Shortest Path in Friend Graph

## Problem Description:
You are given a graph where vertices represent people at a party, and edges represent friendships. Each person belongs to a friend group, and you must find the shortest distance between two people in the same friend group.

### Input Format:
- First line: two integers `n` (number of vertices) and `m` (number of edges).
- Next `m` lines: each containing two integers `u` and `v`, representing an edge between vertex `u` and vertex `v`.
- Last line: `n` integers representing the friend group of each vertex.

### Output Format:
- Print the shortest distance between any two people in the same friend group.

### Sample Input:
```
4 3
2 1
3 1
2 4
2 1 2 2
```

### Sample Output:
```
1
```

---

# Task 3: Discover Ancient Alphabet

## Problem Description:
Given a list of words sorted according to an unknown alphabet, determine the lexicographical order of the characters in that alphabet.

### Input Format:
- First line: an integer `n` representing the number of words.
- Next `n` lines: each containing a string representing a word in the unknown language.

### Output Format:
- Print the characters of the alphabet in the correct order, separated by spaces.

### Constraints:
- All words consist of lowercase Latin letters.

### Sample Input:
```
5
tqq
qtiu
qtiq
iqt
iqu
```

### Sample Output:
```
t u q i
```

---

# Task 4: Optimized Construction of Disco in Cities

## Problem Description:
Given several city plans, find the minimum cost to ensure that each city can reach at least one city with a disco by building discos and connecting roads between cities.

### Input Format:
- First line: an integer `T`, representing the number of test cases.
- For each test case:
  - First line: four integers `n`, `m`, `c_disco`, `c_road` representing the number of cities, the number of roads, the cost of building a disco, and the cost of building a road, respectively.
  - Next `m` lines: each containing two integers `u` and `v`, representing a road between city `u` and city `v`.

### Output Format:
- For each test case, print the minimum total cost.

### Sample Input:
```
2
3 3 3 2
2 1
1 3
3 2
6 6 3 5
1 3
3 4
2 4
1 2
2 3
5 6
```

### Sample Output:
```
7
18
```

---

# Task 5: Shortest Path in Lego Puzzle

## Problem Description:
Given a set of cities and roads of length `1` or `2`, determine the shortest path between two specified cities.

### Input Format:
- First line: two integers `n` (number of cities) and `m` (number of roads).
- Next `m` lines: each containing three integers `u`, `v`, and `d` where `u` and `v` are cities connected by a road of length `d`.
- Last line: two integers `s` and `t`, representing the start and target cities.

### Output Format:
- Print the shortest distance between city `s` and city `t`.

### Sample Input:
```
8 7
1 2 2
1 3 1
2 4 2
3 4 1
4 5 1
5 6 2
6 7 1
1 7
```

### Sample Output:
```
6
```
