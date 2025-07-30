# [Gold V] Capital - 17511 

[문제 링크](https://www.acmicpc.net/problem/17511) 

### 성능 요약

메모리: 4012 KB, 시간: 16 ms

### 분류

애드 혹, 그래프 이론

### 제출 일자

2025년 7월 28일 14:43:40

### 문제 설명

<p>You are given $N$ cities connected by $M$ roads. Cities are numbered from 1 through $N$, and roads are numbered from 1 through $M$. For each pair of cities, there is a sequence of roads that connects those two cities. Road $i$ has the length $L_i$ kilometre and connects city $A_i$ and city $B_i$ bidirectionally. Every road has a positive length, so $L_i > 0$. Unfortunately, you have forgotten the length of each road.</p>

<p>You observed that, for each road, all people on road $i$ are going from $A_i$ to $B_i$, in a single direction. So, you assumed the hypothesis as follows:</p>

<ul>
	<li>There is a capital city called $S$.</li>
	<li>People are moving from the capital city to other cities. </li>
	<li>People try to move in the shortest path. So the length of the shortest path from $S$ to $A_i$ is less than or equal to the length of the shortest path from $S$ to $B_i$.</li>
</ul>

<p>Can you find the capital city $S$ which meets the criteria when you can assign the length of each road to be any positive real number? You may assume that there is at least one city that meets the criteria.</p>

### 입력 

 <p>The first line of the input contains two integers $N$ ($2 \le N \le 500$) and $M$ ($N-1 \le M \le \frac{N(N-1)}{2}$).</p>

<p>In the $i$-th line of next $M$ lines, $A_i$ and $B_i$ are given. ($1 \le A_i,\ B_i \le N$) </p>

<p>There are no loops or multiple edges. Formally, $A_i \ne B_i$, and $\{A_i,\ B_i\} = \{A_j,\ B_j\} \implies i = j$.</p>

### 출력 

 <p>In the first line, print the number of possible capital cities, $K$.</p>

<p>In the second line, print $K$ space-separated integers which denotes all possible cities for the capital, in increasing order.</p>

