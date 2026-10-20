

【C-Day28 練習問題①】

荷物運搬車体のセンサー情報を管理するプログラムを作成してください。

■ 条件

1. 構造体の名前は Sensor とする。

2. 管理する情報
   ・前方の障害物までの距離（cm）
   ・車体の温度（℃）
   ・障害物の検出状態（0：なし、1：あり）

3. 初期状態
   ・距離：100
   ・温度：25
   ・障害物の検出状態：0

4. 初期状態の3つの情報を表示する。

5. その後、以下の状態に変更する。
   ・距離：20
   ・障害物の検出状態：1

6. 変更後の3つの情報を表示する。

■ 出力例

初期状態
距離: 100 cm
温度: 25 ℃
障害物: 0

変更後
距離: 20 cm
温度: 25 ℃
障害物: 1




解答：
#include <stdio.h>

struct Sensor {
  int distance;
  int temperature;
  int obstacles;
};

int main(void)
{
  struct Sensor sensor1 = {100, 25, 0};

  printf("距離: %d cm\n", sensor1.distance);
  printf("温度: %d ℃\n", sensor1.temperature);
  printf("障害物: %d\n", sensor1.obstacles);

  sensor1.distance = 20;
  sensor1.obstacles = 1;

  printf("距離: %d cm\n", sensor1.distance);
  printf("温度: %d ℃\n", sensor1.temperature);
  printf("障害物: %d\n", sensor1.obstacles);

  return 0;
}



============================================================================================



【練習問題②：荷物運搬車体の状態管理】

■ 課題

荷物運搬車体の情報を構造体で管理する
プログラムを作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報
   ・荷物の重量（kg）
   ・バッテリー残量（%）
   ・走行速度（km/h）
   ・走行状態（0：停止、1：走行中）

3. 初期状態
   ・荷物の重量：10
   ・バッテリー残量：90
   ・走行速度：0
   ・走行状態：0

4. 初期状態のすべての情報を表示する。

5. 車体が走行を開始した。
   ・走行速度：5
   ・走行状態：1
   ・バッテリー残量：85

6. 走行開始後のすべての情報を表示する。

7. その後、車体が停止した。
   ・走行速度：0
   ・走行状態：0
   ・バッテリー残量：80

8. 停止後のすべての情報を表示する。

■ 出力例

【初期状態】
重量: 10 kg
バッテリー: 90 %
速度: 0 km/h
走行状態: 0

【走行開始後】
重量: 10 kg
バッテリー: 85 %
速度: 5 km/h
走行状態: 1

【停止後】
重量: 10 kg
バッテリー: 80 %
速度: 0 km/h
走行状態: 0





解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int batteryRemaing;
  int speed;
  int runningSituation;
};

int main(void)
{
  struct Vehicle vehicle1 = {10, 90, 0, 0};

  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %\n", vehicle1.batteryRemaing);
  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);

  vehicle1.speed = 5;
  vehicle1.runningSituation = 1;
  vehicle1.batteryRemaing = 85;

  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);
  printf("バッテリー: %d %\n", vehicle1.batteryRemaing);

  vehicle1.speed = 0;
  vehicle1.rnningSituation = 0;
  vehicle1.batteryRemaing = 80;

  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);
  printf("バッテリー: %d %\n", vehicle1.batteryRemaing);

  return 0;
}

---------------------------------------------------------

解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int batteryRemaing;
  int speed;
  int runningSituation;
};

int main(void)
{
  struct Vehicle vehicle1 = {10, 90, 0, 0};

  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %%\n", vehicle1.batteryRemaing);
  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);

  vehicle1.speed = 5;
  vehicle1.runningSituation = 1;
  vehicle1.batteryRemaing = 85;

  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %%\n", vehicle1.batteryRemaing);
  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);

  vehicle1.speed = 0;
  vehicle1.runningSituation = 0;
  vehicle1.batteryRemaing = 80;

  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %%\n", vehicle1.batteryRemaing);
  printf("速度: %d km/h\n", vehicle1.speed);
  printf("走行状態: %d \n", vehicle1.runningSituation);

  return 0;
}



============================================================================================



【練習問題③：2台の荷物運搬車体の管理】

■ 課題

2台の荷物運搬車体の情報を構造体で管理し、
それぞれの状態を表示・変更するプログラムを
作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報
   ・車体番号
   ・荷物の重量（kg）
   ・バッテリー残量（%）
   ・走行状態（0：停止、1：走行中）

3. 2台の車体を管理する。

■ 初期状態

【車体1】
・車体番号：1
・重量：10
・バッテリー：90
・走行状態：0

【車体2】
・車体番号：2
・重量：15
・バッテリー：75
・走行状態：1

4. 2台の初期状態をすべて表示する。

5. 次の変化が発生した。

【車体1】
・バッテリー：85
・走行状態：1

【車体2】
・重量：12
・バッテリー：70
・走行状態：0

6. 変更後の2台の状態をすべて表示する。

■ 出力例

【初期状態】

車体1
番号: 1
重量: 10 kg
バッテリー: 90 %
走行状態: 0

