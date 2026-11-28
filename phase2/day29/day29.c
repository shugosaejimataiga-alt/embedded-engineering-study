
【問題：運搬車体の情報管理】

あなたは、荷物を運搬する車体を管理する
プログラムを開発しています。

■ 車体の情報

各車体には、次の3つの情報があります。

・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）

■ 管理する車体

車体1
・荷物の重量：10kg
・バッテリー残量：85%
・走行速度：1.5

車体2
・荷物の重量：15kg
・バッテリー残量：60%
・走行速度：1.2

車体3
・荷物の重量：12kg
・バッテリー残量：25%
・走行速度：0.8

■ 作成するプログラム

1. 上記3つの情報を持つ構造体を定義する。

2. 3台分の情報を構造体の配列で管理する。

3. すべての車体について、以下を表示する。
   ・車体番号
   ・荷物の重量
   ・バッテリー残量
   ・走行速度

■ 期待する実行結果

車体1
重量：10kg
残量：85%
速度：1.5

車体2
重量：15kg
残量：60%
速度：1.2

車体3
重量：12kg
残量：25%
速度：0.8

■ 条件

・3台分の構造体変数を個別に宣言しない
・同じ表示処理を3回書かない
・C言語で完成したプログラムを書く




解答：
#include <stdio.h>

struct Vehicle {
  int weight;
  int remaing;
  float speed;
};

int main(void)
{
  struct Vehicle vehicles[3] = {
    {10, 85, 1.5f},
    {15, 60, 1.2f},
    {12, 25, 0.8f}
  };

  for (int i = 0; i < 3; i++) {
    printf("車体 %d \n", i + 1);
    printf("重量: %d kg \n", vehicles[i].weight);
    printf("残量: %d %% \n", vehicles[i].remaing);
    printf("速度: %.1f \n", vehicles[i].speed);
  }

  return 0;
}




=====================================================================================================================



【問題：運搬車体のバッテリー管理】

あなたは、荷物を運搬する車体の
バッテリー管理プログラムを開発しています。

■ 構造体の情報

各車体には、次の3つの情報があります。

・車体番号（int）
・バッテリー残量（int）
・走行速度（float）

■ 管理する車体

車体1
・車体番号：1
・バッテリー残量：80%
・走行速度：1.5

車体2
・車体番号：2
・バッテリー残量：45%
・走行速度：1.2

車体3
・車体番号：3
・バッテリー残量：15%
・走行速度：0.8

車体4
・車体番号：4
・バッテリー残量：60%
・走行速度：1.0

■ 作成するプログラム

1. 上記3つの情報を持つ構造体を定義する。

2. 4台分の情報を構造体の配列で管理する。

3. 全車体のバッテリー残量を確認する。

4. バッテリー残量が20%以下の車体は、
   走行速度を0.0に変更する。

5. 変更後の全車体について、
   車体番号・バッテリー残量・走行速度を表示する。

■ 期待する実行結果

車体1
残量：80%
速度：1.5

車体2
残量：45%
速度：1.2

車体3
残量：15%
速度：0.0

車体4
残量：60%
速度：1.0

■ 条件

・4台分の構造体変数を個別に宣言しない
・同じ判定処理を4回書かない
・C言語で完成したプログラムを書く




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaing;
  float speed;
};

int main(void)
{
  struct Vehicle vehicles = {
    {1, 80, 1.5f},
    {2, 45, 1.2f},
    {3, 15, 0.8f},
    {4, 60, 1.0f}
  };

  for (int i = 0; i < 4; i++) {

  }
}




=========================================================================================================================




【問題：運搬車体のバッテリー管理】

あなたは、荷物を運搬する車体の
バッテリー管理プログラムを開発しています。

■ 構造体の情報

各車体には、次の3つの情報があります。

・車体番号（int）
・バッテリー残量（int）
・走行速度（float）

■ 管理する車体

車体1
・車体番号：1
・バッテリー残量：80%
・走行速度：1.5

車体2
・車体番号：2
・バッテリー残量：45%
・走行速度：1.2

車体3
・車体番号：3
・バッテリー残量：15%
・走行速度：0.8

車体4
・車体番号：4
・バッテリー残量：60%
・走行速度：1.0

■ 作成するプログラム

1. 上記3つの情報を持つ構造体を定義する。

2. 4台分の情報を構造体の配列で管理する。

3. 全車体のバッテリー残量を確認する。

4. バッテリー残量が20%以下の車体は、
   走行速度を0.0に変更する。

5. 変更後の全車体について、
   車体番号・バッテリー残量・走行速度を表示する。

■ 期待する実行結果

車体1
残量：80%
速度：1.5

車体2
残量：45%
速度：1.2

車体3
残量：15%
速度：0.0

車体4
残量：60%
速度：1.0

■ 条件

・4台分の構造体変数を個別に宣言しない
・同じ判定処理を4回書かない
・C言語で完成したプログラムを書く



解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int battery;
  float speed;
};

int main(void)
{
  struct Vehicle vehicles = {
    {1, 80, 1.5f},
    (2, 45, 1.2f),
    {3, 15, 0.8f},
    {4, 60, 1.0f}
  };

  for (int i = 0; i < 4; i++) {

    if (vehicles.battery <= 20) {
      vehicles.speed = 0.0f
    }

    printf("車体%d\n", vehicles[i].number);
    printf("残量:%d%%\n", vehicles[i].battery);
    printf("速度:%.1f\n", vehicles[i].speed);
  }

  return 0;
}

-----------------------------------------------

解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int battery;
  float speed;
};

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 80, 1.5f},
    {2, 45, 1.2f},
    {3, 15, 0.8f},
    {4, 60, 1.0f}
  };

  for (int i = 0; i < 4; i++) {

    if (vehicles[i].battery <= 20) {
      vehicles[i].speed = 0.0f;
    }

    printf("車体%d\n", vehicles[i].number);
    printf("残量:%d%%\n", vehicles[i].battery);
    printf("速度:%.1f\n", vehicles[i].speed);
  }

  return 0;
}




========================================================================================================================




【問題：運搬車体の安全管理】

あなたは、10〜15kg程度の荷物を運ぶ車体の
安全管理プログラムを開発しています。

■ 構造体の情報

各車体には、次の4つの情報があります。

・車体番号（int）
・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）

■ 管理する車体

車体1
・番号：1
・重量：10kg
・残量：80%
・速度：1.5

車体2
・番号：2
・重量：16kg
・残量：65%
・速度：1.2

車体3
・番号：3
・重量：12kg
・残量：15%
・速度：1.0

車体4
・番号：4
・重量：18kg
・残量：10%
・速度：0.8

車体5
・番号：5
・重量：14kg
・残量：50%
・速度：1.3


■ 作成するプログラム

1. 上記4つの情報を持つ構造体を定義する。

2. 5台分の情報を構造体の配列で管理する。

3. 各車体について、次の安全条件を判定する。

   ・荷物の重量が15kgを超えている
   ・バッテリー残量が20%以下である

