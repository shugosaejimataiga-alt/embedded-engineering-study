【問題2】

次の条件を満たすCプログラムを作成してください。

① LED_ONを1、LED_OFFを0としてマクロを定義する。

② int型変数ledStateを宣言し、
   LED_ONで初期化する。

③ ledStateの値を判定する。

④ 1なら「LED ON」、
   0なら「LED OFF」と表示する。


解答：
#include <stdio.h>

#define LED_ON 1
#define LED_OFF 0

int main(void)
{
  int ledState = LED_ON;

  if (ledState == 1) {
    printf("LED ON");
  } else if (ledState == 0) {
    printf("LED OFF");
  }

  return 0;
}



===============================================================================


【問題1】

次の条件を満たすCプログラムを作成してください。

① 引数として受け取った数値を3倍にする
   関数形式マクロ「TRIPLE」を定義する。

② int型変数valueを宣言し、10で初期化する。

③ TRIPLEを使用してvalueを3倍にする。

④ 計算結果をprintfで表示する。



解答：
#include <stdio.h>

#define TRIPLE(x) ((x) * 3)

int main(void)
{
  int value = 10;

  int newValue = TRIPLE(value);

  printf("%d\n", newValue);

  return 0;
}



==============================================================================================



【問題2】

次の条件を満たすCプログラムを作成してください。

① DEBUG_MODEというマクロを定義する。

② DEBUG_MODEが定義されている場合、
   「DEBUG MODE」と表示する。

③ DEBUG_MODEが定義されていない場合、
   「NORMAL MODE」と表示する。

④ main関数を使用する。



解答：
#include <stdio.h>

#define DEBUG_MODE

int main(void)
{
  #ifdef DEBUG_MODE
      printf("DEBUG MODE");
  
  #else 
      printf("NORMAL MODE");
  
  #endif

  return 0;
}