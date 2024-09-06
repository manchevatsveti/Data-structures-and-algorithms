
## Task 1: Finding the Closest Tourist Attractions

### Problem Description
You are managing a large travel agency and want to increase the popularity of local tourist attractions. After conducting a survey, you find that tourists tend to visit the closest attractions to their current location. Develop software that, given a tourist's location and a list of attractions, finds the nearest \( K \) attractions to the tourist.

### Input Format
- The first line contains four integers:
  - \( x_t \) and \( y_t \) are the coordinates of the tourist.
  - \( N \) is the number of tourist attractions (1 ≤ \( N \) ≤ 100,000).
  - \( K \) is the number of closest attractions to find (1 ≤ \( K ≤ N \)).
- The next \( N \) lines contain two integers each:
  - \( x_i \) and \( y_i \) are the coordinates of the \( i \)-th attraction.

### Output Format
- Print the coordinates of the \( K \) closest attractions to the tourist, one per line. If two attractions have the same distance, sort them by \( x \)-coordinate. If they also have the same \( x \)-coordinate, sort by \( y \)-coordinate.

### Constraints
- \( 1 ≤ N, K ≤ 100,000 \)
- Coordinates \( x_t, y_t, x_i, y_i \) are integers and can be negative or positive, bounded by \( -10^9 ≤ x_t, y_t, x_i, y_i ≤ 10^9 \).

### Sample Input 0
```
1 1 3 2
4 4
6 0
-1 5
```

### Sample Output 0
```
4 4
-1 5
```

---

## Task 2: Seating at a Party

### Problem Description
You are organizing a birthday party and have invited exactly \( N \) friends. However, one of them, the friend with index \( p \), isn't your favorite, and you want to give them less food. To do this, you need to determine which chair they will sit in. You have an infinite number of chairs, numbered from 0. Each friend arrives at a specific time and sits on the first available chair. When they leave, the chair becomes available for others.

### Input Format
- The first line contains an integer \( N \) (1 ≤ \( N ≤ 100,000 \)) — the number of friends.
- The next \( N \) lines each contain two integers:
  - \( a_i \) and \( l_i \) — the arrival time and departure time of the \( i \)-th friend (1 ≤ \( a_i < l_i ≤ 10^9 \)).
- The last line contains the integer \( p \) — the index of the friend whose chair you want to find.

### Output Format
- Print the number of the chair that the friend with index \( p \) will sit in.

### Constraints
- \( 1 ≤ N ≤ 100,000 \)
- \( 1 ≤ a_i < l_i ≤ 10^9 \)

### Sample Input 0
```
3
1 4
2 3
4 6
1
```

### Sample Output 0
```
1
```

### Sample Input 1
```
3
3 10
1 5
2 6
0
```

### Sample Output 1
```
2
```

---

## Task 3: Can Aiya Pick Up All Passengers?

### Problem Description
Aiya enjoys driving her small bus, which has a capacity of \( C \) passengers (excluding herself). She uses it as a shuttle service to earn extra money after work, picking up passengers along a predetermined route. Aiya can only drive the route once each night, picking up passengers if there’s room. Given the groups of passengers and their pickup/drop-off points, determine if Aiya can pick up all passengers.

### Input Format
- The first line contains an integer \( Q \) — the number of requests (1 ≤ \( Q ≤ 100 \)).
- For each request:
  - The first line contains two integers \( G \) and \( C \):
    - \( G \) is the number of groups of passengers (1 ≤ \( G ≤ 100 \)).
    - \( C \) is the bus capacity (1 ≤ \( C ≤ 100 \)).
  - The next \( G \) lines each contain three integers:
    - \( K \) — the number of passengers in the group (1 ≤ \( K ≤ C \)).
    - \( P_i \) — the pickup point of the group.
    - \( D_i \) — the drop-off point of the group (\( 1 ≤ P_i < D_i ≤ 10^9 \)).

### Output Format
- For each request, print 1 if Aiya can pick up all passengers and 0 if she cannot.

### Constraints
- `1 ≤ Q ≤ 100`
- `1 ≤ G ≤ 100`
- `1 ≤ C ≤ 100`
- `1 ≤ K ≤ C`
- `1 ≤ P_i < D_i ≤ 10^9`

### Sample Input 0
```
3
2 4
2 1 5
3 3 7
2 5
2 1 5
3 3 7
2 4
2 1 5
3 6 7
```

### Sample Output 0
```
0
1
1
```
