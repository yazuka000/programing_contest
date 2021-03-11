
# N M
# s

# 1 行目にそれぞれじゃんけんを行う回数を表す整数 N、あなたが出す指の本数の合計を表す整数 M がこの順で半角スペース区切りで与えられます。

# 続いて 2 行目に長さ N の文字列 s が与えられます。
# s の i 番目 (1 ≦ i ≦ N) の文字は i 回目のじゃんけんで相手が出す手を表し、それぞれグーが "G"、チョキが "C"、パーが "P" で表されます。

# じゃんけん回数N、じゃんけんで出す指の合計本数M
N, M = gets.split.map(&:to_i)
# p N
# p M   

# 相手が出してくるじゃんけんの手を配列wazaに挿入
waza = gets.split("")
# p waza
G = waza.count("G")
C = waza.count("C")
P = waza.count("P")


patterns = []
for i in  0..N
    for j in 0..N
        if 2*i + 5*j == M && N - i - j >= 0
            patterns.append([i, j])
        end
    end
end

p patterns

ans = 0
win = 0

#[2, 5].max  # => 5
#列挙した各パターンと、カウントしておいた相手が出す手の数から勝利数の最大値を求めます。

patterns.each do |te1|
    win += [G, te1[1]].min  # 1, 2, *0 # 
    win += [P, te1[0]].min  # 2, *0, 5 # 
    win += [C, N - te1[1] - te1[0]].min # 2, (5-2-0) 3, (5-0-5) *0 # 2, (4-1-1) 2
    #puts te1[0]
        

    #p [P, te2[0]].min
    #p [C, N - te2[1] - te2[0]].min
end

ans = [ans, win].max

puts ans
# puts ans

# 4 7
#CGPC

# 5 10
#GPCPC   
    







