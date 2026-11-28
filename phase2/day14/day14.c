

問題1：関数を書いてみる
次のプログラムを作ってください。

条件

show_led という関数を作ります。
show_led が呼び出されたら、

LED ON

と表示してください。

そして main 関数から、

show_led();

を呼び出してください。



骨組み

#include <stdio.h>

ここにshow_led関数を書く

int main(void)
{
    ここでshow_led関数を呼び出す

    return 0;
}


今回は show_led に値を渡さず、値も返さない関数にしてください。




解答：
#include <stdio.h>

void show_led(void)
{
  printf("LED ON\n");
}

int main(void)
{
  show_led();

  return 0;
}


===================================================================


問題2：void の理解です。

次の関数があります。

void show_status(void)
{
    printf("RUNNING\n");
}

このコードについて、次の2つを自分の言葉で答えてください。

左側の void は何を意味していますか？
show_status(void) のカッコ内の void は何を意味していますか？


解答：
左側の void は何を意味していますか？
値を返さずに処理をする。

show_status(void) のカッコ内の void は何を意味していますか？
この関数に値を入れない。貰わないでやるという事。



=================================================================


問題3：複数の関数を作るです。

次の条件でコードを書いてください。

show_start という関数を作る
SYSTEM START と表示する
show_stop という関数を作る
SYSTEM STOP と表示する
どちらも値を受け取らず、値も返さない
main から show_start() → show_stop() の順で呼び出す


解答：
#include <stdio.h>

void show_start(void)
{
  printf("SYSTEM START\n");
}

void show_stop(void)
{
  printf("SYSTEM STOP\n");
}

int main(void)
{
  show_start();

  show_stop();

  return 0;
}


=============================================================


問題4

次のコードを完成させてください。

条件は、

show_ready 関数は READY と表示する
show_ready の定義は main の後ろ
main より前に関数プロトタイプを書く
値は受け取らず、値も返さない


解答：
#include <stdio.h>

void show_ready(void);

int main(void)
{
  show_ready();

  return 0;
}

void show_ready(void)
{
  printf("READY\n");
}



============================================================


問題5：最終問題です。
これに合格したら C-Day14終了です。

条件：

show_start 関数を作る
START と表示
show_stop 関数を作る
STOP と表示
2つとも値を受け取らず、値も返さない
main より前に関数プロトタイプを書く
関数本体は main より後ろに書く
main から show_start() → show_stop() の順で呼び出す



解答：
#include <stdio.h>

void show_start(void);
void show_stop(void);

int main(void)
{
  show_start();

  show_stop();

  return 0;
}

void show_start(void)
{
  printf("START\n");
}

void show_stop(void)
{
  printf("STOP\n");
}