4. どちらか一方でも条件を満たした車体は、
   走行速度を0.0に変更する。

5. 判定後、全車体について次の情報を表示する。

   ・車体番号
   ・荷物の重量
   ・バッテリー残量
   ・走行速度


■ 期待する実行結果

車体1
重量：10kg
残量：80%
速度：1.5

車体2
重量：16kg
残量：65%
速度：0.0

車体3
重量：12kg
残量：15%
速度：0.0

車体4
重量：18kg
残量：10%
速度：0.0

車体5
重量：14kg
残量：50%
速度：1.3


■ 条件

・5台分の構造体変数を個別に宣言しない
・同じ判定処理を5回書かない
・条件を満たさない車体の速度は変更しない
・C言語で完成したプログラムを書く




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int battery;
  float speed;
};

int main(void)
{
  struct Vehicle vehicles[5] = {
    {1, 10, 80, 1.5f},
    {2, 16, 65, 1.2f},
    {3, 12, 15, 1.0f},
    {4, 18, 10, 0.8f},
    {5, 14, 50, 1.3f}
  };

  for (int i = 0; i < 5; i++) {

    if (vehicles[i].weight > 15 || vehicles[i].battery <= 20) {
      vehicles[i].speed = 0.0f;
    }

    printf("車体%d\n", vehicles[i].number);
    printf("重量:%dkg\n", vehicles[i].weight);
    printf("残量:%d%%\n", vehicles[i].battery);
    printf("速度:%.1f\n", vehicles[i].speed);
  }

  return 0;
}



=======================================================================================================================



問題1：構造体と構造体配列の違い

次の2つの違いを説明してください。

struct Vehicle vehicle;単体の構造体の変数

struct Vehicle vehicles[3];3個の構造体を合わせた配列。



問題2：構造体配列のメンバーへのアクセス

次のコードは何を表していますか？
vehicles[2].battery

配列の中の2つ目のbatteryを表している。


問題3：構造体配列と繰り返し

車体が100台ある場合、構造体配列とfor文を組み合わせると、どのような利点がありますか？

1つのfor文で配列名[i].〇〇を書くだけで、自動で100回 = 100台分繰り返して出力してくれる




=========================================================================================================================




【問題：複数車体の情報表示】

あなたは、荷物を運搬する車体の情報を
管理するプログラムを開発しています。

■ 構造体の情報

各車体には、次の3つの情報があります。

・車体番号（int）
・バッテリー残量（int）
・走行速度（float）


■ 管理する車体

車体1
・番号：1
・バッテリー残量：90%
・走行速度：1.5

車体2
・番号：2
・バッテリー残量：65%
・走行速度：1.2

車体3
・番号：3
・バッテリー残量：40%
・走行速度：0.8


■ 作成するプログラム

1. 上記3つの情報を持つ構造体を定義する。

2. 3台分の情報を構造体の配列で管理する。

3. 車体の構造体を1つ受け取り、
   その車体の情報を表示する関数を作成する。

4. main関数から、その関数を呼び出して
   3台すべての車体情報を表示する。


■ 期待する実行結果

車体1
残量：90%
速度：1.5

車体2
残量：65%
速度：1.2

車体3
残量：40%
速度：0.8


■ 条件

・構造体の配列を使用すること
・車体情報の表示処理を別の関数に分割すること
・関数には構造体を値渡しすること
・同じ表示処理を3回書かないこと
・完成したC言語プログラムを書くこと




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int battery;
  float speed;
};

void showVehicle(struct Vehicle v);

int main(void)
{
  struct Vehicle vehicles[3] = {
    {1, 90, 1.5f},
    {2, 65, 1.2f},
    {3, 40, 0.8f}
  };

  showVehicle(vehicles);

  return 0;
}

void show Vehicle(struct Vehicle v) {

  for (int i = 0; i < 3; i++) {
    printf("車体 %d \n", v[i].number);
    printf("残量: %d %%\n", v[i].battery);
    printf("速度: %.1f", v[i].speed);
  }
}

-----------------------------------------

解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int battery;
  float speed;
};

void showVehicle(struct Vehicle v[], int count);

int main(void)
{
  struct Vehicle vehicles[3] = {
    {1, 90, 1.5f},
    {2, 65, 1.2f},
    {3, 40, 0.8f}
  };

  showVehicle(vehicles, 3);

  return 0;
}

void showVehicle(struct Vehicle v[], int count) {

  for (int i = 0; i < count; i++) {
    printf("車体 %d \n", v[i].number);
    printf("残量: %d %%\n", v[i].battery);
    printf("速度: %.1f", v[i].speed);
  }
}


か

#include <stdio.h>

struct Vehicle {
  int number;
  int battery;
  float speed;
};

void showVehicle(struct Vehicle v);

int main(void)
{
  struct Vehicle vehicles[3] = {
    {1, 90, 1.5f},
    {2, 65, 1.2f},
    {3, 40, 0.8f}
  };

  for (int i = 0; i < 3; i++) {
    showVehicle(vehicles[i]);
  }

  return 0;
}

void showVehicle(struct Vehicle v)
{
  printf("車体 %d \n", v.number);
  printf("残量: %d %%\n", v.battery);
  printf("速度: %.1f", v.speed);
}



====================================================================================================================




【Level 2：演習問題2/3】
テーマ：運搬車体の情報表示

■ 構造体の情報

struct Vehicle を定義し、次の4つのメンバーを持たせる。

・車体番号（int）
・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）


■ 管理する車体

車体1
・番号：1
・重量：12kg
・残量：75%
・速度：1.4

車体2
・番号：2
・重量：15kg
・残量：50%
・速度：1.0

車体3
・番号：3
・重量：10kg
・残量：30%
・速度：0.8

車体4
・番号：4
・重量：14kg
・残量：90%
・速度：1.6


━━━━━━━━━━━━━━━━━━━━
【方法①：関数内でfor文】
━━━━━━━━━━━━━━━━━━━━

1. main関数で4台分の構造体配列を作成する。

2. 構造体配列と車体数を関数へ渡す。

3. 関数内でfor文を使い、4台分の情報を表示する。

条件：
・関数名はshowVehiclesとする。
・引数は構造体配列と車体数の2つ。
・main関数ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━
【方法②：main関数でfor文】
━━━━━━━━━━━━━━━━━━━━

1. main関数で4台分の構造体配列を作成する。

2. main関数でfor文を使用する。

3. 構造体を1個ずつ関数へ値渡しする。

4. 関数は受け取った1台分の情報を表示する。

条件：
・関数名はshowVehicleとする。
・関数の引数は構造体1個。
・showVehicle関数内ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━
【共通の期待する実行結果】
━━━━━━━━━━━━━━━━━━━━

車体1
重量：12kg
残量：75%
速度：1.4

車体2
重量：15kg
残量：50%
速度：1.0

車体3
重量：10kg
残量：30%
速度：0.8

車体4
重量：14kg
残量：90%
速度：1.6


