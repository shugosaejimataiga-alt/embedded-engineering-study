

【問題】

荷物を運搬する車体の走行速度を管理します。

1. motorSpeedというint型変数を宣言し、
   初期値を15にしてください。

2. ポインタを利用して、
   motorSpeedの値を40に変更してください。

3. 最後にmotorSpeedの値を表示してください。

【期待する出力】

40

【提出内容】

・完成したC言語のコード



解答：
#include <stdio.h>

int main(void)
{
  int motorSpeed = 15;
  int *p = &motorSpeed;

  *p = 40;

  printf("%d\n", motorSpeed);

  return 0;
}



===================================================================================


【問題】

車体のモーター速度を管理するプログラムを作成してください。

1. main関数で次の変数を用意する。
   ・motorSpeed = 20
   ・warning = 0

2. updateMotor関数を作成する。

3. updateMotor関数では、次の処理を行う。
   ・motorSpeedの値を50に変更する。
   ・warningの値を1に変更する。

4. main関数からupdateMotor関数を呼び出す。

5. main関数で変更後の2つの値を表示する。


【期待する出力】

motorSpeed: 50
warning: 1


【提出内容】

・完成したC言語のコード




解答：
#include <stdio.h>

void updateMotor(int *p1, int *p2);

int main(void)
{
  motorSpeed = 20;
  warning = 0;

  updateMotor(&motorSpeed, &warning);

  printf("%d\n", motorSpeed);
  printf("%d\n", warning);

  return 0;
}

void updateMotor(int *p1, int *p2)
{
  *p1 = 20;
  *p2 = 0;
}

-----------------------------------------

解答：
#include <stdio.h>

void updateMotor(int *p1, int *p2);

int main(void)
{
  int motorSpeed = 20;
  int warning = 0;

  updateMotor(&motorSpeed, &warning);

  printf("%d\n", motorSpeed);
  printf("%d\n", warning);

  return 0;
}

void updateMotor(int *p1, int *p2)
{
  *p1 = 50;
  *p2 = 1;
}



===============================================================================



【問題】

10〜15kgの荷物を運搬する車体があります。

車体が緊急停止するとき、
モーター速度を0に変更するプログラムです。

しかし、次のコードには不具合があります。

#include <stdio.h>

void emergencyStop(int *p);

int main(void)
{
    int motorSpeed = 40;
    int *p;

    emergencyStop(p);

    printf("%d\n", motorSpeed);

    return 0;
}

void emergencyStop(int *p)
{
    *p = 0;
}

【課題】

1. コードの不具合を発見してください。

2. 正常に動作するように修正してください。

3. 次の2つを自分の言葉で説明してください。

   ① 元のコードの何が間違っていたのか。

   ② なぜ、その間違いが危険なのか。

【期待する出力】

0

【提出内容】

・修正したC言語のコード
・①と②の説明




解答：

コードの不具合の原因としてint *p;の宣言にあると考えます。
ポインタがNULLとされているわけでもなく、不明である為危ないです。


#include <stdio.h>

void emergencyStop(int *p);

int main(void)
{
    int motorSpeed = 40;
    int *p = &motorSpeed;

    emergencyStop(p);

    printf("%d\n", motorSpeed);

    return 0;
}

void emergencyStop(int *p)
{
    *p = 0;
}



===============================================================================




【問題】

10〜15kgの荷物を運搬する車体があります。

モーター速度を変更するプログラムですが、
次のコードには不具合があります。

#include <stdio.h>

void updateMotor(int *p);

int main(void)
{
    int motorSpeed = 30;
    int *p = NULL;

    updateMotor(p);

    printf("%d\n", motorSpeed);

    return 0;
}

void updateMotor(int *p)
{
    *p = 60;
}

【課題】

1. コードの不具合を発見してください。

2. 正常に動作するように修正してください。

3. 次の3つを自分の言葉で説明してください。

   ① 元のコードの何が間違っているのか。

   ② NULLと未初期化ポインタの違い。

   ③ NULLポインタを安全に扱うには、
      どのような確認が必要なのか。

【期待する出力】

60

【提出内容】

・修正したC言語のコード
・①②③の説明




解答：
#include <stdio.h>

void updateMotor(int *p);

int main(void)
{
    int motorSpeed = 30;

    int *p = NULL;

    if (p == NULL) {
      p = &motorSpeed;
    }

    updateMotor(p);

    printf("%d\n", motorSpeed);

    return 0;
}

void updateMotor(int *p)
{
    *p = 60;
}


int *p = NULL;のままのポインタを使おうとしている事が問題であると。
NULLはメモリアドレスが何もなく指し先がない状態。未初期化はポインタがメモリアドレスを指しているのか。NULLなのか。自体が不明であるという事。
NULLポインタを安全に扱うには、if文でNULLであることの確認が必要である。




