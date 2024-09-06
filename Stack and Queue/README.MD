
---
## Task 1: Count Occurrences of `s1` in `s2`

### Problem Description
You are given two strings: `s1` and `s2`. Both strings contain only lowercase Latin letters. Your task is to determine how many times `s1` appears in `s2`.

### Input Format
- The input consists of two strings, `s1` and `s2`, each on a new line.

### Output Format
- Output a single number: the count of occurrences of `s1` in `s2`.

### Constraints
- \( 1 \leq |s1|, |s2| \leq 10^6 \)
- Both `s1` and `s2` contain only lowercase Latin letters.

### Example
#### Input:
```
sneed
sneedfsneedfsneed
```

#### Output:
```
3
```

#### Explanation:
The string `"sneed"` appears 3 times in the string `"sneedfsneedfsneed"`.

---

## Task 2: Longest Common Subsequence

### Problem Description
You are given two strings that consist of only lowercase Latin letters. Find the length of the longest common sequence of characters that appears in both strings.

### Input Format
- The first line contains the first string.
- The second line contains the second string.

### Output Format
- Output a single number: the length of the longest common sequence.

### Constraints
- \( 1 \leq |s1|, |s2| \leq 1000 \)
- Both strings contain only lowercase Latin letters.

### Example
#### Input:
```
bananasareyellow
nananabatman
```

#### Output:
```
5
```

#### Explanation:
The longest common subsequence of the two strings is `"anana"`, which has a length of 5.

---

## Task 3: Minimum Distance Between Gossiping Grandmas

### Problem Description
Every time you walk to the Faculty of Mathematics and Informatics, you pass by a park bench where Bulgarian grandmas often gather to gossip. Each grandma likes to gossip about a specific topic. A grandma wants to gossip with another grandma who is interested in the same topic. Therefore, grandmas who are interested in the same topic try to be as close as possible to each other.

As a programmer, you decide to write a program to find the minimum distance between two grandmas who are interested in the same topic.

### Input Format
- The first line contains an integer `N`, the number of grandmas.
- The next `N` lines each contain the topic that interests the corresponding grandma.

### Output Format
- Output a single number: the minimum distance between two grandmas interested in the same topic.

### Constraints
- \( 1 \leq N \leq 10^5 \)
- Topics are integers between 1 and \( 10^9 \).
- If no two grandmas share the same topic, output `INT_MAX`.

### Example
#### Input:
```
4
1 2 3 1
```

#### Output:
```
3
```

#### Explanation:
There are two grandmas interested in topic `1`, and the distance between them is 3.

---

