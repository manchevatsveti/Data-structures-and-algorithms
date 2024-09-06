
## Task 1: Median in Odd-Length Subarrays

### Problem Description
Given an array of distinct integers from 1 to \( N \), and a number \( B \), determine in how many subarrays of odd length \( B \) is the median. A subarray's median is defined as the middle element when the subarray is sorted.

### Input Format
- The first line contains two integers \( N \) and \( B \) where:
  - \( N \) is the length of the array (1 ≤ \( N \) ≤ 100,000).
  - \( B \) is the number whose occurrences as the median you need to find.
- The next line contains \( N \) distinct integers representing the array elements, ranging from 1 to \( N \).

### Output Format
- Print a single integer: the number of odd-length subarrays where \( B \) is the median.

### Constraints
- `1 ≤ N ≤ 10^5`
- `1 ≤ B ≤ N`
- All elements in the array are distinct.

### Sample Input 0
```
5 4
1 2 3 4 5
```

### Sample Output 0
```
2
```

### Sample Input 1
```
7 4
5 7 2 4 3 1 6
```

### Sample Output 1
```
4
```

---

## Task 2: Lexicographically Smallest Permutation with Subsequence

### Problem Description
You are given a subsequence of a permutation of the integers from 1 to \( N \). Your task is to find the lexicographically smallest permutation of the integers from 1 to \( N \) that contains the given subsequence.

### Input Format
- The first line contains two integers \( N \) and \( M \) where:
  - \( N \) is the maximum integer in the permutation `1 ≤ N ≤ 10^5`.
  - \( M \) is the length of the subsequence `1 ≤ M ≤ N`.
- The next \( M \) lines each contain one integer from the subsequence.

### Output Format
- Print the lexicographically smallest permutation that contains the given subsequence, separated by spaces.

### Constraints
- `1 ≤ N ≤ 10^5`
- `1 ≤ M ≤ N`
- All elements in the subsequence are distinct.

### Sample Input 0
```
5 3
1
4
2
```

### Sample Output 0
```
1 3 4 2 5
```

---

## Task 3: Minimum XOR of Two Numbers in a Set

### Problem Description
You are given a set of numbers that initially contains only one element: 0. You will receive several queries where each query is a number to be added to the set. After each query, output the minimum XOR value of any two distinct elements in the set.

### Input Format
- The first line contains an integer \( Q \) where:
  - \( Q \) is the number of queries `1 ≤ Q ≤ 10^5`.
- The next \( Q \) lines each contain an integer \( x \) representing a number to be added to the set (0 ≤ \( x \leq 10^9 \)).

### Output Format
- For each query, print the minimum XOR value between any two distinct elements in the set after the number is added.

### Constraints
- `1 ≤ Q ≤ 10^5`
- `0 ≤ x ≤ 10^9`
- The set contains no duplicate elements.

### Sample Input 0
```
5
7
3
5
5
42
```

### Sample Output 0
```
7
3
2
2
2
```

### Explanation
- After adding 7, the set is \{0, 7\}, so the minimum XOR is \( 7 \).
- After adding 3, the set is \{0, 3, 7\}, and the minimum XOR is \( 3 \).
- After adding 5, the set is \{0, 3, 5, 7\}, and the minimum XOR is \( 2 \).
- Adding 5 again has no effect, so the minimum XOR remains \( 2 \).
- After adding 42, the set is \{0, 3, 5, 7, 42\}, and the minimum XOR remains \( 2 \).