==============================================================================



【問題】

10〜15kgの荷物を運搬する車体があります。

車体には5つの距離センサーがあり、
測定した距離を配列で管理しています。

次のプログラムは、5つの距離データを
それぞれ10減らして表示するものです。

しかし、コードには不具合があります。


#include <stdio.h>

int main(void)
{
    int distances[5] = {100, 90, 80, 70, 60};
    int *p = distances;

    for (int i = 0; i < 5; i++) {
        p += 1;
        *p -= 10;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", distances[i]);
    }

    return 0;
}


【課題】

1. コードの不具合を発見してください。

2. 正常に動作するように修正してください。

3. 次の3つを自分の言葉で説明してください。

   ① 元のコードの何が間違っているのか。

   ② なぜ、その間違いが危険なのか。

   ③ p += 1 と *p -= 10 は、
      それぞれ何をしているのか。


【期待する出力】

90
80
70
60
50


【提出内容】

・修正したC言語のコード
・①②③の説明




解答：
不具合はp += 1;をさきにやっている事で、for文5週目において配列外で-10をしてしまいます。
配列外のメモリアドレス自体指してもいいが。値があるか分からないのにやってしまう事がいけいない。
*p -= 10はポインタに保存されているメモリアドレスにある場所、メモリにある値に対して-10をしている。p += 1;は

#include <stdio.h>

int main(void)
{
    int distances[5] = {100, 90, 80, 70, 60};
    int *p = distances;

    for (int i = 0; i < 5; i++) {
        *p -= 10;
        p += 1;
    }

    p = p-5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", distances[i]);
    }

    return 0;
}




==================================================================================


【問題】

車体のモーター速度を管理するプログラムを
作成してください。

【仕様】

1. main関数で次の変数を宣言する。

   ・motorSpeed = 25
   ・backupSpeed = 70

2. ポインタ変数selectedを宣言し、
   最初はmotorSpeedを指すようにする。

3. changeMotor関数を作成する。

4. changeMotor関数では、二重ポインタを使い、
   main関数のselectedがbackupSpeedを
   指すように変更する。

5. main関数からchangeMotor関数を呼び出す。

6. main関数で次の値を表示する。

   ・motorSpeedの値
   ・backupSpeedの値
   ・selectedが指す先の値


【期待する出力】

25
70
70


【提出内容】

① 完成したC言語のコード

② changeMotor関数で何が変更されたのか、
自分の言葉で説明してください。


#include <stdio.h>

void changeMotor(int **pp1, int *p2);

int main(void)
{
    int motorSpeed = 25;
    int backupSpeed = 70;

    int *selected = &motorSpeed;
    int **pp1 = &selected;

    int *backup = &backupSpeed;

    changeMotor(pp1, backup);

    printf("%d\n", motorSpeed);
    printf("%d\n", backupSpeed);
    printf("%d\n", *selected);
}

void changeMotor(int **pp1, int *p2)
{
    *pp1 = p2;
}


==============================================================================================


【問題】

荷物を運搬する車体の動作モードを管理します。

次の仕様を満たすC言語プログラムを
作成してください。


【仕様】

1. main関数で、文字列リテラル"RUN"を
   指すポインタ変数modeを宣言する。
   指す先の文字は変更できないものとする。

2. changeMode関数を作成する。

3. changeMode関数では、受け取った
   ポインタを通して動作モードを
   "STOP"に変更する。

4. main関数からchangeMode関数を呼び出す。

5. main関数で変更後の動作モードを表示する。


【期待する出力】

STOP


【提出内容】

・完成したC言語のコード



#include <stdio.h>

void changeMode(const char **pp);

int main(void)
{
    const char *mode = "RUN";
    const char **pp = &mode;

    changeMode(pp);

    printf("%s\n", *pp);
}

void changeMode(const char **pp)
{
    *pp = "STOP";
}



============================================================================================




【問題】

荷物を運搬する車体の制御シミュレーターを
C言語で作成してください。

車体には5つの距離センサーがあります。

距離センサーの値を補正し、
障害物との距離によって車体を停止させます。


━━━━━━━━━━━━━━━━━━━━
【1. main関数】
━━━━━━━━━━━━━━━━━━━━

次の変数を宣言してください。

・distances[5] = {100, 70, 40, 30, 90}
・motorSpeed = 40
・mode = "RUN"

motorSpeedはint型とします。

modeは文字列リテラルを指すポインタ変数とし、
指す先の文字は変更できないものとします。


━━━━━━━━━━━━━━━━━━━━
【2. reduceDistances関数】
━━━━━━━━━━━━━━━━━━━━

次の処理を行う関数を作成してください。