車体2
番号: 2
重量: 15 kg
バッテリー: 75 %
走行状態: 1

【変更後】

車体1
番号: 1
重量: 10 kg
バッテリー: 85 %
走行状態: 1

車体2
番号: 2
重量: 12 kg
バッテリー: 70 %
走行状態: 0




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  int situation;
};

int main(void)
{
  struct Vehicle vehicle1 = {1, 10, 90, 0};

  struct Vehicle vehicle2 = {2, 15, 75, 1};

  printf("番号: %d\n", vehicle1.number);
  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("走行状態: %d \n", vehicle1.situation);

  printf("番号: %d\n", vehicle2.number);
  printf("重量: %d kg\n", vehicle2.weight);
  printf("バッテリー: %d %%\n", vehicle2.remaing);
  printf("走行状態: %d \n", vehicle2.situation);

  vehicle1.remaing = 85;
  vehicle1.situation = 1;

  vehicle2.weight = 12;
  vehicle2.remaing = 70;
  vehicle2.situation = 0;

  printf("番号: %d\n", vehicle1.number);
  printf("重量: %d kg\n", vehicle1.weight);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("走行状態: %d \n", vehicle1.situation);

  printf("番号: %d\n", vehicle2.number);
  printf("重量: %d kg\n", vehicle2.weight);
  printf("バッテリー: %d %%\n", vehicle2.remaing);
  printf("走行状態: %d \n", vehicle2.situation);

  return 0;
}



===========================================================================================



【C-Day28 レベル2：練習問題①】

■ 課題

荷物運搬車体の情報を構造体で管理する
プログラムを作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・走行速度（小数）
   ・バッテリー残量（整数）
   ・運転モード（1文字）

3. 運転モード

   'S'：停止
   'A'：自動走行
   'M'：手動走行

4. 初期状態

   ・重量：12 kg
   ・速度：0.0 km/h
   ・バッテリー：95 %
   ・運転モード：'S'

5. 初期状態のすべての情報を表示する。

6. 車体が自動走行を開始した。

   ・速度：3.5 km/h
   ・バッテリー：90 %
   ・運転モード：'A'

7. 自動走行中のすべての情報を表示する。

8. その後、手動走行に切り替えた。

   ・速度：1.5 km/h
   ・バッテリー：85 %
   ・運転モード：'M'

9. 最後の状態をすべて表示する。

■ 出力例

【初期状態】
重量: 12 kg
速度: 0.0 km/h
バッテリー: 95 %
モード: S

【自動走行】
重量: 12 kg
速度: 3.5 km/h
バッテリー: 90 %
モード: A

【手動走行】
重量: 12 kg
速度: 1.5 km/h
バッテリー: 85 %
モード: M




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  float speed;
  int remaing;
  char mode;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 0.0f, 95, 'S'};

  printf("重量: %d kg\n", vehicle1.weight);
  printf("速度: %.1f km/h\n", vehicle1.speed);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("モード: %c \n", vehicle1.mode);

  vehicle1.speed = 3.5f;
  vehicle1.remaing = 90;
  vehicle1.mode = 'A';

  printf("重量: %d kg\n", vehicle1.weight);
  printf("速度: %.1f km/h\n", vehicle1.speed);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("モード: %c \n", vehicle1.mode);

  vehicle1.speed = 1.5f;
  vehicle1.remaing = 85;
  vehicle1.mode = 'M';

  printf("重量: %d kg\n", vehicle1.weight);
  printf("速度: %.1f km/h\n", vehicle1.speed);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("モード: %c \n", vehicle1.mode);

  return 0;
}




====================================================================================



【C-Day28 レベル2：練習問題②】

■ 課題

荷物運搬車体の設定をコピーして、
2台の車体情報を管理するプログラムを
作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・車体番号（整数）
   ・荷物の重量（整数）
   ・走行速度（小数）
   ・バッテリー残量（整数）
   ・運転モード（1文字）

3. 運転モード

   'S'：停止
   'A'：自動走行
   'M'：手動走行

4. 車体1の初期状態

   ・車体番号：1
   ・重量：10 kg
   ・速度：4.5 km/h
   ・バッテリー：90 %
   ・運転モード：'A'

5. 車体1の情報を車体2にコピーする。

6. コピーした車体2の情報を変更する。

   ・車体番号：2
   ・重量：15 kg
   ・速度：0.0 km/h
   ・バッテリー：75 %
   ・運転モード：'S'

7. 車体1と車体2のすべての情報を表示する。

■ 出力例

【車体1】
番号: 1
重量: 10 kg
速度: 4.5 km/h
バッテリー: 90 %
モード: A

【車体2】
番号: 2
重量: 15 kg
速度: 0.0 km/h
バッテリー: 75 %
モード: S




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  float speed;
  int remaing;
  char mode;
};

