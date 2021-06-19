=begin
5 3
1 said 3 was an honest person.
2 said 3 was a liar.
5 said 4 was an honest person.

3 4
3 said 2 was a liar.
3 said 1 was a liar.
1 said 1 was a liar.
3 said 2 was an honest person.


=end

# n, m, h, k

class Liar
  attr_accessor :n, :m, :saids, :be_saids

  def initialize(n, m)
    @n = n.to_i
    @m = m.to_i

    # 言及状況を保存
    @saids = Hash.new { |h, k| h[k] = {} }

    # 言及されている状況
    @be_saids = {}
    @process_count = 0

  end


  # 実行用のクラス・関数
  class << self

    def run(input)
      # 下は、n, mも含めて、各行ごとに入力をしている
      # 各行の入力値は、lines[要素番号]で指定して呼び出せる
      lines = input.split("\n")

      # lines[0]に当たる行に、nとmに格納する値が入っているため、下記の処理を行う
      n, m = lines[0].split(' ').map(&:to_i)

      # liarという[n][m]の二次元配列を作成?
      liar = Liar.new(n, m)

      # mの数だけ、供述が行われる
      m.times do |i|
        # memo_textに、lines[i+1]の内容を代入
        memo_text = lines[i + 1]

        # memo_textをrun関数にかけている
        # liar.runがfalseだった場合、breakする
        unless liar.run(memo_text)
          break
        end

      end

      # 最終的に残ったものを出力
      # 出力されるのは、矛盾しない証言の組み合わせ数を2進数で表現した場合の桁数となる
      # 矛盾しない組み合わせがない場合、S=0の場合、-1を出力する
      liar.output.to_s
    end
  end


  #
  def run(memo_text)

    # 変数memoに、load_memo(memo_text)の結果を格納する
    # 下記のif文は、memoが1以上である場合に処理を行うことを表す
    if (memo = load_memo(memo_text))

      # 関数valid?にmemoをかけて、trueだった場合
      if valid?(memo)
        store(memo)
        return true
      else
        @ret = -1
        return false
      end

    end

  end


  #
  def valid?(memo)
    # 自分を嘘付きだと言えない
    if memo[0] == memo[1] && memo[2] == :l
      return false
    end

    # 既に言及した内容と逆のことを言及することは矛盾する
    if (say = @saids.dig(memo[0], memo[1])) && say != memo[2]
      return false
    end

    true
  end


  #
  def store(memo)
    @saids[memo[0]][memo[1]] = memo[2]
    @be_saids[memo[1]] = memo[0]
    @process_count += 1
  end


  #
  def output
    # 処理成功ごとに場合の数が2ずつ減る
    # 欲しいものは、想定出来る組み合わせ総数の、2進数表現の桁数
    @ret || (2**(@n - @process_count)).to_s(2).size
  end


  #
  def load_memo(memo_text)
  
    # ret = ret で囲った内容は、囲いの中で条件を満たしたものをreturnする機能を持つ
    ret =
      # =~ は正規表現のメソッド、=~ の右と左が一致しているかどうかを表す
      if /(?<speaker>\d) said (?<target>\d) was an honest person/ =~ memo_text
        # memo[0]にspeaker、memo[1]にtarget、memo[2]には :h か :l を格納する
        # :h は honest 正直者、:l はliar 嘘つきを表す
        [speaker.to_i, target.to_i, :h]

      elsif /(?<speaker>\d) said (?<target>\d) was a liar/ =~ memo_text
        [speaker.to_i, target.to_i, :l]
      end

    ret
  end

end


if $PROGRAM_NAME == __FILE__
  input = STDIN.readlines.join('')
  puts Liar.run(input)
end
