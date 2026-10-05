
問題1
次の条件を満たすCプログラムを、雛形なしで最初から全部書いてください。
条件
- main関数で int score = 60; を用意する
- setScore という関数を作る
- setScore の戻り値は void
- setScore に score のアドレスを渡す
- setScore の中で score の値を 90 に変更する
- 関数プロトタイプを書く
- 最後に main関数で score を表示する

実行結果：
90



解答：
#include <stdio.h>

void setScore(int *p);

int main(void)
{
  int score = 60;

  setScore(&score);

  printf("%d\n", score);

  return 0;
}

void setScore(int *p)
{
  *p = 90;
}



=========================================================================================



問題2
次の条件を満たすCプログラムを書いてください。
- main関数で int temperature = 20; を用意する
- setTemperature という関数を作る
- setTemperature の戻り値は void
- setTemperature に temperature のアドレスを渡す
- 関数の中で temperature の値を 35 に変更する
- 関数プロトタイプを書く
- 最後に main関数で temperature を表示する
実行結果：
35

雛形なしで、コード全体を書いてください。



解答：
#include <stdio.h>

void setTemperature(int *p);

int main(void)
{
  int temperature = 20;

  setTemperature(&temperature);

  printf("%d\n", temperature);

  return 0;
}

void setTemperature(int *p)
{
  *p = 35;
}



===================================================================================


問題3
次の条件を満たすCプログラムを書いてください。
- main関数で int count = 5; を用意する
- addOne という関数を作る
- addOne の戻り値は void
- addOne に count のアドレスを渡す
- 関数の中で、元の count の値を 1増やす
- 関数プロトタイプを書く
- 最後に main関数で count を表示する
実行結果：
6

雛形なしで、コード全体を書いてください。



解答：
#include <stdio.h>

void addOne(int *p);

int main(void)
{
  int count = 5;

  addOne(&count);

  printf("%d\n", count);

  return 0;
}

void addOne(int *p)
{
  *p += 1;
}



==============================================================================



問題4：出力引数

1つの関数から、2つの値を変更する練習です。
次の条件を満たすCプログラムを書いてください。

- main関数で以下を用意する
int min = 0;
int max = 0;

- setRangeという関数を作る
- setRangeの戻り値はvoid
- minとmaxのアドレスをsetRangeへ渡す
- 関数の中で
  - minを10
  - maxを100
    に変更する
- 関数プロトタイプを書く
- 最後にmain関数で両方表示する
実行結果：
10
100

雛形なしで、コード全体を書いてください。



解答：
#include <stdio.h>

void setRange(int *p1, int *p2);

int main(void)
{
  int min = 0;
  int max = 0;

  setRange(&min, &max);

  printf("%d\n", min);
  printf("%d\n", max);

  return 0;
}

void setRange(int *p1, int *p2)
{
  *p1 = 10;
  *p2 = 100;
}



============================================================================



最終問題
次の条件を満たすCプログラムを書いてください。

- main関数で以下を用意する
int temperature = 25;
int fan = 0;

- controlFanという関数を作る
- controlFanの戻り値はvoid
- temperatureは普通の値として渡す
- fanはアドレスを渡す
- temperatureが30以上なら、関数内でfanを1にする
- 30未満なら、fanを0にする
- 関数プロトタイプを書く
- 最後にmain関数でfanを表示する
今回は最初の値が、
int temperature = 25;

なので、実行結果は、
0

です。

雛形なしで、コード全体を書いてください。



解答：
#include <stdio.h>

void controlFan(int temperature, int *p);

int main(void)
{
  int temperature = 25;
  int fan = 0;

  controlFan(temperature, &fan);

  printf("%d\n", fan);

  return 0;
}

void controlFan(int temperature, int *p)
{
  if (temperature >= 30) {
    *p = 1;
  } else {
    *p = 0;
  }
}