━━━━━━━━━━━━━━━━━━━━
【回答条件】
━━━━━━━━━━━━━━━━━━━━

・方法①と方法②の2つのプログラムを書く。
・それぞれ独立してコンパイルできること。
・関数プロトタイプ宣言を書くこと。
・前回のコードを見ずに自力で作成すること。




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicle(struct Vehicle v);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 12, 75, 1.4f},
    {2, 15, 50, 1.0f},
    {3, 10, 30, 0.8f},
    {4, 14, 90, 1.6f}
  };

  for (int i = 0; i < 4; i++) {
    showVehicle(vehicles[i]);
  }

  return 0;
}

void showVehicle(struct Vehicle v)
{
  printf("車体 %d \n", v.number);
  printf("重量: %d kg\n", v.weight);
  printf("残量: %d %%\n", v.remaing);
  printf("速度: %.1f \n", v.speed);
}

か

#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicle(struct Vehicle v[], int count);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 12, 75, 1.4f},
    {2, 15, 50, 1.0f},
    {3, 10, 30, 0.8f},
    {4, 14, 90, 1.6f}
  };

  showVehicle(vehicles, 4);

  return 0;
}

void showVehicle(struct Vehicle v[], int count)
{
  for (int i = 0; i < count; i++) {
    printf("車体 %d \n", v[i].number);
    printf("重量: %d kg\n", v[i].weight);
    printf("残量: %d %%\n", v[i].remaing);
    printf("速度: %.1f \n", v[i].speed);
  }
}



==================================================================================================================



【Level 2：演習問題3/3】
テーマ：運搬車体のバッテリー状態管理

━━━━━━━━━━━━━━━━━━━━
■ 構造体の情報
━━━━━━━━━━━━━━━━━━━━

struct Vehicle を定義し、次の4つの
メンバーを持たせる。

・車体番号（int）
・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）


■ 管理する車体

車体1
・番号：1
・重量：10kg
・残量：85%
・速度：1.5

車体2
・番号：2
・重量：14kg
・残量：25%
・速度：1.2

車体3
・番号：3
・重量：12kg
・残量：60%
・速度：1.0

車体4
・番号：4
・重量：15kg
・残量：10%
・速度：0.8

車体5
・番号：5
・重量：11kg
・残量：30%
・速度：1.3


━━━━━━━━━━━━━━━━━━━━
■ 共通の処理
━━━━━━━━━━━━━━━━━━━━

1. 5台分の構造体配列を作成する。

2. 全車体の情報を表示する。

3. 各車体のバッテリー残量を判定する。

   ・30%以下 →「要充電」
   ・30%を超える →「正常」

4. 判定結果も車体情報と一緒に表示する。

※ 車体の情報を変更する必要はありません。


━━━━━━━━━━━━━━━━━━━━
【方法①：関数内でfor文】
━━━━━━━━━━━━━━━━━━━━

1. main関数で構造体配列を作成する。

2. 構造体配列と車体数を関数へ渡す。

3. 関数内で5台分の情報を処理する。

4. 各車体の情報とバッテリーの状態を表示する。

条件：
・関数名はshowVehiclesとする。
・引数は構造体配列と車体数の2つ。
・main関数ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━
【方法②：main関数でfor文】
━━━━━━━━━━━━━━━━━━━━

1. main関数で構造体配列を作成する。

2. main関数でfor文を使用する。

3. 構造体を1台ずつ関数へ値渡しする。

4. 関数内で受け取った車体の情報と
   バッテリーの状態を表示する。

条件：
・関数名はshowVehicleとする。
・関数の引数は構造体1個。
・showVehicle関数内ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━
■ 共通の期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
重量：10kg
残量：85%
速度：1.5
状態：正常

車体2
重量：14kg
残量：25%
速度：1.2
状態：要充電

車体3
重量：12kg
残量：60%
速度：1.0
状態：正常

車体4
重量：15kg
残量：10%
速度：0.8
状態：要充電

車体5
重量：11kg
残量：30%
速度：1.3
状態：要充電


━━━━━━━━━━━━━━━━━━━━
■ 回答条件
━━━━━━━━━━━━━━━━━━━━

・方法①と方法②の2つのプログラムを書く。
・それぞれ独立してコンパイルできること。
・関数プロトタイプ宣言を書くこと。
・すべての車体について情報と状態を表示すること。
・自力で完成させること。




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicles(struct Vehicle v);

int main(void)
{
  struct Vehicle vehicles[5] = {
    {1, 10, 85, 1.5f},
    {2, 14, 25, 1.2f},
    {3, 12, 60, 1.0f},
    {4, 15, 10, 0.8f},
    {5, 11, 30, 1.3f}
  };

  for (int i = 0; i < 5; i++) {
    showVehicles(vehicles[i]);
  }

  return 0;
}

void showVehicles(struct Vehicle v)
{
  printf("車体 : %d \n", v.number);
  printf("重量 : %d kg\n", v.weight);
  printf("残量 : %d %%\n", v.remaing);
  printf("速度 : %.1f \n", v.speed);

  if (v.remaing <= 30) {
      printf("状態 : 要充電\n");
    }else {
      printf("状態 : 正常\n");
    }
}

か

#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicles(struct Vehicle v[], int count);

int main(void)
{
  struct Vehicle vehicles[5] = {
    {1, 10, 85, 1.5f},
    {2, 14, 25, 1.2f},
    {3, 12, 60, 1.0f},
    {4, 15, 10, 0.8f},
    {5, 11, 30, 1.3f}
  };

  showVehicles(vehicles, 5);

  return 0;
}

void showVehicles(struct Vehicle v[], int count)
{
  for (int i = 0; i < count; i++) {
    printf("車体 : %d \n", v[i].number);
    printf("重量 : %d kg\n", v[i].weight);
    printf("残量 : %d %%\n", v[i].remaing);
    printf("速度 : %.1f \n", v[i].speed);

    if (v[i].remaing <= 30) {
      printf("状態 : 要充電\n");
    }else {
      printf("状態 : 正常\n");
    }
  }
}



============================================================================================================================================




【C-Day29：Level 2 — 演習問題4】
テーマ：運搬車体の走行状態確認

━━━━━━━━━━━━━━━━━━━━━━━━
■ 構造体の情報
━━━━━━━━━━━━━━━━━━━━━━━━

struct Vehicle を定義する。

メンバーは次の4つ。

・車体番号（int）
・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）


■ 管理する車体

車体1
・番号：1
・重量：10kg
・残量：80%
・速度：1.5

車体2
・番号：2
・重量：16kg
・残量：70%
・速度：1.1

車体3
・番号：3
・重量：12kg
・残量：20%
・速度：0.9

車体4
・番号：4
・重量：15kg
・残量：21%
・速度：1.3

車体5
・番号：5
・重量：18kg
・残量：10%
・速度：0.8


━━━━━━━━━━━━━━━━━━━━━━━━
■ 共通の処理
━━━━━━━━━━━━━━━━━━━━━━━━