int main(void)
{
  struct Vehicle vehicle1 = {1, 10, 4.5f, 90, 'A'};
  struct Vehicle vehicle2 = vehicle1;

  vehicle2.number = 2;
  vehicle2.weight = 15;
  vehicle2.speed = 0.0f;
  vehicle2.remaing = 75;
  vehicle2.mode = 'S';

  printf("番号: %d \n", vehicle1.number);
  printf("重量: %d kg\n", vehicle1.weight);
  printf("速度: %.1f km/h\n", vehicle1.speed);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("モード: %c \n", vehicle1.mode);

  printf("番号: %d \n", vehicle2.number);
  printf("重量: %d kg\n", vehicle2.weight);
  printf("速度: %.1f km/h\n", vehicle2.speed);
  printf("バッテリー: %d %%\n", vehicle2.remaing);
  printf("モード: %c \n", vehicle2.mode);

  return 0;
}



====================================================================================



【練習問題③：荷物運搬車体の状態バックアップ】

■ 課題

荷物運搬車体の走行情報を管理し、
状態を変更した後、その情報をバックアップとして
保存するプログラムを作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・走行速度（小数）
   ・バッテリー残量（整数）
   ・運転モード（1文字）
   ・モーター温度（小数）

3. 運転モード

   'S'：停止
   'A'：自動走行
   'M'：手動走行

4. 車体の初期状態

   ・重量：12 kg
   ・速度：0.0 km/h
   ・バッテリー：95 %
   ・運転モード：'S'
   ・モーター温度：25.5 ℃

5. 車体が自動走行を開始した。

   ・速度：4.5 km/h
   ・バッテリー：85 %
   ・運転モード：'A'
   ・モーター温度：32.5 ℃

6. 自動走行中の状態をバックアップとして
   別の構造体変数にコピーする。

7. バックアップ保存後、車体が停止した。

   ・速度：0.0 km/h
   ・バッテリー：80 %
   ・運転モード：'S'
   ・モーター温度：30.0 ℃

8. 次の情報をすべて表示する。

   ・停止後の現在の車体情報
   ・保存したバックアップ情報

■ 出力例

【現在の車体情報】
重量: 12 kg
速度: 0.0 km/h
バッテリー: 80 %
モード: S
モーター温度: 30.0 ℃

【バックアップ情報】
重量: 12 kg
速度: 4.5 km/h
バッテリー: 85 %
モード: A
モーター温度: 32.5 ℃




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  float speed;
  int remaing;
  char mode;
  float temperature;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 0.0f, 95, 'S', 25.5f};

  vehicle1.speed = 4.5f;
  vehicle1.remaing = 85;
  vehicle1.mode = 'A';
  vehicle1.temperature = 32.5f;

  struct Vehicle vehicleBackup = vehicle1;

  vehicle1.speed = 0.0f;
  vehicle1.remaing = 80;
  vehicle1.mode = 'S';
  vehicle1.temperature = 30.0f;

  printf("重量: %d kg\n", vehicle1.weight);
  printf("速度: %.1f km/h\n", vehicle1.speed);
  printf("バッテリー: %d %%\n", vehicle1.remaing);
  printf("モード: %c \n", vehicle1.mode);
  printf("モーター温度: %.1f ℃\n", vehicle1.temperature);

  printf("重量: %d kg\n", vehicleBackup.weight);
  printf("速度: %.1f km/h\n", vehicleBackup.speed);
  printf("バッテリー: %d %%\n", vehicleBackup.remaing);
  printf("モード: %c \n", vehicleBackup.mode);
  printf("モーター温度: %.1f ℃\n", vehicleBackup.temperature);

  return 0;
}



======================================================================================



【C-Day28 レベル3：練習問題①】

■ 課題

荷物運搬車体のモーター温度を監視し、
異常な温度を検出したら自動停止する
プログラムを作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・モーター温度（整数）
   ・走行速度（小数）
   ・運転モード（1文字）

3. 運転モード

   'A'：自動走行
   'S'：停止

4. 車体の初期状態

   ・重量：12 kg
   ・モーター温度：25 ℃
   ・速度：2.5 km/h
   ・運転モード：'A'

5. 温度センサーから取得したと仮定する
   5回分の測定データを用意する。

   測定値：28、35、41、39、33

6. 測定データを順番に確認する。

7. 各測定値を車体の構造体に保存する。

8. モーター温度が40℃以上になった場合、
   次の状態に変更する。

   ・走行速度：0.0 km/h
   ・運転モード：'S'

9. 一度停止した車体は、温度が下がっても
   自動的に走行を再開しない。

10. 5回すべての測定を行い、
    各測定後の車体情報をすべて表示する。

※停止温度40℃は学習用の仮の設定です。

■ 出力例

【確認1回目】
重量: 12 kg
温度: 28 ℃
速度: 2.5 km/h
モード: A

【確認2回目】
重量: 12 kg
温度: 35 ℃
速度: 2.5 km/h
モード: A

【確認3回目】
重量: 12 kg
温度: 41 ℃
速度: 0.0 km/h
モード: S

【確認4回目】
重量: 12 kg
温度: 39 ℃
速度: 0.0 km/h
モード: S

【確認5回目】
重量: 12 kg
温度: 33 ℃
速度: 0.0 km/h
モード: S



