# easy_Visiting-a-Friend

## 提交链接 / Submit 
https://codeforces.com/problemset/problem/902/A

(You need register/login first before submit.)

（在提交前你需要先注册或登录）

## 题目描述 / Description

Pig is visiting a friend.

皮格将拜访一位朋友.

Pig's house is located at point 0, and his friend's house is located at point m on an axis.

皮格的房子在点0处,他朋友在数轴上的点m处.

Pig can use teleports to move along the axis.

皮格能使用意念传送点在数轴上移动.

To use a teleport, Pig should come to a certain point (where the teleport is located) and choose where to move: for each teleport there is the rightmost point it can move Pig to, this point is known as the limit of the teleport.

为了使用意念传送点，皮格需要来到一个恰当的点(这个点是意念传送点的的位置)并且选择一个地方为目的地: 对每个传送点有一个向右移动的最远点，这个点是传送点的极限。

Formally, a teleport located at point x with limit y can move Pig from point x to any point within the segment [x; y], including the bounds.

正式地说, 一个意念传送点在点x处，有一个限制y，意味着皮格能从点x到任何一个在区间[x,y]的点，包括边界。

Determine if Pig can visit the friend using teleports only, or he should use his car.

请计算出皮格能否只使用意念传送点去拜访他的朋友，否则他应该开他的车。

## 输入 / Input

The first line contains two integers n and m (1 ≤ n ≤ 100, 1 ≤ m ≤ 100) — the number of teleports and the location of the friend's house.

第一行包括两个整数n和m(1 ≤ n ≤ 100, 1 ≤ m ≤ 100) - 意念传送点的数量和朋友的坐标

The next n lines contain information about teleports.

接下来n行是关于意念传送点的信息

The i-th of these lines contains two integers ai and bi (0 ≤ ai ≤ bi ≤ m), where ai is the location of the i-th teleport, and bi is its limit.

这些行中的第i行包括两个数ai和bi (0 ≤ ai ≤ bi ≤ m)， ai是第i个传送点的位置，bi是它的限制。


It is guaranteed that ai ≥ ai - 1 for every i (2 ≤ i ≤ n).
数据保证对每一个i， ai ≥ ai - 1 (2 ≤ i ≤ n)

## 输出 / Output

Print "YES" if there is a path from Pig's house to his friend's house that uses only teleports, and "NO" otherwise.

输出"YES" 当这里只用传送点有一条路从皮格的家到他朋友那里，否则输出"NO".

You can print each letter in arbitrary case (upper or lower).

输出不区分大小写

## 样例 / Example

### input1

3 5

0 2

2 4

3 5

### output1

YES

### input2

3 7

0 4

2 5

6 7

### output2

NO

## 答案 / Solutions
[Writeup](https://github.com/SIST-Manual/easy_Visiting-a-Friend/blob/master/writeup.cpp)

[Python](https://github.com/SIST-Manual/easy_Visiting-a-Friend/blob/master/solve.py)

[Cpp](https://github.com/SIST-Manual/easy_Visiting-a-Friend/blob/master/solve.cpp)
