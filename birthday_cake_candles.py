#problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem


import sys

def birthdayCakeCandles(n, ar):
    max_height=max(ar)
    check=sum(ar[i]==max_height for i in range(n))
    return check
    
    # Complete this function

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
result = birthdayCakeCandles(n, ar)
print(result)