解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  float speed;
  char mode;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 25, 2.5f, 'A'};

  int temperatures[5] = {28, 35, 41, 39, 33};

  for (int i = 0; i < 5; i++) {

    vehicle1.temperature = temperatures[i];

    if (vehicle1.temperature >= 40) {
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    }

    printf("【確認 %d 回目】\n", i+1);
    printf("重量: %d kg\n", vehicle1.weight);
    printf("温度: %d ℃\n", vehicle1.temperature);
    printf("速度: %.1f km/h\n", vehicle1.speed);
    printf("モード: %c \n", vehicle1.mode);
  }

  return 0;
}




=========================================================================================



【C-Day28 レベル3：練習問題②】

■ 課題

荷物運搬車体のモーター温度と障害物までの
距離を監視し、危険を検出したら自動停止する
プログラムを作成してください。

■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・モーター温度（整数）
   ・障害物までの距離（整数）
   ・走行速度（小数）
   ・運転モード（1文字）

3. 運転モード

   'A'：自動走行
   'S'：停止

4. 車体の初期状態

   ・重量：12 kg
   ・モーター温度：25 ℃
   ・障害物までの距離：150 cm
   ・走行速度：2.5 km/h
   ・運転モード：'A'

5. センサーから取得したと仮定する
   5回分の測定データを用意する。

   【モーター温度】
   28、32、35、43、31

   【障害物までの距離】
   100、70、25、80、120

6. 2種類の測定データを順番に確認する。

7. 各測定値を車体の構造体に保存する。

8. 次のどちらかの条件を満たした場合、
   車体を停止状態に変更する。

   ・モーター温度が40℃以上
   ・障害物までの距離が30cm以下

   停止時の状態
   ・走行速度：0.0 km/h
   ・運転モード：'S'

9. 一度停止した車体は、温度や距離が
   安全な範囲に戻っても自動再開しない。

10. 5回すべての測定を行い、
    各測定後の車体情報をすべて表示する。

※停止条件の数値は学習用の仮の設定です。


■ 出力例

【確認1回目】
重量: 12 kg
温度: 28 ℃
距離: 100 cm
速度: 2.5 km/h
モード: A

【確認2回目】
重量: 12 kg
温度: 32 ℃
距離: 70 cm
速度: 2.5 km/h
モード: A

【確認3回目】
重量: 12 kg
温度: 35 ℃
距離: 25 cm
速度: 0.0 km/h
モード: S

【確認4回目】
重量: 12 kg
温度: 43 ℃
距離: 80 cm
速度: 0.0 km/h
モード: S

【確認5回目】
重量: 12 kg
温度: 31 ℃
距離: 120 cm
速度: 0.0 km/h
モード: S




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  int distance;
  float speed;
  char mode;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 25, 150, 2.5f, 'A'};

  int temperatures[5] = {28, 32, 35, 43, 31};

  int distances[5] = {100, 70, 25, 80, 120};

  for (int i = 0; i < 5; i++) {
    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];

    if (temperatures[i] >= 40 || distances[i] <= 30) {
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    }

    printf("重量: %d kg\n", vehicle1.weight);
    printf("温度: %d ℃\n", vehicle1.temperature);
    printf("距離: %d cm\n", vehicle1.distance);
    printf("速度: %.1f km/h\n", vehicle1.speed);
    printf("モード: %c \n", vehicle1.mode);

  }

  return 0;
}




==========================================================================================



【C-Day28 レベル3：練習問題③】

■ 課題

荷物運搬車体の3種類のセンサー情報を監視し、
危険を検出したら車体を停止させてください。

さらに、最初に停止した原因を記録する
プログラムを作成してください。


■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・モーター温度（整数）
   ・障害物までの距離（整数）
   ・バッテリー残量（整数）
   ・走行速度（小数）
   ・運転モード（1文字）
   ・停止原因（1文字）


3. 運転モード

   'A'：自動走行
   'S'：停止


4. 停止原因

   'N'：異常なし
   'T'：モーター温度異常
   'D'：障害物を検出
   'B'：バッテリー残量不足


5. 車体の初期状態

   ・重量：12 kg
   ・モーター温度：25 ℃
   ・障害物までの距離：150 cm
   ・バッテリー残量：70 %
   ・走行速度：3.0 km/h
   ・運転モード：'A'
   ・停止原因：'N'


6. センサーから取得したと仮定する
   5回分の測定データを用意する。

   【モーター温度】
   28、31、34、43、37

   【障害物までの距離】
   120、80、25、70、100

   【バッテリー残量】
   65、56、45、31、18


7. 3種類の測定データを順番に確認する。

8. 各測定値を車体の構造体に保存する。


9. 次のいずれかの異常を検出した場合、
   車体を停止状態にする。

   【温度異常】
   ・モーター温度が40℃以上
   ・停止原因を'T'とする

   【障害物異常】
   ・障害物までの距離が30cm以下
   ・停止原因を'D'とする

   【バッテリー異常】
   ・バッテリー残量が20%以下
   ・停止原因を'B'とする

   停止時
   ・速度：0.0 km/h
   ・運転モード：'S'

   複数の異常が同時に初めて発生した場合、
   停止原因の優先順位は
   温度 → 障害物 → バッテリーとする。


