# cs211-pa1-first
Finding Mersenne Prime (20 points)
2.1 Introduction
In this part of the assignment, you’ll be finding the Mersenne prime of a perfect
number.
2.1.1 What is a Perfect Number + Mersenne prime number
A perfect number is a number where the sum of the divisors equals the number.
For example, 6 is a perfect number because the sum of its divisors besides itself
is 6 (6 = 3 + 2 + 1). Another example is 28 (28 = 14 + 7 + 4 + 2 + 1)
There’s a fascinating correlation to observe, where given a perfect number,
x, x = 2p−1 × (2p − 1), where 2p − 1 is a Mersenne prime number. In this part,
given a number, you will find if it’s a perfect sum and figure out the Mersenne
prime.
2.2 Sample Input/Output
$ ./first 6
3
$ ./first 5
-1
$
If the number is perfect, you print out the Mersenne prime. If it’s not perfect
or the Mersenne prime doesn’t exist, print out -1.
2.2.1 Explanation
$ ./first 6
First, we need to figure out if 6 is a perfect number.
• First, we find all the divisors of 6 besides 6: 1,2,3
• We add them all up, and determine if the sum equals 6
– 1 + 2 + 3 = 6
– 6 == 6, so we know that this is a perfect number.
• Next, we need to see if there exists a p, such that 2p−1 × (2p − 1) = 6
• we can test all values of p, to find that p = 2: 22−1 ×(22 −1) = 21 ×(4−1) =
6
• Finally, we can calculate, using p = 2, 2p − 1 = 22 − 1 = 3, which is our
mersenne prime number.
5
$ ./first 5
First, we need to figure out if 6 is a perfect number.
• First, we find all the divisors of 5 besides 5: 1
• We add them all up, and determine if the sum equals 5
• 5 is not equal to 1, so it’s not a perfect number, so we can print -1.
2.3 Assumptions
• You may assume that the input number is positive and greater than zero.
