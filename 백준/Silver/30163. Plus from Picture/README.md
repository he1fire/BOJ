# [Silver III] Plus from Picture - 30163 

[문제 링크](https://www.acmicpc.net/problem/30163) 

### 성능 요약

메모리: 2304 KB, 시간: 356 ms

### 분류

구현

### 제출 일자

2024년 6월 25일 01:12:54

### 문제 설명

<p>You have a given picture with size $w \times h$. Determine if the given picture has a single "<code>+</code>" shape or not. A "<code>+</code>" shape is described below:</p>

<ul>
	<li>A "<code>+</code>" shape has one center nonempty cell.</li>
	<li>There should be some (at least one) consecutive non-empty cells in each direction (left, right, up, down) from the center. In other words, there should be a ray in each direction. </li>
	<li>All other cells are empty.</li>
</ul>

<p>Find out if the given picture has single "<code>+</code>" shape.</p>

### 입력 

 <p>The first line contains two integers $h$ and $w$ ($1 \le h$, $w \le 500$) --- the height and width of the picture.</p>

<p>The $i$-th of the next $h$ lines contains string $s_{i}$ of length $w$ consisting "<code>.</code>" and "<code>*</code>" where "<code>.</code>" denotes the empty space and "<code>*</code>" denotes the non-empty space.</p>

### 출력 

 <p>If the given picture satisfies all conditions, print "<code>YES</code>". Otherwise, print "<code>NO</code>".</p>