10. 一度停止した車体は、
    安全な測定値に戻っても自動再開しない。


11. 最初に記録した停止原因は、
    その後に別の異常が発生しても変更しない。


12. 停止後もセンサーの確認を続ける。


13. 5回すべての測定を行い、
    各測定後の車体情報をすべて表示する。


■ 出力例

【確認1回目】
重量: 12 kg
温度: 28 ℃
距離: 120 cm
バッテリー: 65 %
速度: 3.0 km/h
モード: A
停止原因: N

【確認2回目】
重量: 12 kg
温度: 31 ℃
距離: 80 cm
バッテリー: 56 %
速度: 3.0 km/h
モード: A
停止原因: N

【確認3回目】
重量: 12 kg
温度: 34 ℃
距離: 25 cm
バッテリー: 45 %
速度: 0.0 km/h
モード: S
停止原因: D

【確認4回目】
重量: 12 kg
温度: 43 ℃
距離: 70 cm
バッテリー: 31 %
速度: 0.0 km/h
モード: S
停止原因: D

【確認5回目】
重量: 12 kg
温度: 37 ℃
距離: 100 cm
バッテリー: 18 %
速度: 0.0 km/h
モード: S
停止原因: D


■ 注意事項

・停止条件の数値は学習用の仮設定です。
・実際のセンサーは使用せず、測定データを模擬します。
・センサー異常を検出する判定処理を実装してください。
・停止原因を最初の異常のまま保持してください。




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  int distance;
  int remaing;
  float speed;
  char mode;
  char cause;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 25, 150, 70, 3.0f, 'A', 'N'};

  int temperatures[5] = {28, 31, 34, 43, 37};

  int distances[5] = {120, 80, 25, 70, 100};

  int remaings[5] = {65, 56, 45, 31, 18};

  for (int i = 0; i < 5; i++) {

    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];
    vehicle1.remaing = remaings[i];

    if (vehicle1.temperature >= 40) {
      vehicle1.cause = 'T';
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    } else if (vehicle1.distance <= 30) {
      vehicle1.cause = 'D';
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    } else if (vehicle1.remaing <= 20) {
      vehicle1.cause = 'B';
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    }

    printf("【確認%d回目】\n", [i]);
    printf("重量: %d kg\n", vehicle1.weight);
    printf("温度: %d ℃\n", vehicle1.temperature);
    printf("距離: %d cm\n", vehicle1.distance);
    printf("バッテリー: %d %%\n", vehicle1.remaing);
    printf("速度: %.1f km/h\n", vehicle1.speed);
    printf("モード: %c \n", vehicle1.mode);
    printf("停止原因: %c \n", vehicle1.cause);
  }

  return 0;
}

--------------------------------------------------

解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  int distance;
  int remaing;
  float speed;
  char mode;
  char cause;
};

int main(void)
{
  struct Vehicle vehicle1 = {12, 25, 150, 70, 3.0f, 'A', 'N'};

  int temperatures[5] = {28, 31, 34, 43, 37};

  int distances[5] = {120, 80, 25, 70, 100};

  int remaings[5] = {65, 56, 45, 31, 18};

  for (int i = 0; i < 5; i++) {

    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];
    vehicle1.remaing = remaings[i];

    if (vehicle1.cause == 'N') {

      if (vehicle1.temperature >= 40) {
          vehicle1.cause = 'T';
          vehicle1.speed = 0.0f;
          vehicle1.mode = 'S';
        } else if (vehicle1.distance <= 30) {
          vehicle1.cause = 'D';
          vehicle1.speed = 0.0f;
          vehicle1.mode = 'S';
        } else if (vehicle1.remaing <= 20) {
          vehicle1.cause = 'B';
          vehicle1.speed = 0.0f;
          vehicle1.mode = 'S';
      }
    }

    printf("【確認%d回目】\n", i + 1);
    printf("重量: %d kg\n", vehicle1.weight);
    printf("温度: %d ℃\n", vehicle1.temperature);
    printf("距離: %d cm\n", vehicle1.distance);
    printf("バッテリー: %d %%\n", vehicle1.remaing);
    printf("速度: %.1f km/h\n", vehicle1.speed);
    printf("モード: %c \n", vehicle1.mode);
    printf("停止原因: %c \n", vehicle1.cause);
  }

  return 0;
}




===========================================================================================




【C-Day28 レベル3：練習問題④】

■ 課題

荷物運搬車体の安全監視システムを作成してください。

3種類のセンサー情報から異常を判定し、
現在の異常、最初の停止原因、
過去の異常履歴を管理してください。


■ 条件

1. 構造体の名前は Vehicle とする。

