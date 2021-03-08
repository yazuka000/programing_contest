import io
import sys

# int(input())
# list(map(int, input().split()))
# list(input())
# num_s, num_g = [int(x) for x in input().split()]

# print(f"{h}:{m}:{s}")

# while True:

# if x == 0 and y == 0:
#    break

_INPUT = """\
5 14 80
"""

sys.stdin = io.StringIO(_INPUT)

a, b, c = [int(x) for x in input().split()]

x = 0

# range関数は、末尾の数字を処理対象に含めないため、処理させたいなら+1させる
for i in range(a,b+1):
    if c % i == 0:
        x += 1
print(x)