1. 構造体配列で5台の情報を管理する。

2. 各車体について、以下の条件を判定する。

・重量が15kgを超えている
・バッテリー残量が20%以下である

3. どちらか一方でも該当する場合は、
   「停止必要」と表示する。

4. どちらにも該当しない場合は、
   「走行可能」と表示する。

5. 車体の情報と判定結果を表示する。

※ 車体の速度や残量は変更しない。


━━━━━━━━━━━━━━━━━━━━━━━━
【方法①：関数内でfor文】
━━━━━━━━━━━━━━━━━━━━━━━━

1. main関数で5台分の構造体配列を作成する。

2. 構造体配列と車体数を関数に渡す。

3. 関数内でfor文を使用する。

4. 5台分の情報と判定結果を表示する。

条件：
・関数名はshowVehiclesとする。
・引数は構造体配列と車体数。
・main関数ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━━━━━
【方法②：main関数でfor文】
━━━━━━━━━━━━━━━━━━━━━━━━

1. main関数で5台分の構造体配列を作成する。

2. main関数でfor文を使用する。

3. 構造体を1個ずつ関数へ値渡しする。

4. 関数内で1台分の情報と判定結果を表示する。

条件：
・関数名はshowVehicleとする。
・引数は構造体1個。
・showVehicle関数内ではfor文を使用しない。


━━━━━━━━━━━━━━━━━━━━━━━━
■ 共通の期待する実行結果
━━━━━━━━━━━━━━━━━━━━━━━━

車体1
重量：10kg
残量：80%
速度：1.5
状態：走行可能

車体2
重量：16kg
残量：70%
速度：1.1
状態：停止必要

車体3
重量：12kg
残量：20%
速度：0.9
状態：停止必要

車体4
重量：15kg
残量：21%
速度：1.3
状態：走行可能

車体5
重量：18kg
残量：10%
速度：0.8
状態：停止必要


━━━━━━━━━━━━━━━━━━━━━━━━
■ 回答条件
━━━━━━━━━━━━━━━━━━━━━━━━

・方法①と方法②をそれぞれ作成する。
・2つのプログラムは独立していること。
・それぞれ関数プロトタイプ宣言を書く。
・構造体のメンバーの型を正しく指定する。
・すべての車体を判定する。
・条件に従って関数名を付ける。
・表示がつながらないよう改行する。
・完成したC言語コードを提出する。




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicle(struct Vehicle v);

int main(void)
{
  struct Vehicle vehicles[5] = {
    {1, 10, 80, 1.5f},
    {2, 16, 70, 1.1f},
    {3, 12, 20, 0.9f},
    {4, 15, 21, 1.3f},
    {5, 18, 10, 0.8f}
  };

  for(int i = 0; i < 5; i++) {
    showVehicle(vehicles[i]);
  }

  return 0;
}

void showVehicle(struct Vehicle v)
{
  printf("車体 %d \n", v.number);
  printf("重量 : %d kg\n", v.weight);
  printf("残量 : %d %%\n", v.remaing);
  printf("速度 : %.1f \n", v.speed);

  if (v.weight > 15 || v.remaing <= 20) {
    printf("状態：停止必要\n");
  } else {
    printf("状態：走行可能\n");
  }
}



か



解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaing;
  float speed;
};

void showVehicles(struct Vehicle v[], int count);

int main(void)
{
  struct Vehicle vehicles[5] = {
    {1, 10, 80, 1.5f},
    {2, 16, 70, 1.1f},
    {3, 12, 20, 0.9f},
    {4, 15, 21, 1.3f},
    {5, 18, 10, 0.8f}
  };

  showVehicles(vehicles, 5);

  return 0;
}

void showVehicles(struct Vehicle v[], int count)
{
  for (int i = 0; i < count; i++) {
    printf("車体 %d \n", v[i].number);
    printf("重量 : %d kg\n", v[i].weight);
    printf("残量 : %d %%\n", v[i].remaing);
    printf("速度 : %.1f \n", v[i].speed);

    if (v[i].weight > 15 || v[i].remaing <= 20) {
      printf("状態：停止必要\n");
    } else {
      printf("状態：走行可能\n");
    }
  }
}



=============================================================================================================================================



■ 構造体

struct Vehicle

・車体番号（int）
・バッテリー残量（int）
・走行速度（float）

■ 車体情報

・車体番号：1
・バッテリー残量：65%
・走行速度：1.4

■ 作成するプログラム

1. Vehicle構造体を定義する。

2. main関数で車体1台分の構造体変数を作成する。

3. showVehicle関数を作成する。

4. main関数から構造体のアドレスを関数へ渡す。

5. showVehicle関数では構造体ポインタを受け取り、
   車体の情報を表示する。

■ 期待する実行結果

車体1
残量：65%
速度：1.4

■ 条件

・関数名はshowVehicle
・関数プロトタイプ宣言を書く
・構造体を値渡ししない
・アロー演算子 -> を使用する
・完成したC言語プログラムを書く




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void showVehicle(struct Vehicle *p);

int main(void)
{
  struct Vehicle vehicle = {1, 65, 1.4f};

  showVehicle(&vehicle);

  return 0;
}

void showVehicle(struct Vehicle *p)
{
  printf("車体 %d \n", p->number);
  printf("残量 : %d %%\n", p->remaining);
  printf("速度 : %.1f \n", p->speed);
}




=================================================================================================================



【問題：運搬車体のバッテリー安全制御】

■ 構造体

struct Vehicle

・車体番号（int）
・バッテリー残量（int）
・走行速度（float）


■ 車体情報

・車体番号：1
・バッテリー残量：15%
・走行速度：1.5


■ 作成するプログラム

1. Vehicle構造体を定義する。

2. main関数で車体1台分の構造体変数を作成する。

3. checkBattery関数を作成する。

4. main関数から構造体のアドレスを
   checkBattery関数へ渡す。

5. checkBattery関数では、次の処理を行う。

   ・バッテリー残量が20%以下の場合、
     走行速度を0.0に変更する。

   ・バッテリー残量が20%を超える場合、
     走行速度は変更しない。

6. main関数に戻った後、
   車体番号・バッテリー残量・走行速度を表示する。


■ 期待する実行結果

車体1
残量：15%
速度：0.0


■ 条件

・関数名はcheckBatteryとする。
・関数プロトタイプ宣言を書く。
・構造体を値渡ししない。
・構造体ポインタを引数として使用する。
・アロー演算子 -> を使用する。
・判定処理はcheckBattery関数内に書く。
・情報の表示はmain関数内で行う。
・完成したC言語プログラムを書く。



解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

int checkBattery(struct Vehicle *p);

int main(void)
{
  struct Vehicle vehicle = {
    1, 15, 1.5f
  };

  checkBattery(&vehicle);

  printf("車体 %d \n", vehicle.number);
  printf("残量 : %d %%\n", vehicle.remaining);
  printf("速度 : %.1f \n", vehicle.speed);

  return 0;
}