2. 管理する情報

   ・荷物の重量（整数）
   ・モーター温度（整数）
   ・障害物までの距離（整数）
   ・バッテリー残量（整数）
   ・走行速度（小数）
   ・運転モード（1文字）
   ・最初の停止原因（1文字）

   ・現在の温度異常（整数）
   ・現在の障害物異常（整数）
   ・現在のバッテリー異常（整数）

   ・温度異常の履歴（整数）
   ・障害物異常の履歴（整数）
   ・バッテリー異常の履歴（整数）


3. 運転モード

   'A'：自動走行
   'S'：停止


4. 停止原因

   'N'：停止原因なし
   'T'：温度異常
   'D'：障害物異常
   'B'：バッテリー異常


5. 初期状態

   ・重量：12 kg
   ・温度：25 ℃
   ・距離：160 cm
   ・バッテリー：80 %
   ・速度：3.2 km/h
   ・運転モード：'A'
   ・停止原因：'N'

   現在の異常：すべて0
   異常の履歴：すべて0


6. センサーの測定データ

   6回分のデータを使用する。

   【モーター温度】
   31、34、40、36、38、42

   【障害物までの距離】
   140、90、30、75、25、60

   【バッテリー残量】
   76、68、54、42、20、14


7. 異常の判定条件

   温度異常
   ・40℃以上

   障害物異常
   ・30cm以下

   バッテリー異常
   ・20%以下

   ※これらの閾値は学習用の仮設定。


8. 現在の異常を管理する。

   各センサーについて

   ・現在異常あり：1
   ・現在異常なし：0

   測定するたびに現在の状態を更新する。


9. 異常履歴を管理する。

   各センサーについて

   ・一度も異常なし：0
   ・一度でも異常あり：1

   過去に異常が発生していれば、
   現在正常でも履歴は1のまま保持する。


10. 最初の停止原因を記録する。

    最初に異常が発生した時点で、
    その異常を停止原因として記録する。

    複数の異常が同時に発生した場合、
    優先順位は次のとおり。

    ① 温度異常
    ② 障害物異常
    ③ バッテリー異常

    一度記録した最初の停止原因は、
    その後に別の異常が発生しても変更しない。


11. 異常発生時の車体制御

    ・速度：0.0 km/h
    ・運転モード：'S'

    一度停止した車体は、
    センサーの数値が正常に戻っても
    自動再開しない。


12. 停止後も6回目まで測定を続ける。

    停止後も現在の異常と異常履歴を更新する。


13. 各測定後に表示する情報

    ・確認回数
    ・荷物の重量
    ・モーター温度
    ・障害物までの距離
    ・バッテリー残量
    ・走行速度
    ・運転モード
    ・最初の停止原因

    ・現在の温度異常（0/1）
    ・現在の障害物異常（0/1）
    ・現在のバッテリー異常（0/1）


14. 6回の測定が終了したら、
    最終的な異常履歴を表示する。

    ・温度異常の履歴
    ・障害物異常の履歴
    ・バッテリー異常の履歴


■ 注意

・実際のセンサーではなく模擬データを使用する。
・各センサーの判定は独立して行う。
・最初の停止原因は保持する。
・停止状態は保持する。
・現在の異常は測定ごとに更新する。
・異常履歴は過去の発生を保持する。




解答：
#include <stdio.h>

struct Vehicle {
  int temperature;
  int distance;
  int remaing;
  float speed;
  char mode;
  char cause;

  int tempFaultNow;
  int distanceFaultNow;
  int batteryFaultNow;

  int tempFaultHistry;
  int distanceFaultHistry;
  int batteryFaultHistry;
};

int main(void)
{
  struct Vehicle vehicle1 = {
    12, 25, 160, 80, 3.2f, 'A', 'N',
    0, 0, 0
    0, 0, 0
  };

  int temperatures[6] = {31, 34, 40, 36, 38, 42};

  int distances[6] = {140, 90, 30, 75, 25, 60};

  int remaings[6] = {76, 68, 54, 42, 20, 14};

  for (int i = 0; i < 5; i++) {
    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];
    vehicle1.remaing = remaings[i];

    vehicle1.tempFaultNow = 
      (vehicle1.temperature >= 40);

    vehicle1.distanceFaultNow = 
      (vehicle1.distance <= 30);

    vehicle1.batteryFaultNow =
      (vehicle1.remaing <= 20);


    if (vehicle1.tempFaultNow) {
      vehicle1.tempFaultHistory = 1;
    }

    if (vehicle1.distanceFaultNow) {
      vehicle1.distanceFaultHistory = 1;
    }

    if (vehicle1.batteryFaultNow) {
      vehicle1.batteryFaultHistory = 1;
    }

    if (vehicle1.cause == 'N') {
      if (vehicle1.temperature >= 40) {
        vehicle1.cause = 'T';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.distance <= 30) {
        vehicle1.cause = 'D';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.remaing <= 20) {
        vehicle1.cause = 'B';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      }

      if (vehicle1.cause != 'N') {
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';

        printf("確認回数 %d 回目\n", i + 1);
        printf("重量: %d \n", vehicle1.weight)
        printf("モーター温度: %d \n", vehicle1.temperature);
        printf("障害物までの距離: %d \n", vehicle1.distance);
        printf("バッテリー残量: %d \n", vehicle1.remaing);
        printf("走行速度: %.1f \n", vehicle1.speed);
        printf("運転モード: %c \n", vehicle1.mode);
        printf("最初の停止原因: %c \n", vehicle1.cause);
        printf("現在の温度異常: %d \n", vehicle1.tempFaultNow);
        printf("現在の障害物異常: %d \n", vehicle1.distanceFaultNow);
        printf("現在のバッテリー異常: %d \n", vehicle1.batteryFaultNow);
      }
    }
  }

  printf("温度異常の履歴: %d \n", vehicle1.tempFaultHistory);
  printf("障害物異常の履歴: %d \n", vehicle1.distanceFaultHistory);
  printf("バッテリー異常の履歴: %d \n", vehicle1.batteryFaultHistory);
}


