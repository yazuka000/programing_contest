import io
import sys

# int(input())
# list(map(int, input().split()))
# list(input())
# num_s, num_g = [int(x) for x in input().split()]

# print(f"{h}:{m}:{s}")

_INPUT = """\
3 8 1
"""
sys.stdin = io.StringIO(_INPUT)

a, b, c = [int(x) for x in input().split()]

# 1番目と2番目を比較して、２番目のほうが小さかった場合、２番の数字を１番に代入
if a > b:
    x = b
    y = a
# 1番の数字と３番の数字を比較して、３番のほうが小さかった場合、３番の数字を１番に代入
elif a > c:
    x = c
    y = a
else:
    x = a

# 2番の数字と３番の数字を比較して、３番のほうが小さかった場合、３番の数字を１番に代入
if c > b:
    z = c
else:
    z = b

print(f"{x} {y} {z}")