int checkBattery(struct Vehicle *p)
{
  if (p->battery <= 20) {
    p->speed = 0.0f;
  }

  return 0;
}

-----------------------------------------------

解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void checkBattery(struct Vehicle *p);

int main(void)
{
  struct Vehicle vehicle = {
    1, 15, 1.5f
  };

  checkBattery(&vehicle);

  printf("車体 %d \n", vehicle.number);
  printf("残量 : %d %%\n", vehicle.remaining);
  printf("速度 : %.1f \n", vehicle.speed);

  return 0;
}

void checkBattery(struct Vehicle *p)
{
  if (p->remaining <= 20) {
    p->speed = 0.0f;
  }
}




=========================================================================================================-



【問題19：正しい記法を書く】

次の構造体とポインタが存在します。

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;


■ 問題

以下の3つの操作をC言語で記述してください。

① ポインタpが保持するアドレスを変更し、
   vehicle2を指すようにする。

② ポインタpが現在指している構造体の
   remainingを20に変更する。

③ ポインタpが現在指している構造体の
   speedのメモリアドレスを取得し、
   float型を指すポインタ変数qに保存する。


■ 回答条件

・①②③それぞれのコードを書く。
・構造体の定義やmain関数は不要。
・必要な操作だけを記述する。




解答：

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;

p = &vehicle2;

p->remaining = 20;

float *q = &p->speed




=====================================================================================================



【問題20：正しい記法と実行結果】

以下のコードが存在します。

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {75, 1.6f};
struct Vehicle vehicle2 = {25, 0.7f};

struct Vehicle *p = &vehicle1;


■ 問題

次の操作を①から③の順番で実行してください。

① ポインタpが保持するアドレスを変更し、
   vehicle2を指すようにする。

② 現在pが指している構造体全体に、
   vehicle1の値をコピーする。

③ 現在pが指している構造体の
   speedだけを0.6fに変更する。


■ 問題④：実行結果の説明

①〜③を実行した後の
vehicle1とvehicle2の値を答えてください。

vehicle1
・remaining：
・speed：

vehicle2
・remaining：
・speed：


■ 回答条件

・①②③はC言語のコードで回答する。
・④は数値で回答する。
・構造体の定義やmain関数は書かなくてよい。



解答：

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {75, 1.6f};
struct Vehicle vehicle2 = {25, 0.7f};

struct Vehicle *p = &vehicle1;

p = &vehicle2;

*p = vehicle1;

p->speed = 0.6f;


vehicle1
・remaining：75
・speed：1.6

vehicle2
・remaining：75
・speed：0.6



=====================================================================================================


【問題21：正しい記法を書く】

次の構造体と変数が存在します。

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;


■ 問題

以下の操作を①から④の順番で実行してください。

① pが指している構造体のremainingメンバーの
   メモリアドレスを取得し、
   int型を指すポインタ変数qに保存する。

② ポインタqを使用して、
   vehicle1のremainingを25に変更する。

③ ポインタpが保持するアドレスを変更し、
   vehicle2を指すようにする。

④ ポインタpが現在指している構造体の
   speedメンバーのアドレスを取得し、
   float型を指すポインタ変数rに保存する。


■ 問題⑤：実行結果

①〜④を実行した後の値を答えてください。

vehicle1
・remaining：
・speed：

vehicle2
・remaining：
・speed：


■ 回答条件

・①〜④はC言語のコードで回答する。
・⑤は数値で回答する。
・構造体の定義やmain関数は書かなくてよい。
・新しく作るポインタ変数はqとrを使用する。




解答：

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;

int *q = &p->remaining;

*q = 25;

p = &vehicle2;

float *r = &p->speed;

vehicle1
・remaining：25
・speed：1.5

vehicle2
・remaining：40
・speed：0.8




=============================================================================================================



struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;

// ① remainingのアドレスをqに保存する
int *q = &p->remaining;

// ② qが指す値を25に変更する
*q = 25;

// ③ pが指す先をvehicle2に変更する
p = &vehicle2;

// ④ pが指す構造体のspeedを2.0に変更する
p->speed = 2.0f;


【問題22：最終結果】

vehicle1
remaining：25
speed：1.5

vehicle2
remaining：40
speed：2.0



=========================================================================================================



【問題23：最終テスト】

■ 前提となるコード

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;


━━━━━━━━━━━━━━━━━━━━
■ 問題
━━━━━━━━━━━━━━━━━━━━

以下の①〜⑥を順番に実行するコードを書いてください。

① ポインタpが指している構造体の
   remainingメンバーのアドレスを取得し、
   int型ポインタqに保存する。

② ポインタqを使って、
   vehicle1のremainingを60に変更する。

③ ポインタpが指す先を
   vehicle2に変更する。

④ 現在pが指している構造体全体に、
   vehicle1の値をコピーする。

⑤ ポインタpが指している構造体の
   speedを2.0fに変更する。

⑥ ポインタpが指している構造体の
   speedメンバーのアドレスを取得し、
   float型ポインタrに保存する。


━━━━━━━━━━━━━━━━━━━━
■ 問題⑦：最終結果
━━━━━━━━━━━━━━━━━━━━

①〜⑥の処理を終えた後の値を答えてください。

vehicle1
・remaining：
・speed：

vehicle2
・remaining：
・speed：


━━━━━━━━━━━━━━━━━━━━
■ 問題⑧：自分の言葉で説明
━━━━━━━━━━━━━━━━━━━━

次の2つの違いを説明してください。

A. p = &vehicle2;

B. *p = vehicle2;


━━━━━━━━━━━━━━━━━━━━
■ 回答条件
━━━━━━━━━━━━━━━━━━━━

・①〜⑥はC言語のコードで回答する。
・⑦は数値で回答する。
・⑧は文章で説明する。
・構造体の定義やmain関数は書かなくてよい。
・①〜⑥は必ず指定した順番で実行する。



解答：

struct Vehicle {
    int remaining;
    float speed;
};

struct Vehicle vehicle1 = {80, 1.5f};
struct Vehicle vehicle2 = {40, 0.8f};

struct Vehicle *p = &vehicle1;

int *q = &p->remaining;

*q = 60;

p = &vehicle2;

*p = vehicle1;

p->speed = 2.0f;

float *r = &p->speed;


vehicle1
・remaining：60
・speed：1.5

vehicle2
・remaining：60
・speed：2.0


A. p = &vehicle2;とB. *p = vehicle2;の違いは、Aは&vehicle2でvehicle2の構造体のメモリアドレスの事を指し、それをpに代入し保存される。後者はvehicle2の構造体の要素にある値を*pに代入、保存する。




============================================================================================================



【C-Day29：Level 3 — 演習問題3】

■ 構造体

struct Vehicle

次の4つのメンバーを持つ。

・車体番号（int）
・荷物の重量（int）
・バッテリー残量（int）
・走行速度（float）


■ 管理する車体

車体1
・番号：1
・重量：10kg
・残量：75%
・速度：1.5

