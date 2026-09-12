次のプログラムを自分で書いてください。

問題

for文を使って、

1
2
3
4
5

と表示するプログラムを書いてください。

条件：

・int型の変数 count を使う
・for文を使う
・printfでcountを表示する
・1から開始する
・5まで繰り返す

#include <stdio.h>からreturn 0;まで、プログラム全体を書いてください。


解答：
#include <stdio.h>

int main(void)
{
  for (int count = 1; count <= 5; count++) {
    printf("%d\n", count);
  }

  return 0;
}


==============================================================================


コード問題2

for文を使って、

10
8
6
4
2

と表示するプログラムを書いてください。

条件：

int countを使う
10から開始する
2ずつ減らす
2まで表示する
for文を使う

#include <stdio.h>からreturn 0;まで、プログラム全体を書いてください。


解答：
#include <stdio.h>

int main(void)
{
  for (int count = 10; count >= 2; count-= 2) {
    printf("%d\n", count);
  }

  return 0;
}


=============================================================================


コード問題3

for文を使って1から10まで繰り返してください。

ただし、countが7になったらbreakでループを終了してください。

期待する実行結果：

1
2
3
4
5
6

条件：

int countを使う
for文を使う
if文を使う
breakを使う
count == 7で終了する

#include <stdio.h>からreturn 0;まで書いてください。


解答：
#include <stdio.h>

int main(void)
{
  for (int count = 1; count <= 10; count++) {

    if (count == 7) {
        break;
    }

    printf("%d\n", count);
  }

  return 0;
}


=======================================================================


コード問題4

for文で1から10まで繰り返してください。

ただし、countが5のときだけcontinueを使って表示を飛ばしてください。

期待する実行結果：

1
2
3
4
6
7
8
9
10

条件は、

・int countを使う
・for文を使う
・if文を使う
・continueを使う
・count == 5 のときだけ表示しない

です。

#include <stdio.h>からreturn 0;まで書いてください。


解答：
#include <stdio.h>

int main(void)
{
  for (int count = 1; count <= 10; count++) {

    if (count == 5) {
        continue;
    }

    printf("%d\n", count);
  }

  return 0;
}


=====================================================================


問題5

次のコードの実行結果を答えてください。

#include <stdio.h>

int main(void)
{
    for (int count = 1; count <= 6; count++) {

        if (count == 2) {
            continue;
        }

        if (count == 5) {
            break;
        }

        printf("%d\n", count);
    }

    return 0;
}

表示される数字を上から順番に書いてください。


解答：
1,3,4



=====================================================================


問題6

次のコードの実行結果を答えてください。

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 2; i++) {

        for (int j = 1; j <= 3; j++) {
            printf("%d %d\n", i, j);
        }

    }

    return 0;
}

表示される内容を、上から順番に書いてください。


解答：
1,1
1,2
1,3
2,1
2,2
2,3



=================================================================


問題7

for文を2つ使って、次のように表示するプログラムを書いてください。

1 1
1 2
2 1
2 2
3 1
3 2

条件：

外側の変数はi
内側の変数はj
iは1〜3
jは1〜2
二重for文を使う
printf("%d %d\n", i, j);を使う

#include <stdio.h>からreturn 0;まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 3; i++) {

    for (int j =1; j <= 2; j++) {
        printf("%d %d\n", i,j);
    }

  }

  return 0;
}



=================================================================


問題8

次のコードの実行結果を答えてください。

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++) {

            if (j == 2) {
                continue;
            }

            printf("%d %d\n", i, j);
        }
    }

    return 0;
}

表示される内容を、上から順番に書いてください。



解答：
1,1
1,3
2,1
2,3
3,1
3,3


===================================================================


問題9

次のコードの実行結果を答えてください。

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 3; j++) {

            if (j == 2) {
                break;
            }

            printf("%d %d\n", i, j);
        }
    }

    return 0;
}

ポイントは、内側のforにあるbreak;は、内側のループだけを終了するということです。

表示される内容を、上から順番に書いてください。


解答：
1,1
1,2
2,1
2,2
3,1
3,2

-----------

解答：
1,1
2,1
3,1


=================================================================


問題10

次のコードの実行結果を答えてください。

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 4; j++) {

            if (j == 2) {
                continue;
            }

            if (j == 4) {
                break;
            }

            printf("%d %d\n", i, j);
        }
    }

    return 0;
}

表示される内容を、上から順番に書いてください。


解答：
1 1
1 3
2 1
2 3
3 1
3 3


==================================================================


問題11

for文を使って、1から10まで繰り返してください。

ただし、

3のときはcontinueで表示を飛ばす
8のときはbreakでループを終了する

ようにしてください。

期待する実行結果は、

1
2
4
5
6
7

です。

#include <stdio.h>からreturn 0;まで、プログラム全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 10; i++) {

      if (i == 3) {
        continue;
      }

      if (i == 8) {
        break;
      }
  }

  return 0;
}


-------------------------------------

解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 10; i++) {

      if (i == 3) {
        continue;
      }

      if (i == 8) {
        break;
      }

      printf("%d\n", i);
  }

  return 0;
}



===================================================================


問題12です。今回は自分の言葉で説明する問題です。

次の3つを説明してください。

for文はどんなときに使うか
breakとcontinueの違い
二重ループとは何か

コードは書かなくて大丈夫です。


解答：
for文はどんなときに使うか
→何回繰り返すかがある程度決まっている時に使う処理

breakとcontinueの違い
breakはそれをやらず前に終わる。continueはそれを回避する。

二重ループとは何か
for文の中にfor文がある処理の事を言う。

---------------------------------------------------------

解答：
for文はどんなときに使うか
→何回繰り返すかがある程度決まっている時に使う処理

breakとcontinueの違い
breakはbreakが2と指定があるとして、2の時点でループを修了する。
continueはcontinueが2と指定があるとして、2の処理を回避して次に行く。

二重ループとは何か
for文の中にfor文がある処理の事を言う。



=================================================================



最終問題

次の条件を満たすプログラムを書いてください。

外側のfor文でiを1から3まで繰り返す
内側のfor文でjを1から5まで繰り返す
j == 2のときはcontinueでその回を飛ばす
j == 4のときはbreakで内側のループを終了する
それ以外ではiとjを表示する

期待する実行結果は、

1 1
1 3
2 1
2 3
3 1
3 3

です。

#include <stdio.h>からreturn 0;まで、プログラム全体を書いてください。

さらにコードの下に、

なぜj = 2は表示されず、j = 4以降も表示されないのか

を自分の言葉で説明してください。




解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 3; i++) {

      for (int j = 1; i <= 5; j++) {

        if (j == 2) {
          continue;
        }

        if (j == 4) {
          break;
        }
      }

    printf("%d %d", i,j);
  }

  return 0;
}


なぜj = 2は表示されず、j = 4以降も表示されないのか
j=2はcontinueと指定があり、continueは指定されてあるj=2を回避し次に行くから表示されない。
j=4はbreakと指定があり、breakは指定されてあるj=4の処理時点でループを終了するから、それ以降表示されない。


--------------------------------------------


解答：
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 5; j++) {

      if (j == 2) {
        continue;
      }

      if (j == 4) {
        break;
      }

      printf("%d %d\n", i,j);
    }
  }

  return 0;
}


なぜj = 2は表示されず、j = 4以降も表示されないのか
j=2はcontinueと指定があり、continueは指定されてあるj=2を回避し次に行くから表示されない。
j=4はbreakと指定があり、breakは指定されてあるj=4の処理時点でループを終了するから、それ以降表示されない。

