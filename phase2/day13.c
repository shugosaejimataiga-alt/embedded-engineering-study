第1問：コードを書く

次の仕様を満たすCプログラムを書いてください。

int temperature = 28;

temperature が 30以上
→ 「HOT」と表示

temperature が 25以上30未満
→ 「NORMAL」と表示

temperature が 25未満
→ 「COLD」と表示
条件

今回は、

if
else if
else

をすべて使用してください。

#include <stdio.h> から return 0; まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int temperature = 28;

  if (temperature >= 30) {
      printf("HOT\n");
  } else if (temperature >= 25) {
      printf("NORMAL\n");
  } else {
      printf("COLD\n");
  }

  return 0;
}



=========================================================================================



第2問：コードを書く

次の仕様を満たすCプログラムを書いてください。

int mode = 2;

mode が 0
→ 「STOP」と表示

mode が 1
→ 「AUTO」と表示

mode が 2
→ 「MANUAL」と表示

それ以外
→ 「ERROR」と表示
条件

今回は必ず、

switch
case
break
default

を使ってください。

#include <stdio.h> から return 0; まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int mode = 2;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;

    case 1:
        printf("AUTO\n");
        break;

    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR\n");
        break;
  }

  return 0;
}



====================================================================================



第3問：コードを書く

次の条件を満たすプログラムを書いてください。

1から5まで順番に表示する

ただし、3だけは表示しない
条件

必ず、

for
continue

を使ってください。

実行結果は次のようになります。

1
2
4
5

#include <stdio.h> から return 0; まで、プログラム全体を書いてください。




解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 5; i++) {

    if (i == 3) {
      continue;
    }

    printf("%d\n", i);
  }

  return 0;
}



=================================================================================



第4問：コードを書く

次の条件を満たすプログラムを書いてください。

5
4
3
2
1

と順番に表示してください。

条件

必ず、

while

を使ってください。

開始値は、

int count = 5;

とします。

#include <stdio.h> から return 0; まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int count = 5;

  while (count >= 1) {
      printf("%d\n", count);
      count--;
  }

  return 0;
}



================================================================================



第5問：ビット演算の復習です。

次のコードについて答えてください。

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 12;
    uint8_t b = 10;

    printf("%d\n", a & b);

    return 0;
}

12 と 10 を8bitの2進数で表し、a & b の結果が何になるか答えてください。

途中のビット計算も書いてください。



解答：
12 = 00001100
10 = 00001010

a & b = 00001000



===============================================================================



第6問：基本文法の組み合わせです。

次の仕様を満たすプログラムを書いてください。

int temperature = 32;
int mode = 1;

処理は次のとおりです。

mode が 0
→ 「STOP」と表示

mode が 1
→ temperature が 30以上なら「FAN ON」
→ temperature が 30未満なら「FAN OFF」

mode が 2
→ 「MANUAL」と表示

それ以外
→ 「ERROR」と表示
条件

今回は、

switch
if

を組み合わせて使ってください。

#include <stdio.h> から return 0; まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int temperature = 32;
  int mode = 1;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;

    case 1:
      if (temperature >= 30) {
          printf("FAN ON\n");
      } else {
          printf("FAN OFF\n");
      }
      break;

    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR\n");
        break;
  }

  return 0;
}



============================================================================



第1問です。

次の16進数を、8bitの2進数に変換してください。

0x0A

ヒント：

0 → 0000
A → 1010

この2つをつなげて考えます。


解答：
00001010



============================================================================


第2問です。

次の16進数を、8bitの2進数に変換してください。

0x12

ヒント：

1 → 0001
2 → 0010

この2つをつなげて考えてください。


解答：
12=18=00010010



============================================================================


第3問です。

次の16進数を、10進数と8bitの2進数に変換してください。

0x2F

ヒント：

F = 15
2 → 0010
F → 1111

途中の計算も書いてください。


解答：
0x2F = 16の1乗*2 + 16の0乗*15 = 47 = 00101111



============================================================================



16進数リテラルの第4問です。

次のコードについて答えてください。

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t status = 0x05;

    printf("%d\n", status);

    return 0;
}

0x05 を、

10進数
8bitの2進数

に変換してください。

途中の計算も書いてください。



解答：
0x05 = 16の1乗*0+16の0乗*5 = 5 = 00000101 



============================================================================



16進数リテラルの第5問です。

次のコードについて答えてください。

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t status = 0x05;

    printf("%d\n", status & 0x01);

    return 0;
}

次の3つを書いてください。

1. 0x05 を8bitの2進数にする
2. 0x01 を8bitの2進数にする
3. status & 0x01 の結果を求める

途中のビット計算も書いてください。



解答：
1. 0x05 を8bitの2進数にする
00000101

2. 0x01 を8bitの2進数にする
00000001

3. status & 0x01 の結果を求める
00000101
00000001
---------
00000001


============================================================================



最終問題

次の変数を使用します。

int temperature = 32;
int mode = 1;
uint8_t status = 0x01;

仕様は以下です。

mode が 0
→ 「STOP」と表示

