import io
import sys

# int(input())
# list(map(int, input().split()))
# list(input())
# num_s, num_g = [int(x) for x in input().split()]

# print(f"{h}:{m}:{s}")

_INPUT = """\
5 4 2 2 1
"""
sys.stdin = io.StringIO(_INPUT)

# (W, H)は(0, 0)を起点とした長方形の対角線の座標
# (x, y)は、半径rの円の中点の座標(マイナスも想定する)
W, H, x, y, r= [int(x) for x in input().split()]

if x - r < 0 or x + r > W:
    print("No") 
elif y - r < 0 or y + r > H:
    print("No")
else:
    print("Yes")
