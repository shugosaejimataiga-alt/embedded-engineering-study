
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



=======================================================================


# C-Day23 定着問題 1 / 3

次の条件を満たすCプログラムを作成してください。

- `main`関数で次の変数を用意する
  - `int battery = 40;`
  - `int warning = 0;`
- `checkBattery`という関数を作る
- `battery`は普通の値として関数へ渡す
- `warning`は関数側から変更できるようにする
- `checkBattery`の戻り値はなし
- `battery`が20以下なら`warning`を`1`にする
- それ以外なら`warning`を`0`にする
- 関数プロトタイプを書く
- 最後に`main`関数で`warning`を表示する

初期値では実行結果は次のようになります。

0

コード全体を書いてください。




解答：
#include <stdio.h>

void checkBattery(int battery, int warning);

int main(void)
{
  int battery = 40;
  int warning = 0;

  checkBattery(battery);

  printf("%d\n", warning);

  return 0;
}

void checkBattery(int battery, int warning)
{
  if (battery <= 20) {
    warning = 1;
  } else {
    warning = 0;
  }
}

-----------------------------------------------

解答：
#include <stdio.h>

void checkBattery(int battery, int *p);

int main(void)
{
  int battery = 40;
  int warning = 0;

  checkBattery(battery, &warning);

  printf("%d\n", warning);
}

void checkBattery(int battery, int *p)
{
  if (battery <= 20) {
    *p = 1;
  } else {
    *p = 0;
  }
}



================================================================



# C-Day23 定着問題 2 / 3

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int temperature = 32;`
  - `int fan = 0;`
  - `int alarm = 0;`
- `updateStatus`という関数を作る
- `temperature`は普通の値として関数へ渡す
- `fan`と`alarm`は関数側から変更できるようにする
- `updateStatus`の戻り値はなし
- `temperature`が30以上なら
  - `fan`を`1`
  - `alarm`を`1`
- 30未満なら
  - `fan`を`0`
  - `alarm`を`0`
- 関数プロトタイプを書く
- 最後に`main`関数で`fan`と`alarm`をそれぞれ表示する

初期値では実行結果は次のようになります。

1
1

コード全体を書いてください。




解答：
#include <stdio.h>

void updateStatus(int temperature, int *p1, int *p2);

int main(void)
{
  int temperature = 32;
  int fan = 0;
  int alarm = 0;

  updateStatus(temperature, &fan, &alarm);

  printf("%d\n", fan);
  printf("%d\n", alarm);
}

void updateStatus(int temperature, int *p1, int *p2)
{
  if (temperature >= 30) {
    *p1 = 1;
    *p2 = 1;
  } else {
    *p1 = 0;
    *p2 = 0;
  }
}



==========================================================================



# C-Day23 定着問題 3 / 3

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int sensorValue = 75;`
  - `int status = 0;`
- `judgeSensor`という関数を作る
- `sensorValue`は普通の値として関数へ渡す
- `status`は関数側から変更できるようにする
- `judgeSensor`の戻り値はなし
- `sensorValue`が50以上80以下なら、`status`を`1`にする
- それ以外なら、`status`を`-1`にする
- 関数プロトタイプを書く
- 最後に`main`関数で`status`を表示する

初期値では実行結果は次のようになります。

1

コード全体を書いてください。



解答：
#include <stdio.h>

void judgeSensor(int sensorValue, int *p);

int main(void)
{
  int sensorValue = 75;
  int status = 0;

  judgeSensor(sensorValue, &status);

  printf("%d\n", status);
}

void judgeSensor(int sensorValue, int *p)
{
  if (sensorValue >= 50 && sensorValue <= 80) {
    *p = 1;
  } else {
    *p = -1;
  }
}



==============================================================================


