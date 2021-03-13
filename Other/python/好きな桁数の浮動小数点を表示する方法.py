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

"""
２つの整数 a と b を読み込んで、以下の値を計算するプログラムを作成して下さい：

a ÷ b ： d (整数)
a ÷ b の余り ： r (整数)
a ÷ b ： f (浮動小数点数)

"""

_INPUT = """\
3 2
"""

sys.stdin = io.StringIO(_INPUT)

a, b = [int(x) for x in input().split()]

d = a // b
r = a % b
f = a / b

# "{:.5f}".format(f)のところで、小数点以下5桁まで表示させられる
print(d, r, "{:.5f}".format(f))

