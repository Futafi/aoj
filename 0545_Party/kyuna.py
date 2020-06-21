# http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2859754#1
# インデントをスペース1個にして文字数の削減とスペースを評価する時間の削減
def s():
 # defしたほうが速くなるのでdefしてる。
 import sys
 # readlineのためにimportしてる。
 # 下の行と合わせてもfrom sys.stdin import readline as r より文字数が3、4文字ぐらい少ない。
 r=sys.stdin.readline
 # 代入したほうが速くなるので代入している。
 for e in iter(r,'0\n'):
  # イテレータとして"0\n"がくるまで回してる。
  # eにはstr(n)が代入される。
  # 最後の2行0\n0\nのうち最初の0\nを読み込んだ段階で止まるようにしてreadline一行分高速化してる。
  R=[[]for _ in[0]*-~int(e)]
  # nの補数の-1倍回（n+1回）ループを回し、二次元リストを作っている。
  # [[], [], [], ...]みたいなの。len(R)=n+1
  # []は記号として処理されて文字とくっつけても問題がないので、スペース1つ分文字数を節約できる（in [0]とくらべて）。 
  for _ in[0]*int(r()):
   # m回ループを回している。
   # 上のfor文と同じくスペース1つ分節約。
   a,b=map(int,r().split())
   # a, bを代入。
   # リスト内包表記より文字数が少ない。
   R[a]+=[b];R[b]+=[a]
   # 2次元リストのa番目にbをb番目にaを追加している。
   # つまりはaとbのの友達リストを作っている。
   # ;で文を繋げれるのを利用。
   # 正直改行してもいいと思うんだけど;を使った理由はよくわからない
   # （もしかしたら;は1文字で改行は\nスペース3つで4文字だからかもしれない。）
  for m in R[1][:]:R[1]+=R[m]
   # for文やif文などの実行部が1行のとき改行しなくてもOKなのを利用して\n分削減。
   # 1番（あなた）の友達をmとしてループを回している。
   # ただしこのとき for m in R[1] はだめ。
   # なぜならfor内部でR[1]に+=しているのでR[1]だと無限ループしちゃう。
   # R[1][:]だと先にR[1]を評価、というかコピーというかしているから問題ない。
   # a=[1,2,3];b=aとa=[1,2,3];b=a[:]との関係みたいな。
   # R[1]+=R[m]あなたの友達に友達の友達を追加している。（リストの結合）
  print(len({*R[1]}-{1}))
  # 1の友達を{}にアンパック代入して1番(あなた)のみの集合と差集合をとって、その長さをプリントしている。
  # 差集合だからset(R[1])に1が入っているか入っていないかによらない。
  # アンパックせずに{R[1]}だとリストをハッシュ化しようとしてunhashableエラーが出ると思う。
s()
#  呼び出してる。
