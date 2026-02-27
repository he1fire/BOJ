# [Silver V] Difficult Problems - 19733 

[문제 링크](https://www.acmicpc.net/problem/19733) 

### 성능 요약

메모리: 3680 KB, 시간: 4 ms

### 분류

수학, 그리디 알고리즘, 문자열

### 제출 일자

2026년 2월 27일 09:50:48

### 문제 설명

<p>Yesterday, for the first time, Tosha took part in a programming contest. But the problems were so difficult that sometimes he wanted to scream. Tosha knew that noise during the contest is prohibited, so he had to scream on paper: he sometimes wrote a few letters "A" on a piece of paper, when he felt that the task was too difficult. The more difficult the problem was, the more letters "A" Tosha wrote down in the process of solving it.</p>

<p>The next day Tosha wanted to boast to his classmates that he had participated in the contest and solved a lot of problems. But he forgot the number of problems and even didn't have the statements to check. Fortunately, Tosha saved his notes, so now he can roughly estimate the number of problems. </p>

<p>He remembers that all the problems had different non-zero difficulty, which means that solving each task he wrote a distinct positive number of letters "A". And these screaming letters conveniently stands out, because there are no other uppercase letters, all other notes he made in lowercase. Note that he could write down some lowercase notes between "A"-s he wrote for the same problem.</p>

<p>Help Tosha to find out what is the the maximum number of problems that could have been there in the contest.</p>

### 입력 

 <p>Input contains a nonempty string <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container> consisting of lowercase English letters and characters "A". The length of <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container> does not exceed <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mn>6</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^6$</span></mjx-container>, it contains at least one "A".</p>

### 출력 

 <p>Print one integer --- the maximum number of problems in the contest.</p>