mode が 1
→ status の bit0 が 1 なら温度を判定する

    temperature が 30以上
    → 「FAN ON」

    temperature が 25以下
    → 「FAN OFF」

    temperature が 26〜29
    → 「FAN KEEP」

→ status の bit0 が 0 なら
    「SENSOR ERROR」と表示

mode が 2
→ 「MANUAL」と表示

それ以外
→ 「ERROR」と表示
使用するもの

必ず以下を使用してください。

#include <stdio.h>
#include <stdint.h>

switch
if / else if / else
ビット演算 &

bit0の確認は、これまで学習したビット演算を使います。

status = 00000001
          ↑
        bit0

#include から return 0; まで、プログラム全体を自力で書いてください。



解答：
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  int temperature = 32;
  int mode = 1;
  uint8_t status = 0x01;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;

    case 1:
      if (status == 0x01) {

        if (temperature >= 30) {
          printf("FAN ON\n");
        } else if (temperature <= 25) {
          printf("FAN OFF\n");
        } else {
          printf("FAN KEEP\n")
        }

      } else if (status == 0x00) {
          printf("SENSOR ERROR\n");
      }
      break;
    
    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR");
        break;
  }

  return 0;
}

-----------------------------------

解答：
#include <stdio.h>
#include <stdint.h>

int main(void)
{
  int temperature = 32;
  int mode = 1;
  uint8_t status = 0x01;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;

    case 1:
      if ((status & 0x01) != 0) {

        if (temperature >= 30) {
          printf("FAN ON\n");
        } else if (temperature <= 25) {
          printf("FAN OFF\n");
        } else {
          printf("FAN KEEP\n");
        }

      } else {
          printf("SENSOR ERROR\n");
      }
      break;
    
    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR");
        break;
  }

  return 0;
}


===========================================================================


次のコードについて、自分の言葉で説明してください。

if ((status & 0x01) != 0) {
    printf("SENSOR OK\n");
}

説明してほしいのはこの3点です。

0x01 は2進数で何を表しているか
status & 0x01 で何をしているか
!= 0 を付ける理由

自分の言葉でまとめてください。


解答：
0x01 は2進数で何を表しているか
00000001

status & 0x01 で何をしているか
2進数で1がある桁がどこかを解いている。

!= 0 を付ける理由
0ではないところ = 1であるところというのを定義する為に付けている

----------------------------------------------------------

解答：
0x01 は2進数で何を表しているか
00000001

status & 0x01 で何をしているか
/* bit0の桁が1であるか確認している。&は双方が1であると解が1になるためbit0が1である0x01とstatusを&でbit演算をする */

!= 0 を付ける理由
/* (status & 0x01)の解に対して0ではない解を真、0である解を偽と条件として書いている。*/


========================================================================



自分の言葉で説明するテスト第2問です。

次のコードについて説明してください。

switch (mode) {
    case 0:
        printf("STOP\n");
        break;

    case 1:
        printf("AUTO\n");
        break;

    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR\n");
        break;
}

説明する内容はこの3点です。

switch (mode) は何をしているか
case は何を意味しているか
break が必要な理由


解答：
switch (mode) は何をしているか
()の中にあるmodeが何かによって、switchの条件式が働くため、そのmodeが何かを伝えている。

case は何を意味しているか
caseはmodeと同じcaseが動く。caseはそれぞれ別の動きが違う。

break が必要な理由
breakがないと終わらない。case1でbreakがなければcase2も動いてしまう。



========================================================================



自分の言葉で説明するテスト第3問です。

次のコードについて説明してください。

if (temperature >= 30) {
    printf("HOT\n");
} else if (temperature >= 25) {
    printf("NORMAL\n");
} else {
    printf("COLD\n");
}

説明する内容はこの3点です。

if は何をしているか
else if はどんなときに調べられるか
else はどんなときに実行されるか


解答：
if は何をしているか
temperature >= 30という条件の元、条件に適合していた場合としていなかった場合を作っている。

else if はどんなときに調べられるか
前のifが条件に適合していなかった場合の時に調べられる。

else はどんなときに実行されるか
前のifとelse ifが双方条件に適合していなかった場合に実行される。



=====================================================================


自分の言葉で説明するテスト第4問・最終問題です。

次のコードについて説明してください。

#include <stdio.h>

int main(void)
{
    int count = 3;

    while (count >= 1) {
        printf("%d\n", count);
        count--;
    }

    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
    }

    return 0;
}

説明する内容はこの4点です。

while 文はどんなときに使うか
count-- が必要な理由
for 文はどんなときに使うか


while と for の違い


解答：
while 文はどんなときに使うか

count-- が必要な理由
それがないと無限ループをしてしまうから。

for 文はどんなときに使うか


while と for の違い

-----------------------------------------

1. while文はどんなときに使うか
/*条件が成り立っている間、持続的にやらせたい時*/

2. count-- が必要な理由
それがないと終わりがない無限ループになるから。

3. for文はどんなときに使うか
/*ここから、これまでという上限と下限の回数が定まっている時*/

4. whileとforの違い
/* 前者は条件下では持続的にやらせたい。
   後者は加減と上限の回数が定まっている時に使う。 */