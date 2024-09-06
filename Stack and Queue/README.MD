
## Task 1: Warriors on the Bridge

### Problem Description
A group of warriors is walking on a narrow, long bridge. If two groups of warriors moving in opposite directions meet on the bridge, they cannot pass each other. Instead, a battle ensues. During the battle, a warrior with higher strength can throw off a warrior with lower strength from the opposing group. If two warriors have the same strength, they both get thrown off the bridge. Your task is to determine which warriors successfully cross the bridge based on their direction and strength.

### Input Format
- The first line contains an integer \( N \) (1 ≤ \( N \leq 100,000 \)) — the number of warriors.
- The next \( N \) lines each contain an integer \( S_i \) — the strength of the \( i \)-th warrior. Warriors moving from left to right are represented by positive numbers, while those moving from right to left are represented by negative numbers.

### Output Format
- Output the strengths of the warriors who successfully cross the bridge, in the order they do so. If no warrior crosses, output an empty line.

### Constraints
- `|S_i|  ≤ 10^9` (absolute strength values are within this range).

### Sample Input 0
```
11
-1
-2
4
5
6
-3
-6
-7
-8
2
3
```

### Sample Output 0
```
-1 -2 -7 -8 2 3
```

### Explanation 0
- The first two warriors, \( -1 \) and \( -2 \), do not meet anyone and successfully cross the bridge.
- The next group consisting of \( 4, 5, 6 \) meets the warriors \( -3, -6, -7, -8 \). 
- \( 6 \) defeats \( -3 \), then \( 6 \) and \( -6 \) eliminate each other, leaving \( -7 \) to defeat \( 5 \) and \( 4 \).
- Warriors \( -7 \) and \( -8 \) pass the bridge.
- The remaining warriors \( 2 \) and \( 3 \) pass without meeting any opposition.

### Sample Input 1
```
2
-1
1
```

### Sample Output 1
```
-1 1
```

### Sample Input 2
```
2
1
-1
```

### Sample Output 2
```
```

---

## Task 2: Largest Possible Rectangle in a Residential Complex

### Problem Description
You are a construction entrepreneur aiming to build the largest possible residential complex in a densely populated neighborhood. You are given the lengths of available streets where you can build, and you want to find the largest possible rectangle you can form.

### Input Format
- The first line contains an integer \( N \) (1 ≤ \( N \leq 100,000 \)) — the number of streets available for construction.
- The next \( N \) lines each contain a positive integer \( D_i \) (1 ≤ \( D_i \leq 10^9 \)) — the maximum possible length for construction on the \( i \)-th street.

### Output Format
- Output a single integer — the area of the largest possible rectangle that can be built.

### Constraints
- `1 ≤ N ≤ 10^5`
- `1 ≤ D ≤ 10^5`

### Sample Input 0
```
11
6 5 2 7 8 6 8 3 5 6 7
```

### Sample Output 0
```
24
```

---

## Task 3: Hunger Games at the University

### Problem Description
At the university, this year's competition is the "Hunger Games." The rules are a bit different. There is only one tribe, and each day, elimination battles take place. Each participant has a hunger level, and the hungrier participants are more likely to lose. A participant will only lose if the participant to their left is less hungry. Each participant has immunity from the participant to their right. The participant at position 0 will play in the final for sure because there is no one to their left. The task is to determine how many days it takes for all eliminations to occur.

### Input Format
- The first line contains an integer \( N \) (1 ≤ \( N \leq 100,000 \)) — the number of participants.
- The second line contains \( N \) integers \( H_i \) (1 ≤ \( H_i \leq 10^9 \)) — the hunger levels of the participants.

### Output Format
- Output a single integer — the number of days until no more eliminations can occur.

### Constraints
- `1 ≤ N ≤ 10^5`
- `1 ≤ H_i ≤ 10^9`

### Sample Input 0
```
7
4 3 7 5 6 4 2
```

### Sample Output 0
```
3
```

### Explanation 0
- On the first day, participants with hunger levels 7 and 6 are eliminated.
- On the second day, the participant with hunger level 5 is eliminated.
- On the third day, the participant with hunger level 4 is eliminated.
- Now, no participants can be eliminated, so the game ends after 3 days.

### Sample Input 1
```
5
2 6 5 4 3
```

### Sample Output 1
```
4
```

### Sample Input 2
```
4
1 2 3 4
```

### Sample Output 2
```
1
```

