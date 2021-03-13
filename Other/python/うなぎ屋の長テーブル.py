# 座席数とグループの数の入力を受け取り、int型に変換
num_s, num_g = [int(x) for x in input().split()]

# 長さがnum_s、要素が全てFalseのリストを定義
seats = [False] * num_s

# グループの数だけ繰り返す
for _ in range(num_g): 
    # 人数と始点の入力を受け取り、int型に変換
    num, init = [int(x) for x in input().split()]

    # リストをスライスし、Trueが無いか判定
    if not True in seats[init - 1 : init + num - 1]: # Trueが無い時
        # 全てTrueに変換
        seats[init - 1 : init + num - 1] = [True] * num

# seatsの中のTrueをカウントして出力
print(seats.count(True))