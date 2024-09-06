
### Task 1: Road Connectivity After Snowfall

**Problem Statement:**

Cities numbered from `1` to `N` are connected by roads. After a snowfall, only `M` road segments remain passable, each connecting two cities.

You will receive `Q` queries of two types:
1. Questions about whether it is possible to travel from city `A` to city `B`.
2. Information that a road segment connecting city `A` and city `B` is now cleared and passable.

Write a program that responds to the queries based on the current state of the roads.

**Input Format:**

- The first line contains two integers: `N` (number of cities) and `M` (number of passable roads).
- The next `M` lines each contain two integers representing a road segment between two cities.
- The following line contains an integer `Q` (number of queries) and the next `Q` lines contain the queries. Each query is either:
  - Type `1 A B` (check if it is possible to travel from city `A` to city `B`).
  - Type `2 A B` (information that the road segment between city `A` and city `B` is now passable).

**Constraints:**
- `1 ≤ N ≤ 1000`
- `0 ≤ M ≤ N*(N-1)/2`
- `0 ≤ Q ≤ 10000`

**Output Format:**

Print a binary string where each character corresponds to the answer for each query of type `1`. Use `1` if the answer is "It is possible to reach!" and `0` if the answer is "It is not possible to reach!".

**Sample Input 0:**

```
9 8
1 2
3 4
5 6
7 8
9 5
7 2
8 2
6 9
6
1 1 8
1 6 2
2 7 1
1 4 7
2 2 3
1 4 7
```

**Sample Output 0:**

```
1001
```

---

### Task 2: Optimal Road Construction

**Problem Statement:**

Given `N` cities numbered from `1` to `N` and `M` bidirectional roads connecting them, none of these roads are built yet. You need to choose `K` roads such that it is possible to reach every city from every other city using these roads. Additionally, constructing each road incurs a cost and provides a profit for each unit of effort spent on building it. The total profit from constructing a road is given.

Find the `K` roads that will minimize the total cost of construction. If there are multiple solutions with the same cost, maximize the total profit.

**Input Format:**

- The first line contains two integers: `N` (number of cities) and `K` (number of roads to be chosen).
- The next `M` lines each contain four integers: `U`, `V`, `E`, `P`, where there is a road between cities `U` and `V`, with `E` units of effort required and `P` profit per unit of effort.

**Constraints:**
- `1 ≤ N ≤ 1000`
- `0 ≤ M ≤ 10000`
- `1 ≤ K ≤ N-1`

If there are multiple optimal solutions, any of them can be printed.

**Output Format:**

Print a line containing the indices of the `K` roads chosen for construction.

**Sample Input 0:**

```
3 3
1 2 1 7
2 3 3 2
1 3 2 3
```

**Sample Output 0:**

```
1
3
```

---

### Task 3: Speed Limits on Roads

**Problem Statement:**

Did you know that driving at excessively low speeds can also hinder traffic flow and even lead to accidents? To prevent this, a "minimum speed" is now being introduced on major roads—meaning vehicles should not travel below this speed.

It is also better if vehicles travel at relatively uniform speeds. Therefore, officials are considering adjusting the maximum and minimum allowable speeds so that the difference between them is minimized, while still allowing travel between every pair of cities.

Each road has an optimal speed range. If the maximum allowable speed is below the minimum speed or the minimum speed is above the maximum allowable speed, the road becomes unusable. The goal is to determine the allowed speeds that are as close as possible, while still enabling travel between all cities.

**Input Format:**

- The first line contains two integers: `N` (number of cities) and `M` (number of roads).
- The next `M` lines each contain three integers: `U`, `V`, `S`, where there is a bidirectional road between cities `U` and `V` with an optimal speed `S`.

**Constraints:**
- `1 ≤ N ≤ 1000`
- `0 ≤ M ≤ 10000`
- `0 ≤ S ≤ 100`

**Output Format:**

On a single line, output two integers representing the minimum and maximum allowed speeds that are as close as possible, while ensuring connectivity between every pair of cities.

If there are multiple possible answers, choose the one with the lowest minimum speed (and consequently the lowest maximum speed).

**Sample Input 0:**

```
7 10
1 3 2
4 2 8
1 2 11
1 4 3
1 3 6
5 3 5
3 6 9
7 6 6
5 6 3
2 5 7
```

**Sample Output 0:**

```
3 7
```
