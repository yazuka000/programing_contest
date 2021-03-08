# 1行目の標準入力では、nに店の座席数、mに入店するグループ数を数値化して入力
n,m = gets.split.map(&:to_i)

# 座席を要素として入力
seats = [*1..n]

m.times do
# グループの数だけ、それ以降の周回処理を行う

    # 2行目以降の標準入力
    # 2行目以降の入力では、aは1グループの構成人数、bは着席開始座席番号を表す
    a,b = gets.split.map(&:to_i)
    
    # もし、座席数nよりも構成人数aと着席開始席番bが多かった場合、座席番号を折り返して着席してもらっている
    if n < b + a - 1 
        guest = [*b..n,*1..(a + b - n - 1)]
        
    # そうでなかった場合、座席番号は折り返さずに座ってもらう
    else 
        guest = [*b..(b + a - 1)]
    end
    
    # 座席数の配列seatsと着席している客数の配列guestを比較して
    # seatsの要素数からguestの要素数を引いた数が、seatsの要素数からグループの構成人数aを引いた数と等しかった場合、
    # seatsからguestの要素数だけ引き算する
    # 条件を満たしていない場合、お客さんは帰ってしまうようなので、処理は書かれていない
    if (seats - guest).size == seats.size - a
        seats -= guest 
    end
end

# 総席数nからseatsの要素数を引いて、最終的に埋まっている席数を出している
puts n - seats.size