車体2
・番号：2
・重量：16kg
・残量：60%
・速度：1.2

車体3
・番号：3
・重量：12kg
・残量：15%
・速度：1.0


━━━━━━━━━━━━━━━━━━━━
■ 作成するプログラム
━━━━━━━━━━━━━━━━━━━━

① Vehicle構造体を定義する。

② main関数で3台分の構造体配列を作成する。

③ checkVehicle関数を作成する。

④ main関数のfor文で、構造体配列の
   各車体のアドレスを1台ずつ関数に渡す。

⑤ checkVehicle関数では、
   構造体ポインタを受け取る。

⑥ 次の条件を判定する。

   ・重量が15kgを超えている
   ・バッテリー残量が20%以下である

⑦ どちらか一方でも条件を満たした場合、
   その車体の速度を0.0に変更する。

⑧ main関数に戻った後、
   3台すべての情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
重量：10kg
残量：75%
速度：1.5

車体2
重量：16kg
残量：60%
速度：0.0

車体3
重量：12kg
残量：15%
速度：0.0


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・関数名はcheckVehicleとする。
・関数プロトタイプ宣言を書く。
・checkVehicle関数の戻り値はvoid。
・関数には構造体のアドレスを渡す。
・構造体を値渡ししない。
・アロー演算子 -> を使用する。
・判定と速度変更はcheckVehicle関数で行う。
・情報の表示はmain関数で行う。
・同じ判定処理を3回書かない。
・完成したC言語プログラムを提出する。



解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int weight;
  int remaining;
  float speed;
};

void checkVehicle(struct Vehicle *p);

int main(void)
{
  struct Vehicle vehicles[3] = {
    {1, 10, 75, 1.5f},
    {2, 16, 60, 1.2f},
    {3, 12, 15, 1.0f}
  };

  for (int i = 0; i < 3; i++) {
    checkVehicle(&vehicles[i]);

    printf("車体 %d \n", vehicles[i].number);
    printf("重量 : %d kg\n", vehicles[i].weight);
    printf("残量 : %d %%\n", vehicles[i].remaining);
    printf("速度 : %.1f \n", vehicles[i].speed);
  }

  return 0;
}

void checkVehicle(struct Vehicle *p)
{
  if (p->weight > 15 || p->remaining <= 20) {
    p->speed = 0.0f;
  }
}



==================================================================================================================



【C-Day29：Level 4 — 演習問題1】

■ 構造体

struct Vehicle

メンバー：
・number（int）
・remaining（int）
・speed（float）


■ 車体データ

車体1
number：1
remaining：75
speed：1.5

車体2
number：2
remaining：15
speed：1.2

車体3
number：3
remaining：40
speed：1.0

車体4
number：4
remaining：10
speed：1.8


━━━━━━━━━━━━━━━━━━━━
■ 作成するプログラム
━━━━━━━━━━━━━━━━━━━━

① Vehicle構造体を定義する。

② main関数で4台分の構造体配列を作成する。

③ checkVehicles関数を作成する。

④ main関数からcheckVehicles関数へ
   構造体配列と要素数4を渡す。

⑤ checkVehicles関数では、
   構造体ポインタと要素数を受け取る。

⑥ checkVehicles関数内でfor文を使用し、
   全車体のバッテリー残量を確認する。

⑦ バッテリー残量が20以下の車体は、
   speedを0.0fに変更する。

⑧ 関数の処理が終わったら、
   main関数で全車体の情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
残量：75%
速度：1.5

車体2
残量：15%
速度：0.0

車体3
残量：40%
速度：1.0

車体4
残量：10%
速度：0.0


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・関数名はcheckVehicles
・関数プロトタイプ宣言を書く
・戻り値はvoid
・配列全体を1回の関数呼び出しで処理する
・配列の要素数も関数に渡す
・条件判定はcheckVehicles関数内で行う
・表示はmain関数内で行う
・完成したC言語コードを提出する



解答：
struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void checkVehicles(struct Vehicles *p, int count);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 75, 1.5f},
    {2, 15, 1.2f},
    {3, 40, 1.0f},
    {4, 10, 1.8}
  };

  checkVehicles(vehicles, 3);

  printf("車体 %d \n", vehicles[i].number);
  printf("残量 %d %%\n", vehicles[i].remaining);
  printf("速度 : %.1f \n", vehicles[i].speed);

  return 0;

}

void checkVehicles(struct Vehicles *p, int count)
{
  for (int i = 0; i < count; i++) {

    if (p->remaining <= 20) {
      p->speed = 0.0f;
    }
  }
}

----------------------------------------------

#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void checkVehicles(struct Vehicle *p, int count);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 75, 1.5f},
    {2, 15, 1.2f},
    {3, 40, 1.0f},
    {4, 10, 1.8}
  };

  checkVehicles(vehicles, 4);

  for (int i = 0; i < 4; i++) {
    printf("車体 %d\n", vehicles[i].number);
    printf("残量 %d %%\n", vehicles[i].remaining);
    printf("速度 : %.1f\n", vehicles[i].speed);
  }

  return 0;

}

void checkVehicles(struct Vehicles *p, int count)
{
  for (int i = 0; i < count; i++) {

    if (p[i]->remaining <= 20) {
      p[i]->speed = 0.0f;
    }
  }
}


======================================================================================================================--



【Level 4：短いコード演習1】

■ 前提コード

struct Vehicle {
    int number;
    int remaining;
};

struct Vehicle vehicles[3] = {
    {1, 80},
    {2, 50},
    {3, 20}
};

struct Vehicle *p = vehicles;


■ 問題

① 2台目の車体のremainingを
   60に変更してください。

   条件：p[i]と「.」を使うこと。

② 3台目の車体のremainingを
   90に変更してください。

   条件：p + iと「->」を使うこと。


■ 回答

①p[1].remaining = 60;

②(p + 2)->remaining = 90;




===============================================================================================================



【Level 4：短いコード演習2】

■ 前提コード

struct Vehicle {
    int number;
    int remaining;
    float speed;
};

struct Vehicle vehicles[4] = {
    {1, 80, 1.5f},
    {2, 50, 1.2f},
    {3, 30, 1.0f},
    {4, 15, 0.8f}
};

struct Vehicle *p = vehicles;


━━━━━━━━━━━━━━━━━━━━
■ 問題
━━━━━━━━━━━━━━━━━━━━

① 2台目の車体のremainingを25に変更する。

   条件：p[i]と「.」を使うこと。


② 4台目の車体のspeedを0.0fに変更する。

   条件：p + iと「->」を使うこと。


③ 3台目の車体のremainingを70に変更する。

   条件：&p[i]と「->」を使うこと。


━━━━━━━━━━━━━━━━━━━━
■ 回答
━━━━━━━━━━━━━━━━━━━━

①p[1].remaining = 25;

②(p + 3)->speed = 0.0f;

③(&p[2])->remaining = 70;



========================================================================================================================


【Level 4：短いコード演習3】

■ 前提コード