① main関数から距離センサー配列と
   要素数を受け取る。

② ポインタを使って配列の5つの値を
   それぞれ10減らす。

③ 配列の範囲外アクセスを発生させない。

④ 受け取ったポインタがNULLの場合は
   何も変更せず処理を終了する。


━━━━━━━━━━━━━━━━━━━━
【3. judgeVehicle関数】
━━━━━━━━━━━━━━━━━━━━

次の処理を行う関数を作成してください。

① main関数から以下を受け取る。

・距離センサー配列
・配列の要素数
・motorSpeedを変更するための情報
・modeを変更するための情報

② 配列内の値をすべて調べる。

③ 20以下の値が1つでもあれば、
   main関数の次の変数を変更する。

・motorSpeedを0にする。
・modeが"STOP"を指すようにする。

④ すべての値が20より大きい場合は、
   motorSpeedとmodeを変更しない。

⑤ 受け取ったポインタのいずれかが
   NULLの場合は、何も変更せず
   処理を終了する。

⑥ 配列の内容は変更しない。


━━━━━━━━━━━━━━━━━━━━
【4. main関数での処理順序】
━━━━━━━━━━━━━━━━━━━━

① 変数を宣言・初期化する。

② reduceDistances関数を呼び出す。

③ judgeVehicle関数を呼び出す。

④ distancesの5つの値を順番に表示する。

⑤ motorSpeedの値を表示する。

⑥ modeの文字列を表示する。


━━━━━━━━━━━━━━━━━━━━
【5. 期待する出力】
━━━━━━━━━━━━━━━━━━━━

90
60
30
20
80
motorSpeed: 0
mode: STOP


━━━━━━━━━━━━━━━━━━━━
【6. 説明問題】
━━━━━━━━━━━━━━━━━━━━

完成したコードについて、次の内容を
自分の言葉で説明してください。

① reduceDistances関数では、
   ポインタをどのように使用したのか。

② judgeVehicle関数では、
   なぜmain関数のmotorSpeedを変更できるのか。

③ judgeVehicle関数では、
   なぜmain関数のmodeが指す先を変更できるのか。

④ NULLを確認せずに間接参照すると、
   どのような問題が発生するのか。

⑤ 配列の最後の1つ後ろのポインタを
   作ることと、その場所を間接参照することは、
   それぞれ許されるのか。


━━━━━━━━━━━━━━━━━━━━
【提出内容】
━━━━━━━━━━━━━━━━━━━━

1. 完成したC言語のコード
2. 説明問題①〜⑤の解答



#include <stdio.h>

void reduceDistances(int *p1, int count);

void judgeVehicle(int *p1, int count, int *p2, const char **pp);

int main(void)
{
    int distances[5] = {100, 70, 40, 30, 90};
    int *p1 = distances;

    int motorSpeed = 40;
    int *p2 = &motorSpeed;

    const char *mode = "RUN";
    const char **pp = &mode;

    reduceDistances(p1, 5);

    judgeVehicle(p1, 5, p2, pp);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", distances[i]);
    }

    printf("motorSpeed: %d\n", motorSpeed);

    printf("mode: %s\n", mode);
}

void reduceDistances(int *p, int count)
{
    if (p == NULL) {
            return;
    }

    for (int i = 0; i < count; i++) {
        p[i] -= 10;
    }
}

void judgeVehicle(int *p1, int count, int *p2, const char **pp)
{
        if (p1 == NULL || p2 == NULL || pp == NULL) {
            return;
        }

        for (int i = 0; i < count; i++) {

            if (p1[i] <= 20) {
                *p2 = 0;
                *pp = "STOP";
            }
        }
}


① reduceDistances関数では、
   ポインタをどのように使用したのか。
   配列の要素ごとをメモリアドレス化して、関数内でメモリアドレスのメモリにある値を操作した。

② judgeVehicle関数では、
   なぜmain関数のmotorSpeedを変更できるのか。
   値が保存されているメモリのメモリアドレスを共有することによって、値が変更できるようになるから。

③ judgeVehicle関数では、
   なぜmain関数のmodeが指す先を変更できるのか。
   文字列を指すメモリアドレスが入っている変数自体のメモリアドレスを共有することによって、文字列を指すメモリアドレスが変更できる。

④ NULLを確認せずに間接参照すると、
   どのような問題が発生するのか。
   未定義動作となり勝手にメモリアドレスを書き換えたりするなどの異常終了問題が起きる

⑤ 配列の最後の1つ後ろのポインタを
   作ることと、その場所を間接参照することは、
   それぞれ許されるのか。
   ポインタを作る事、アクセス許されるが、間接参照（ポインタが指しているメモリアドレスのメモリにある値にアクセスする事）はゆるされない。