------------------------------------------------------------------------



解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  int distance;
  int remaing;
  float speed;
  char mode;
  char cause;

  int tempFaultNow;
  int distanceFaultNow;
  int batteryFaultNow;

  int tempFaultHistory;
  int distanceFaultHistory;
  int batteryFaultHistory;
};

int main(void)
{
  struct Vehicle vehicle1 = {
    12, 25, 160, 80, 3.2f, 'A', 'N',
    0, 0, 0,
    0, 0, 0
  };

  int temperatures[6] = {31, 34, 40, 36, 38, 42};

  int distances[6] = {140, 90, 30, 75, 25, 60};

  int remaings[6] = {76, 68, 54, 42, 20, 14};

  for (int i = 0; i < 6; i++) {
    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];
    vehicle1.remaing = remaings[i];

    vehicle1.tempFaultNow = 
      (vehicle1.temperature >= 40);

    vehicle1.distanceFaultNow = 
      (vehicle1.distance <= 30);

    vehicle1.batteryFaultNow =
      (vehicle1.remaing <= 20);


    if (vehicle1.tempFaultNow) {
      vehicle1.tempFaultHistory = 1;
    }

    if (vehicle1.distanceFaultNow) {
      vehicle1.distanceFaultHistory = 1;
    }

    if (vehicle1.batteryFaultNow) {
      vehicle1.batteryFaultHistory = 1;
    }

    if (vehicle1.cause == 'N') {
      if (vehicle1.temperature >= 40) {
        vehicle1.cause = 'T';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.distance <= 30) {
        vehicle1.cause = 'D';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.remaing <= 20) {
        vehicle1.cause = 'B';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      }
    }

    if (vehicle1.cause != 'N') {
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      }

    printf("確認回数 %d 回目\n", i + 1);
    printf("重量: %d \n", vehicle1.weight);
    printf("モーター温度: %d \n", vehicle1.temperature);
    printf("障害物までの距離: %d \n", vehicle1.distance);
    printf("バッテリー残量: %d \n", vehicle1.remaing);
    printf("走行速度: %.1f \n", vehicle1.speed);
    printf("運転モード: %c \n", vehicle1.mode);
    printf("最初の停止原因: %c \n", vehicle1.cause);
    printf("現在の温度異常: %d \n", vehicle1.tempFaultNow);
    printf("現在の障害物異常: %d \n", vehicle1.distanceFaultNow);
    printf("現在のバッテリー異常: %d \n", vehicle1.batteryFaultNow);
  }

  printf("温度異常の履歴: %d \n", vehicle1.tempFaultHistory);
  printf("障害物異常の履歴: %d \n", vehicle1.distanceFaultHistory);
  printf("バッテリー異常の履歴: %d \n", vehicle1.batteryFaultHistory);
}





===========================================================================================================



【C-Day28 レベル3：練習問題⑤】

■ 課題

荷物運搬車体の安全監視システムを作成してください。

センサーの測定値を使い、現在の異常、
過去の異常履歴、最初の停止原因を管理します。


■ 条件

1. 構造体の名前は Vehicle とする。


2. 管理する情報

   ・荷物の重量（整数）
   ・モーター温度（整数）
   ・障害物までの距離（整数）
   ・バッテリー残量（整数）
   ・走行速度（小数）
   ・運転モード（1文字）
   ・最初の停止原因（1文字）

   ・現在の温度異常（整数）
   ・現在の障害物異常（整数）
   ・現在のバッテリー異常（整数）

   ・温度異常の履歴（整数）
   ・障害物異常の履歴（整数）
   ・バッテリー異常の履歴（整数）


3. 運転モード

   'A'：自動走行
   'S'：停止


4. 停止原因

   'N'：停止原因なし
   'T'：温度異常
   'D'：障害物異常
   'B'：バッテリー異常


5. 初期状態

   ・重量：15 kg
   ・モーター温度：28℃
   ・障害物までの距離：150cm
   ・バッテリー残量：80%
   ・走行速度：2.8 km/h
   ・運転モード：'A'
   ・最初の停止原因：'N'

   現在の異常：すべて0
   異常の履歴：すべて0