struct Vehicle {
    int number;
    int remaining;
    float speed;
};

struct Vehicle vehicles[5] = {
    {1, 80, 1.5f},
    {2, 60, 1.2f},
    {3, 40, 1.0f},
    {4, 20, 0.8f},
    {5, 10, 0.5f}
};

struct Vehicle *p = vehicles;


━━━━━━━━━━━━━━━━━━━━
■ 問題
━━━━━━━━━━━━━━━━━━━━

① 3台目のremainingを75に変更する。

② 5台目のspeedを0.0fに変更する。

③ 2台目のremainingを30に変更する。


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・ポインタpを使用する。
・①〜③はそれぞれ異なる記法で書く。
・ポインタpが指す先は変更しない。
・完成プログラムを書く必要はない。


━━━━━━━━━━━━━━━━━━━━
■ 回答
━━━━━━━━━━━━━━━━━━━━

①p[2].remaining = 75;

②(&p[4])->speed = 0.0f;

③(p + 1)->remaining = 30;



=============================================================================================================================



【C-Day29：Level 4 — プログラム演習1】

■ 構造体

struct Vehicle

メンバー：
・number（int）
・remaining（int）
・speed（float）


■ 車体データ

車体1：番号1、残量75、速度1.5
車体2：番号2、残量15、速度1.2
車体3：番号3、残量40、速度1.0
車体4：番号4、残量10、速度1.8


━━━━━━━━━━━━━━━━━━━━
■ 作成するプログラム
━━━━━━━━━━━━━━━━━━━━

① Vehicle構造体を定義する。

② main関数で4台分の構造体配列を作成する。

③ checkVehicles関数を作成する。

④ main関数からcheckVehicles関数へ
   構造体配列と要素数4を渡す。

⑤ checkVehicles関数では、
   構造体ポインタと要素数を受け取る。

⑥ checkVehicles関数内でfor文を使用し、
   すべての車体のバッテリー残量を確認する。

⑦ バッテリー残量が20以下の車体は、
   speedを0.0fに変更する。

⑧ 関数の処理が終わったら、
   main関数で4台すべての情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
残量：75%
速度：1.5

車体2
残量：15%
速度：0.0

車体3
残量：40%
速度：1.0

車体4
残量：10%
速度：0.0


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・関数名はcheckVehicles
・関数プロトタイプ宣言を書く
・戻り値はvoid
・配列全体を1回の関数呼び出しで処理する
・配列の要素数も関数に渡す
・条件判定と速度変更はcheckVehicles関数内で行う
・情報の表示はmain関数で行う
・完成したC言語プログラムを提出する



解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void checkVehicles(struct Vehicle *p, int count);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 75, 1.5f},
    {2, 15, 1.2f},
    {3, 40, 1.0f},
    {4, 10, 1.8f}
  };

  checkVehicles(vehicles, 4);

  for (int i = 0; i < 4; i++) {
    printf("車体 %d \n", vehicles[i].number);
    printf("残量 %d %% \n", vehicles[i].remaining);
    printf("速度 %.1f \n", vehicles[i].speed);
  }

  return 0;
}

void checkVehicles(struct Vehicle *p, int count)
{
  for (int i = 0; i < count; i++) {

    if ((p + i)->remaining <= 20) {
      (p + i)->speed = 0.0f;
    }
  }
}




①p[2].remaining = 75;

②(&p[4])->speed = 0.0f;

③(p + 1)->remaining = 30;

の&vehicles〇numberはなに？
vehicles〇numberはなに？
メモリアドレスを通して構造体を指すかどうかなら、前者は->で後者は.になる？同じ論理でいけば



==================================================================================================================



【C-Day29：Level 4 — プログラム演習2】

■ 構造体

struct Vehicle

メンバー：
・number（int）
・remaining（int）
・speed（float）


━━━━━━━━━━━━━━━━━━━━
■ 車体データ
━━━━━━━━━━━━━━━━━━━━

車体1
・番号：1
・残量：70%
・速度：1.5

車体2
・番号：2
・残量：40%
・速度：1.2

車体3
・番号：3
・残量：15%
・速度：1.0

車体4
・番号：4
・残量：50%
・速度：0.8


━━━━━━━━━━━━━━━━━━━━
■ 作成するプログラム
━━━━━━━━━━━━━━━━━━━━

① Vehicle構造体を定義する。

② main関数で4台分の構造体配列を作成する。

③ updateVehicles関数を作成する。

④ main関数からupdateVehicles関数に
   構造体配列と要素数を渡す。

⑤ updateVehicles関数内でfor文を使用し、
   すべての車体のバッテリー残量を調べる。

⑥ 次の条件で速度を変更する。

   ・残量が20%以下
      → 速度を0.0fに変更

   ・残量が20%を超え、50%以下
      → 速度を0.5fに変更

   ・残量が50%を超えている
      → 速度を変更しない

⑦ 処理終了後、main関数で
   すべての車体情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
残量：70%
速度：1.5

車体2
残量：40%
速度：0.5

車体3
残量：15%
速度：0.0

車体4
残量：50%
速度：0.5


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・関数名はupdateVehicles
・関数プロトタイプ宣言を書く
・戻り値はvoid
・構造体ポインタと要素数を引数にする
・配列全体を1回の関数呼び出しで処理する
・条件判定と速度変更はupdateVehicles関数内
・結果表示はmain関数内
・完成したC言語プログラムを提出する




解答：
#include <stdio.h>

struct Vehicle {
  int number;
  int remaining;
  float speed;
};

void updateVehicles(struct Vehicle *p, int count);

int main(void)
{
  struct Vehicle vehicles[4] = {
    {1, 70, 1.5f},
    {2, 40, 1.2f},
    {3, 15, 1.0f},
    {4, 50, 0.8f}
  };

  struct Vehicle *p = vehicles;

  updateVehicles(p, 4);

  for (int i = 0; i < 4; i++) {
    printf("車体 %d \n", vehicles[i].number);
    printf("残量 : %d%% \n", vehicles[i].remaining);
    printf("速度 : %.1f \n", vehicles[i].speed);
  }
}

void updateVehicles(struct Vehicle *p, int count)
{
  for (int i = 0; i < count; i++) {

    if (p[i].remaining <= 20) {
      p[i].speed = 0.0f;
    } else if (p[i].remaining <= 50) {
      p[i].speed = 0.5f;
    }
  }
}



============================================================================================================



【C-Day29：Level 4 — プログラム演習3】

■ 課題：センサー監視システム

複数のセンサーの測定値を確認し、
状態に応じて警告レベルを変更する
プログラムを作成してください。


━━━━━━━━━━━━━━━━━━━━
■ 構造体
━━━━━━━━━━━━━━━━━━━━

struct Sensor

メンバー：

・id（int）
・temperature（float）
・warning（int）


━━━━━━━━━━━━━━━━━━━━
■ センサーデータ
━━━━━━━━━━━━━━━━━━━━

センサー1
id：1
temperature：25.0
warning：0