# C-Day23 定着問題 4

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int humidity = 85;`
  - `int dehumidifier = 0;`
  - `int warning = 0;`
- `checkHumidity`という関数を作る
- `humidity`は普通の値として関数へ渡す
- `dehumidifier`と`warning`は関数側から変更できるようにする
- `checkHumidity`の戻り値はなし
- `humidity`が70以上なら
  - `dehumidifier`を`1`
  - `warning`を`1`
- 70未満なら
  - `dehumidifier`を`0`
  - `warning`を`0`
- 関数プロトタイプを書く
- 最後に`main`関数で`dehumidifier`と`warning`をそれぞれ表示する

初期値では実行結果は次のようになります。

1
1

コード全体を書いてください。

※この問題を最初の提出で正解できたら、次のレベルへ進みます。



解答：
#include <stdio.h>

void checkHumidity(int humidity, int *p1, int *p2);

int main(void)
{
  int humidity = 85;
  int dehumidifier = 0;
  int warning = 0;

  checkHumidity(humidity, &dehumidifier, &warning);

  printf("%d\n", dehumidifier);
  printf("%d\n", warning);
}

void checkHumidity(int humidity, int *p1, int *p2)
{
  if (humidity >= 70) {
    *p1 = 1;
    *p2 = 1;
  } else {
    *p1 = 0;
    *p2 = 0;
  }
}



===================================================================================



# C-Day23 定着問題：次レベル 1 / 3

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int a = 18;`
  - `int b = 7;`
  - `int sum = 0;`
  - `int difference = 0;`
- `calculate`という関数を作る
- `calculate`の戻り値はなし
- `a`と`b`の値を使って計算する
- 関数の中から、`main`関数の
  - `sum` に `a + b`
  - `difference` に `a - b`
  を保存する
- 関数プロトタイプを書く
- 最後に`main`関数で`sum`と`difference`をそれぞれ表示する

初期値での実行結果：

25
11

コード全体を書いてください。




解答：
#include <stdio.h>

void calculate(int a, int b, int *p1, int *p2);

int main(void)
{
  int a = 18;
  int b = 7;
  int sum = 0;
  int difference = 0;

  calculate(int a, int b, &sum, &difference);

  printf("%d\n", sum);
  printf("%d\n", difference);
}

void calculate(int a, int b, int *p1, int *p2)
{
  *p1 = a + b;
  *p2 = a - b;
}



====================================================================================


# C-Day23 定着問題：次レベル 2 / 3

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int width = 12;`
  - `int height = 5;`
  - `int area = 0;`
  - `int perimeter = 0;`
- `calculateRectangle`という関数を作る
- `width`と`height`を使って計算する
- 関数の中から、`main`関数の
  - `area` に長方形の面積
  - `perimeter` に長方形の周囲の長さ
  を保存する
- `calculateRectangle`の戻り値はなし
- 関数プロトタイプを書く
- 最後に`main`関数で`area`と`perimeter`をそれぞれ表示する

初期値での実行結果：

60
34

コード全体を書いてください。




解答：
#include <stdio.h>

void calculateRectangle(int width, int height, int *p1, int *p2);

int main(void)
{
  int width = 12;
  int height = 5;
  int area = 0;
  int perimeter = 0;

  calculateRectangle(width, height, &area, &perimeter);

  printf("%d\n", area);
  printf("%d\n", perimeter);

  return 0;
}

void calculateRectangle(int width, int height, int *p1, int *p2)
{
  *p1 = width * height;
  *p2 = width * 2 + height * 2;
}



=================================================================================


# C-Day23 定着問題：次レベル 3 / 3

次の条件を満たすCプログラムを書いてください。

- `main`関数で次の変数を用意する
  - `int temperature = 34;`
  - `int fanSpeed = 0;`
  - `int warning = 0;`
- `controlTemperature`という関数を作る
- `temperature`を使って判定する
- 関数の中から、`main`関数の`fanSpeed`と`warning`を変更する
- `controlTemperature`の戻り値はなし
- `temperature`が35以上なら
  - `fanSpeed`を`3`
  - `warning`を`1`
- `temperature`が30以上35未満なら
  - `fanSpeed`を`2`
  - `warning`を`0`
- 30未満なら
  - `fanSpeed`を`0`
  - `warning`を`0`
- 関数プロトタイプを書く
- 最後に`main`関数で`fanSpeed`と`warning`をそれぞれ表示する

初期値での実行結果：

2
0

コード全体を書いてください。

※この問題を最初の提出で正解できたら、このレベルは合格です。




解答：
#include <stdio.h>

void controlTemperature(int temperature, int *p1, int *p2);

int main(void)
{
  int temperature = 34;
  int fanSpeed = 0;
  int warning = 0;

  controlTemperature(temperature, &fanSpeed, &warning);

  printf("%d\n", fanSpeed);
  printf("%d\n", warning);

  return 0;
}

void controlTemperature(int temperature, int *p1, int *p2)
{
  if (temperature >= 35) {
    *p1 = 3;
    *p2 = 1;
  } else if (temperature >= 30) {
    *p1 = 2;
    *p2 = 0;
  } else {
    *p1 = 0;
    *p2 = 0;
  }
}