問題1

次の条件をC言語で書いてください。

temperature に温度を保存する。
温度が35以上なら
WARNING
と表示する。

temperature の値は 38 としてください。

main関数を含めた、実行できるコード全体を書いてください。


解答：
#include <stdio.h>

int main(void)
{
  int tempareture = 38;

  if (tempareture >= 35) {
      printf("WARNING");
  }

  return 0;
}


=======================================================================


問題2

次の条件をC言語で書いてください。

battery にバッテリー残量を保存する。
battery が20以下なら
LOW BATTERY
と表示する。

それ以外なら
BATTERY OK
と表示する。

battery の値は 45 としてください。

main関数を含めた、実行できるコード全体を書いてください。


解答：
#include <stdio.h>

int main(void)
{
  int battery = 45;

  if (battery <= 20) {
      printf("LOW BATTERY");
  } else {
    printf("BATTERY OK");
  }

  return 0;
}


=======================================================================


問題3

次の条件をC言語で書いてください。

score に点数を保存する。

80点以上なら
GOOD

60点以上なら
PASS

それ以外なら
FAIL

と表示する。

score の値は 72 としてください。

main関数を含めた、実行できるコード全体を書いてください。


解答：
#include <stdio.h>

int main(void)
{
  int score = 72;

  if (score >= 80) {
      printf("GOOD\n");
  } else if (score >= 60) {
      printf("PASS\n");
  } else {
      printf("FAIL\n");
  }

  return 0;
}


=======================================================================


問題4

次の条件をC言語で書いてください。

temperature に温度を保存する。
humidity に湿度を保存する。

温度が30以上の場合だけ湿度を確認する。

その中で、湿度が70以上なら

FAN HIGH

と表示する。

値は、

temperature = 35
humidity = 75

としてください。

main 関数を含めた実行できるコード全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int temperature = 35;

  int humidity = 75;

  if (temperature >= 30) {
    if (humidity >= 70) {
        printf("FAN HIGH\n");
    }
  }

  return 0;
}


=======================================================================


問題5

次の条件をC言語で書いてください。

temperature に温度を保存する。

35度以上なら
DANGER

30度以上なら
WARNING

それ以外なら
NORMAL

と表示する。

temperature の値は 33 としてください。

main 関数を含めた、実行できるコード全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int temperature = 33;

  if (temperature >= 35) {
      printf("DANGER\n");
  } else if (temperature >= 30) {
      printf("WARNING\n");
  } else {
      printf("NORMAL\n");
  }

  return 0;
}


=======================================================================


問題6

次の条件をC言語で書いてください。

mode に動作モードを保存する。
temperature に温度を保存する。

mode が1のときだけ温度を確認する。

その中で、

温度が30以上なら FAN ON
それ以外なら FAN OFF

と表示する。

mode が1以外なら
STOP

と表示する。

値は次の通りです。

mode = 1
temperature = 28

main 関数を含めた、実行できるコード全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int mode = 1;
  int temperature = 28;

  if (mode == 1) {
    if (temperature >= 30) {
        printf("FAN ON\n");
    } else {
        printf("FAN OFF");
    }
  } else {
        printf("STOP");
  }

  return 0;
}


============================================================================



最終問題

次の条件を満たすプログラムを書いてください。

temperature に温度を保存する。
humidity に湿度を保存する。

温度が35以上なら
DANGER

温度が30以上35未満なら、さらに湿度を確認する。

その中で、

湿度が70以上なら HOT AND HUMID
それ以外なら HOT

温度が30未満なら
NORMAL

と表示する。

値は次の通りです。

temperature = 32
humidity = 75

main 関数を含めた、実行できるコード全体を書いてください。



解答：
#include <stdio.h>

int main(void)
{
  int temperature = 32;
  int humidity = 75;

  if (temperature >= 35) {
      printf("DANGER");
  } else if (temperature >= 30) {
    if (humidity >= 70) {
        printf("HOT AND HUMID");
    } else {
        printf("HOT");
    }
  } else {
      printf("NORMAL");
  }

  return 0;
}