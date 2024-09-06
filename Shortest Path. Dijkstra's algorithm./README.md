
### Task 1: Transportation Scheduling

**Problem Statement:**

This year, all students will celebrate in Bansko. A large transportation organization is required since many people will be traveling from their hometowns. Many buses have been arranged, but some students, who start from rural areas, need to transfer between multiple buses to reach Bansko. The task is to find the shortest time for a student to travel from the starting stop in their village to the hotel stop in Bansko. 

**Input Format:**

- The first line contains four integers: `N`, `M`, `S`, `T`.
- The second line contains `N` integers representing the intervals at which buses arrive at each stop.
- The following `M` lines each contain three integers: `A`, `B`, and `D`, where there is a bus line between stops `A` and `B`, and the distance required to reach it is `D`.

**Constraints:**
- `1 ≤ N ≤ 1000`
- `1 ≤ M ≤ 10000`
- `0 ≤ S, T < N`

**Output Format:**

Output a single integer representing the shortest time required for the student to travel from the starting stop to the hotel stop. If no path exists, output `-1`.

**Sample Input 0:**

```
5 6 0 3
4 5 12 10 20
0 1 10
0 4 3
1 2 8
2 3 6
4 2 7
4 3 18
```

**Sample Output 0:**

```
30
```

**Explanation:**

There are five stops. Buses arrive at stop 0 every 4 minutes, at stop 1 every 5 minutes, at stop 2 every 12 minutes, at stop 3 every 10 minutes, and at stop 4 every 20 minutes. The starting stop is 0, and the destination stop is 3. The shortest path is 0->1->2->3. Starting at time 0 from stop 0, it takes 10 minutes to reach stop 1. Then, traveling immediately to stop 2 at time 10, arriving at time 18, and waiting 6 minutes, the next bus leaves at time 24 to reach stop 3 at time 30.

---

### Task 2: Escape the Mansion

**Problem Statement:**

Eli has been kidnapped! Fortunately, she has found the map of the mansion where she is being held. Unfortunately, she does not know her exact location as she was blindfolded while being taken inside.

For simplicity, the mansion is represented as a matrix with `N` rows and `M` columns. Each cell can be either empty (a corridor) or blocked (a wall). Eli can be in any empty cell, but not knowing the exact cell, she needs to determine the number of cells from which it will take the maximum possible time to escape.

Eli can move in four directions: left, right, up, and down. Moving to an adjacent empty cell takes no time, but moving through a blocked cell takes additional time as it requires breaking the wall, which takes one hour per cell. Eli escapes when she reaches any boundary cell of the matrix.

**Input Format:**

- The first line contains two integers: `N` and `M`, the number of rows and columns in the map.
- The following `N` lines each contain `M` characters representing the map, where '.' denotes an empty cell and '#' denotes a blocked cell.

**Constraints:**
- `1 ≤ N, M ≤ 1000`

**Output Format:**

Output a single integer representing the number of cells from which Eli would take the maximum possible time to escape, even when taking the optimal path.

**Sample Input 0:**

```
7 14
.#............
.#####........
.#.#..#.......
.##.#.#.......
.#.#..#..####.
.#...##..#.##.
..####...###..
```

**Sample Output 0:**

```
1
```

**Sample Input 1:**

```
3 3
..#
...
.#.
```

**Sample Output 1:**

```
7
```

---

### Task 3: Santa's Tunnel Network

**Problem Statement:**

It is a common misconception that Santa Claus travels via a flying sleigh. To remain unnoticed, he actually uses a network of one-way underground tunnels, navigating using a known app – Tunnel Maps. The network consists of `N` intersections connected by `M` tunnels.

Santa plans to reach Ivan's house, located at intersection `T`, starting from intersection `S`. However, Santa cannot travel through some of the narrower tunnels due to his size and needs to reduce weight to fit through these tunnels. The goal is to determine the minimum weight Santa must lose to reach Ivan’s house before his phone battery runs out, considering the time it takes to traverse each tunnel and the weight loss required.

**Input Format:**

- The first line contains three integers: `N`, `M`, and `T`, the number of intersections, the number of tunnels, and the battery life in minutes.
- The following `M` lines each contain four integers: `A`, `B`, `W`, and `L`, where there is a tunnel between intersections `A` and `B`, Santa needs to lose `W` kilograms to pass through it, and it takes `L` minutes to traverse.

**Constraints:**
- `1 ≤ N ≤ 1000`
- `1 ≤ M ≤ 10000`
- `0 ≤ S, T < N`
- `0 ≤ L ≤ 10000`

**Output Format:**

Output a single integer representing the minimum weight Santa needs to lose to reach Ivan’s house within the given time. If it is not possible to reach within the time limit, output `-1`.

**Sample Input 0:**

```
7 11 42
1 3 7 11
3 1 7 13
1 2 3 3
1 4 13 1
6 1 14 8
4 6 1 7
2 4 1 13
2 6 4 20
3 5 2 5
5 6 6 4
6 7 5 20
```

**Sample Output 0:**

```
7
```

**Explanation:**

The optimal path is 1-3-5-6-7. Santa needs to lose 7 kilograms and will traverse it in 40 minutes.

**Sample Input 1:**

```
2 2 3
1 2 3 5
1 2 1 9
```

**Sample Output 1:**

```
-1
```

---
