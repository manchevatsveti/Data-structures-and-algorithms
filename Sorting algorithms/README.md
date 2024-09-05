
## Task 1: Fantasy Football Player Activity

**Description:**  
Jack is playing fantasy football for the first time. Since he is not very familiar with Premier League teams and there are hundreds of players, he has selected 62 players. To manage his team, Jack needs to keep track of player activity during matches. Each time a player interacts with the ball, Jack records their number. To make it easier for Jack to decide which players to include in his team, he needs a sorted sequence of these player numbers.

**Input Format:**
- The first line of the standard input contains the number \( N \), which indicates the number of player numbers.
- The second line contains \( N \) positive numbers \( A_i \). Each number \( A_i \) is at most 62.

**Encoding Scheme:**
- 1-10 => '0' – '9'
- 11-36 => 'a' – 'z'
- 37-62 => 'A' – 'Z'

**Output Format:**
- Output the sorted sequence of player numbers on a single line.

**Sample Input:**
```
20
Abcabc12345ABCDE1234
```

**Sample Output:**
```
112233445abbccAABCDE
```

---

## Task 2: Restaurant Profit Sorting

**Description:**  
A restaurant manager records daily profits as integers. With a sudden audit approaching, the manager needs to sort the minimum subsequence that, when sorted, will make the entire sequence sorted. Help the manager determine the length of this subsequence.

**Input Format:**
- The first line contains an integer \( N \).
- The second line contains \( N \) integers representing daily profits.

**Output Format:**
- Output a single integer representing the length of the subsequence that needs to be sorted.

**Sample Input:**
```
7
2 6 4 8 10 9 15
```

**Sample Output:**
```
5
```

---

## Task 3: Gym Performance Efficiency

**Description:**  
Gym enthusiasts need to determine who is most effective at lifting weights from bench press to deadlift. Each person is characterized by two parameters: the diameter \( d \) of the weights they can lift and the time \( t \) it takes to complete one lift. Determine who is the most efficient at lifting weights (i.e., who can lift the most total weight in a given time).

**Input Format:**
- The first line contains an integer \( N \), the number of gym enthusiasts.
- The next \( N \) lines each contain a pair of integers: the diameter \( d \) of the weights and the time \( t \) it takes for one lift. No two individuals have the same pair of characteristics.

**Output Format:**
- Output the indices of the gym enthusiasts in descending order of efficiency. If two enthusiasts have the same efficiency, the one who can lift weights with the larger diameter should come first. Indices are numbered from 1 to \( N \).

**Sample Input:**
```
3
90 1
20 2
110 2
```

**Sample Output:**
```
1 3 2
```
