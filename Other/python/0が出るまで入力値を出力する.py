import io
import sys

# int(input())
# list(map(int, input().split()))
# list(input())
# num_s, num_g = [int(x) for x in input().split()]

# print(f"{h}:{m}:{s}")

# import sys
# a = []
# for l in sys.stdin:
#     a.append(int(l))

_INPUT = """\
3
5
11
7
8
19
0
"""
sys.stdin = io.StringIO(_INPUT)

num = 1
while True:
    x = int(input())
    if x == 0: break
    print ("Case {0}: {1}".format(num,x))
    num += 1
