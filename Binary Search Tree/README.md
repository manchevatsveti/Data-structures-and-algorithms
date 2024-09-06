
## Task 1: Finding the Least Disturbed Path in a Binary Tree

### Problem Description
You are at Borovets, and it’s your first ski day of the season. However, upon arrival, you see snowboarders have ruined the perfect slope. Luckily, the tracks form a binary tree. Each node in the tree stores how many snowboarders have crossed that section of the slope. The root of the tree is positioned at coordinate (0, 0). The left child of any node is one unit to the left (-1) and the right child is one unit to the right (+1). Your task is to find the sum of snowboarders for each vertical line across the slope.

### Input Format
- The first line contains a number \( N \), the number of nodes in the tree.
- The next \( N \) lines contain three integers per line: the number of snowboarders at the node, the index of the left child, and the index of the right child. If the index is `-1`, that means the node has no corresponding child.

### Output Format
- Print the non-zero sums for all vertical lines, starting from the leftmost one.

### Example
#### Input:
```
7
1 1 2
2 3 4
3 5 6
4 -1 -1
5 -1 -1
6 -1 -1
7 -1 -1
```

#### Output:
```
4 2 12 3 7
```

#### Explanation:
The binary tree is traversed and summed for each vertical level.

---

## Task 2: Maximizing the Product After Removing a Node from a Tree

### Problem Description
You are given a large tree, and you want to maximize the product of the sizes of the trees created when a single node is removed. Upon removing a node, the tree splits into either 1, 2, or 3 subtrees. Your goal is to find which node should be removed to maximize this product.

### Input Format
- The first line contains the number of nodes, \( N \).
- Each of the next \( N \) lines contains two integers representing the left and right children of each node. If the child does not exist, the value is `-1`. Node 0 is always the root of the tree.

### Output Format
- Print the maximum product you can get by removing a single node.

### Example
#### Input:
```
6
1 2
3 4
-1 5
-1 -1
-1 -1
-1 -1
```

#### Output:
```
6
```

#### Explanation:
The product of sizes is maximized when removing the root node, which splits the tree into two subtrees of size 3 and 2, yielding a product of 6.

---

## Task 3: Maximum Path Sum in a Binary Tree

### Problem Description
During a math class, you doodle a tree and decide to find the path that passes through each node exactly once and maximizes the sum of the node values along the path.

### Input Format
- The first line contains the number of nodes, \( N \).
- Each of the next \( N \) lines contains three integers: the value of the node, the index of its left child, and the index of its right child. Node 0 is always the root of the tree.

### Output Format
- Print a single number: the maximum sum of any path in the tree.

### Example
#### Input 1:
```
3
1 1 2
2 -1 -1
5 -1 -1
```

#### Output 1:
```
8
```

#### Explanation 1:
The longest path is from node 2 -> root -> node 3 with a sum of 8.

#### Input 2:
```
5
-5 1 2
2 -1 -1
10 3 4
3 -1 -1
5 -1 -1
```

#### Output 2:
```
18
```

#### Explanation 2:
The longest path is from node 3 -> node 10 -> node 5 with a sum of 18.
