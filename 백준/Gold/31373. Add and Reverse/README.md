# [Gold IV] Add and Reverse - 31373 

[문제 링크](https://www.acmicpc.net/problem/31373) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

비트마스킹, 수학

### 제출 일자

2024년 3월 24일 16:04:04

### 문제 설명

<p>Consider a non-negative integer $x$ stored in $32$ bits of memory: $$x = b_{31} \cdot 2^{31} + b_{30} \cdot 2^{30} + \ldots + b_{2} \cdot 2^{2} + b_{1} \cdot 2^{1} + b_{0} \cdot 2^{0}$$ where each bit $b_{i}$ can take two values $0$ and $1$ independently of other bits.</p>

<p>We perform a sequence of operations with this integer, possibly an empty one. In one operation, we can either increase the number by one or reverse the bits constituting it: swap $31$-st bit and $0$-th bit, swap $30$-th bit and first bit, $\ldots$, swap $16$-th bit and $15$-th bit. We can perform any number of any of these two operations in any order.</p>

<p>What is the minimum possible number of operations required to transform a zero to the given integer $n$?</p>

<p>The increasing by one is carried out modulo $2^{32}$, which means that, if the current number is equal to $2^{32} - 1$, increasing it by one produces a zero.</p>

### 입력 

 <p>The only line contains an integer $n$ ($0 \le n < 2^{32}$).</p>

### 출력 

 <p>Print one integer: the minimum possible number of operations required to transform a zero to the given integer $n$.</p>

