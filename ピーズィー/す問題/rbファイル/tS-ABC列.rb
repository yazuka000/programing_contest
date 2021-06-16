## sample input
## 2 3 6

## 10 123 139

# 入力値k, s, tと、ABCstrのインスタンスabc_strを作成し、
# abc_strのanswer関数で、答えを出力する
def f(k, s, t)
  abc_str = AbcStr.new(k, s, t)
  abc_str.answer
end


class AbcStr
  attr_reader :length

  def initialize(k, s, t)
    # 入力値k, s, t
    @k = k.to_i
    @s = s.to_i
    @t = t.to_i

    # 回答で求められる最初の文字を表す
    @current_pos = @s

    # 回答となる文字列の初期値
    @answer = ''

    prepare_text_length_by_level

  end


  def answer
    # @current_posが@tを上回らない限り、関数resolveを行う
    resolve until @current_pos > @t
    
    @answer
  end


  def resolve
    # kがレベルの値
    level = @k

    # @current_pos = s をlevel_posに格納
    level_pos = @current_pos

    loop do
      # 関数の条件が3つあり、左から処理を行う。trueだった場合、
      # trueになった関数の処理を行い@current_posをプラス1し、loopをbreakする
      if resolve_left(level_pos, level) || resolve_center(level_pos, level) || resolve_right(level_pos, level)
        @current_pos += 1
        break

      else

        if center_pos(level) < level_pos
          # 中央より後ろの位置の場合、#{[k-1]の長さ}B分だけ余分にずらす必要がある
          level_pos -= @length[level - 1]
          level_pos -= 1
        end

        level_pos -= 1
        level -= 1

      end

    end
  end

  # level_posがleft_posと等しくない場合
  def resolve_left(level_pos, level)
    return false unless level_pos == left_pos

    @answer << 'A'
    true
  end

  # level_posがcenter_posと等しくない場合
  def resolve_center(level_pos, level)
    return false unless level_pos == center_pos(level)

    @answer << 'B'
    true
  end

  # level_posがright_posと等しくない場合
  def resolve_right(level_pos, level)
    return false unless level_pos == right_pos(level)

    @answer << 'C'
    true
  end

  # 最も左、先頭のイテレータの0を示す
  def left_pos
    0
  end

  # @lengthの真ん中のイテレータを示す
  def center_pos(level)
    (@length[level] - @length[level] / 2)
  end

  # 最も右、つまり末端のイテレータを示す
  def right_pos(level)
    @length[level]
  end


  private

  # 要求される処理のレベルにおける、文字列の長さを求める
  def prepare_text_length_by_level
    # 配列@lengthの[1]に、3を格納する
    @length = { 1 => 3 }

    # levelは、for文で言うiと同じ意味合い
    (2..@k).each do |level|
      @length[level] = @length[level - 1] * 2 + 3
    end

  end
end


if $PROGRAM_NAME == __FILE__
  k, s, t = STDIN.gets.split(' ')
  puts f(k, s, t)
end