6. センサーの測定データ

   5回分のデータを使用する。

   【モーター温度】
   29、33、47、38、41

   【障害物までの距離】
   110、90、20、75、22

   【バッテリー残量】
   70、24、20、40、18


7. 異常判定の条件

   ・モーター温度：45℃以上
   ・障害物までの距離：25cm以下
   ・バッテリー残量：25%以下

   ※停止条件は学習用の仮設定。


8. 現在の異常を管理する。

   各センサーについて

   ・異常あり：1
   ・異常なし：0

   測定ごとに最新の状態へ更新する。


9. 異常履歴を管理する。

   ・一度も異常なし：0
   ・一度でも異常あり：1

   一度記録した履歴は、
   測定値が正常に戻っても保持する。


10. 最初の停止原因を記録する。

    最初に異常を検出した際、
    停止原因を記録する。

    複数の異常が同時に発生した場合、
    優先順位は以下とする。

    ① 温度異常
    ② 障害物異常
    ③ バッテリー異常

    最初の停止原因は上書きしない。


11. 車体の停止制御

    異常を検出した場合、

    ・走行速度：0.0 km/h
    ・運転モード：'S'

    一度停止したら、
    自動的に走行を再開しない。


12. 停止後も測定を続ける。

    5回目まで測定を実行し、
    現在の異常と異常履歴を更新する。


13. 各測定後に表示する情報

    ・確認回数
    ・重量
    ・モーター温度
    ・障害物までの距離
    ・バッテリー残量
    ・走行速度
    ・運転モード
    ・最初の停止原因
    ・現在の温度異常（0/1）
    ・現在の障害物異常（0/1）
    ・現在のバッテリー異常（0/1）


14. 5回の測定終了後

    以下の最終的な異常履歴を表示する。

    ・温度異常の履歴
    ・障害物異常の履歴
    ・バッテリー異常の履歴


■ 注意事項

・実際のセンサーではなく模擬データを使用
・最初の停止原因は保持する
・現在の異常は毎回更新する
・異常履歴は保持する
・停止後も監視を継続する
・出力時の単位や見出しは省略してもよい




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int temperature;
  int distance;
  int remaing;
  float speed;
  char mode;
  char cause;

  int tempFaultNow;
  int distanceFaultNow;
  int batteryFaultNow;

  int tempFaultHistory;
  int distanceFaultHistory;
  int batteryFaultHistory;
};

int main(void)
{
  struct Vehicle vehicle1 = {
    15, 28, 150, 80, 2.8f, 'A', 'N',
    0, 0, 0,
    0, 0, 0
  };

  int temperatures[5] = {29, 33, 47, 38, 41};

  int distances[5] = {110, 90, 20, 75, 22};

  int remaings[5] = {70, 24, 20, 40, 18};

  for (int i = 0; i < 5; i++) {
    vehicle1.temperature = temperatures[i];
    vehicle1.distance = distances[i];
    vehicle1.remaing = remaings[i];


    vehicle1.tempFaultNow = 
    (vehicle1.temperature >= 45);

    vehicle1.distanceFaultNow = 
    (vehicle1.distance <= 25);

    vehicle1.batteryFaultNow = 
    (vehicle1.remaing <= 25);


    if (vehicle1.tempFaultNow) {
      vehicle1.tempFaultHistory = 1;
    }

    if (vehicle1.distanceFaultNow) {
      vehicle1.distanceFaultHistory = 1;
    }

    if (vehicle1.batteryFaultNow) {
      vehicle1.batteryFaultHistory = 1;
    }


    if (vehicle1.cause == 'N') {
      if (vehicle1.temperature >= 45) {
        vehicle1.cause = 'T';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.distance <= 25) {
        vehicle1.cause = 'D';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      } else if (vehicle1.remaing <= 25) {
        vehicle1.cause = 'B';
        vehicle1.speed = 0.0f;
        vehicle1.mode = 'S';
      }
    }

    if (vehicle1.cause != 'N') {
      vehicle1.speed = 0.0f;
      vehicle1.mode = 'S';
    }

    printf("確認 %d 回目\n", i + 1);
    printf("重量 %d \n", vehicle1.weight);
    printf("モーター温度 %d \n", vehicle1.temperature);
    printf("障害物までの距離 %d \n", vehicle1.distance);
    printf("バッテリー残量 %d \n", vehicle1.remaing);
    printf("走行速度 %.1f \n", vehicle1.speed);
    printf("運転モード %c \n", vehicle1.mode);
    printf("最初の停止原因 %c \n", vehicle1.cause);

    printf("温度異常 %d \n", vehicle1.tempFaultNow);
    printf("障害物異常 %d \n", vehicle1.distanceFaultNow);
    printf("バッテリー異常 %d \n", vehicle1.batteryFaultNow);

  }

  printf("温度異常の履歴 %d \n", vehicle1.tempFaultHistory);
  printf("障害物異常の履歴 %d \n", vehicle1.distanceFaultHistory);
  printf("バッテリー異常の履歴 %d \n", vehicle1.batteryFaultHistory);

  return 0;
}