
## Task 1: Counting Unique Pairs with Exact Difference

**Description:**

You have `N` unique project topic numbers assigned to Faculty of Mathematics and Informatics (FMI) students. Each student has been given a unique integer representing the project topic number they received. Your task is to find the number of pairs of students whose project topic numbers differ by exactly `D`.

**Input Format:**

- The first input line contains two integers: `N` (the number of students) and `D` (the exact difference).
- The second line contains `N` unique integers representing the topic numbers assigned to each student.

**Constraints:**

- `1 ≤ N ≤ 10^5`
- `1 ≤ D ≤ 10^5`

**Output Format:**

- Output a single integer representing the number of pairs of students whose topic numbers differ by exactly `D`.

**Sample Input 0:**
```
6 1
6 1 5 4 10 15
```

**Sample Output 0:**
```
2
```

**Explanation 0:**

The pairs with a difference of exactly `D = 1` are `{6, 5}` and `{5, 4}`.

**Sample Input 1:**
```
7 2
6 1 5 4 10 15 8
```

**Sample Output 1:**
```
3
```

**Explanation 1:**

The pairs with a difference of exactly `D = 2` are `{6, 4}`, `{6, 8}`, and `{10, 8}`.

---

## Task 2: Querying Student Scores in Intervals

**Description:**

After the first exam, the administration needs statistics on student performance. They want to know how many students scored between specific intervals. You need to determine the number of students scoring between given minimum and maximum scores for each query.

**Input Format:**

- The first line contains two integers: `n` (number of students) and `q` (number of queries).
- The second line contains `n` integers representing the scores of all students.
- The next `q` lines each contain two integers: the minimum and maximum scores for each query.

**Constraints:**

- `1 ≤ n, q ≤ 10^5`
- Scores are non-negative integers.

**Output Format:**

- For each query, output the number of students with scores in the specified range, one per line.

**Sample Input 0:**
```
7 3
3 5 1 7 13 11 9
3 7
1 12
0 15
```

**Sample Output 0:**
```
3
6
7
```

**Explanation 0:**

For the first query, the scores in the range are `3, 5, 7`. For the second query, the scores are `1, 3, 5, 7, 9, 11`. For the third query, all scores fall within the range.

---

## Task 3: Balancing Developer Skills Across Teams

**Description:**

You have `N` developers with specific skill levels. You need to divide these developers into `K` teams such that the maximum sum of skills in any team is minimized. The developers must be assigned to contiguous segments without interruptions.

**Input Format:**

- The first line contains two integers: `N` (number of developers) and `K` (number of teams).
- The second line contains `N` integers representing the skill levels of the developers.

**Constraints:**

- `1 ≤ N, K ≤ 10^5`
- Skill levels are positive integers.

**Output Format:**

- Output a single integer representing the smallest possible value for the maximum sum of skills in any team.

**Sample Input 0:**
```
3 1
1 2 3
```

**Sample Output 0:**
```
6
```

**Explanation 0:**

With 3 developers in one team, the only possible sum is `1 + 2 + 3 = 6`.

**Sample Input 1:**
```
4 2
1 2 3 7
```

**Sample Output 1:**
```
7
```

**Explanation 1:**

The optimal division is `{1, 2, 3}` and `{7}` which results in a maximum team sum of `7`.