センサー2
id：2
temperature：45.0
warning：0

センサー3
id：3
temperature：65.0
warning：0

センサー4
id：4
temperature：35.0
warning：0


━━━━━━━━━━━━━━━━━━━━
■ 作成するプログラム
━━━━━━━━━━━━━━━━━━━━

① Sensor構造体を定義する。

② main関数で4個分の構造体配列を作成する。

③ updateSensors関数を作成する。

④ main関数からupdateSensors関数へ
   構造体配列と要素数を渡す。

⑤ updateSensors関数内でfor文を使用し、
   すべてのセンサーの温度を確認する。

⑥ 次の条件に従ってwarningを変更する。

   ・温度が60.0以上
       warning = 2

   ・温度が40.0以上60.0未満
       warning = 1

   ・温度が40.0未満
       warning = 0

⑦ 関数の処理が終わったら、
   main関数ですべてのセンサー情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

センサー1
温度：25.0
警告レベル：0

センサー2
温度：45.0
警告レベル：1

センサー3
温度：65.0
警告レベル：2

センサー4
温度：35.0
警告レベル：0


━━━━━━━━━━━━━━━━━━━━
■ 条件
━━━━━━━━━━━━━━━━━━━━

・完成したC言語プログラムを最初から書く。
・関数名はupdateSensorsとする。
・関数プロトタイプ宣言を書く。
・updateSensors関数の戻り値はvoid。
・構造体ポインタと要素数を引数にする。
・配列全体を1回の関数呼び出しで処理する。
・温度判定とwarningの変更は関数内で行う。
・結果表示はmain関数内で行う。


#include <stdio.h>

typedef struct Sensor {
  int id;
  float temperature;
  int warning;
} Sensor;

void updateSensors(Sensor *p, int count);

int main(void)
{
  Sensor sensors[4] = {
    {1, 25.0, 0},
    {2, 45.0, 0},
    {3, 65.0, 0},
    {4, 35.0, 0}
  };

  Sensor *p = sensors;

  updateSensors(p, 4);

  for (int i = 0; i < 4; i++) {
    printf("センサー %d \n", p[i].id);
    printf("温度 : %.1f \n", p[i].temperature);
    printf("警告レベル : %d \n", p[i].warning);
  }
}

void updateSensors(Sensor *p, int count)
{
  for (int i = 0; i < count; i++) {
    
    if (p[i].temperature >= 60) {
      p[i].warning = 2;
    } else if (p[i].temperature >= 40) {
      p[i].warning = 1;
    } else {
      p[i].warning = 0;
    }
  }
}



==================================================================================================---



【C-Day29：総合最終問題】

課題：複数車体の安全制御システム

━━━━━━━━━━━━━━━━━━━━
■ ① 構造体
━━━━━━━━━━━━━━━━━━━━

struct Vehicle

メンバー：

・number（int）     車体番号
・remaining（int）  バッテリー残量
・weight（int）     積載重量
・speed（float）    走行速度


━━━━━━━━━━━━━━━━━━━━
■ ② 初期データ
━━━━━━━━━━━━━━━━━━━━

5台分の構造体配列を作成する。

車体1
number：1
remaining：80
weight：8
speed：1.5

車体2
number：2
remaining：50
weight：10
speed：1.2

車体3
number：3
remaining：20
weight：12
speed：1.0

車体4
number：4
remaining：70
weight：18
speed：1.8

車体5
number：5
remaining：35
weight：15
speed：1.1


━━━━━━━━━━━━━━━━━━━━
■ ③ 作成する関数
━━━━━━━━━━━━━━━━━━━━

【関数A】

関数名：checkVehicle

引数：
・構造体ポインタ

戻り値：
・void

役割：
1台の車体について安全条件を判定し、
必要に応じて速度を変更する。


【関数B】

関数名：updateVehicles

引数：
・構造体ポインタ
・要素数（int）

戻り値：
・void

役割：
for文で全車体を処理する。

各車体のアドレスを
checkVehicle関数に渡す。


━━━━━━━━━━━━━━━━━━━━
■ ④ 安全制御の条件
━━━━━━━━━━━━━━━━━━━━

checkVehicle関数では、
以下の条件で速度を変更する。

条件A：
・残量が20%以下
または
・重量が15kgを超える

→ speed = 0.0f


条件B：
・条件Aに該当せず、
  残量が50%以下

→ speed = 0.5f


条件C：
・上記のいずれにも該当しない

→ speedを変更しない


━━━━━━━━━━━━━━━━━━━━
■ ⑤ main関数で行う処理
━━━━━━━━━━━━━━━━━━━━

1. 車体5台分の構造体配列を初期化する。

2. updateVehicles関数を1回呼び出す。

3. 処理終了後、for文で
   5台すべての情報を表示する。


━━━━━━━━━━━━━━━━━━━━
■ ⑥ 期待する実行結果
━━━━━━━━━━━━━━━━━━━━

車体1
残量：80%
重量：8kg
速度：1.5

車体2
残量：50%
重量：10kg
速度：0.5

車体3
残量：20%
重量：12kg
速度：0.0

車体4
残量：70%
重量：18kg
速度：0.0

車体5
残量：35%
重量：15kg
速度：0.5


━━━━━━━━━━━━━━━━━━━━
■ ⑦ 制約
━━━━━━━━━━━━━━━━━━━━

・C言語で最初から完成コードを書く。

・関数プロトタイプ宣言を書く。

・関数Aは1台の車体を処理する。

・関数Bは配列全体を処理する。

・関数Bから関数Aを呼び出す。

・速度の条件判定は関数Aで行う。

・結果の表示はmain関数で行う。

・グローバル変数は使用しない。

・配列全体をコピーして関数に渡さない。

・これまで学習した文法だけを使う。



#include <stdio.h>

typedef struct Vehicle {
  int number;
  int remaining;
  int weight;
  float speed;
} Vehicle;

void updateVehicles(Vehicle *p, int count);

void checkVehicle(Vehicle *p);

int main(void)
{
  Vehicle vehicles[5] = {
    {1, 80, 8, 1.5f},
    {2, 50, 10, 1.2f},
    {3, 20, 12, 1.0f},
    {4, 70, 18, 1.8f},
    {5, 35, 15, 1.1f}
  };

  Vehicle *p = vehicles;

  updateVehicles(p, 5);

  for (int i = 0; i < 5; i++) {
    printf("車体 %d \n", p[i].number);
    printf("残量 : %d %%\n", p[i].remaining);
    printf("重量 : %d kg\n", p[i].weight);
    printf("速度 : %.1f \n", p[i].speed);
  }

  return 0;
}

void updateVehicles(Vehicle *p, int count)
{
  for (int i = 0; i < count; i++) {
    checkVehicle(&p[i]);
  }
}

void checkVehicle(Vehicle *p)
{
  if (p->remaining <= 20 || p->weight > 15) {
    p->speed = 0.0f;
  } else if (p->remaining <= 50) {
    p->speed = 0.5f;
  }
}

