自力問題1

次の条件のプログラムを書いてください。

条件
show_temperatureという関数を作る。
main関数から、

25

を渡す。
関数側で、

Temperature: 25

と表示する。


必ず使用する形
void show_temperature(int temperature);
出力
Temperature: 25


プログラム全体を自分で書いて解答してください。



解答：
#include <stdio.h>

void show_temperature(int temperature);

int main(void)
{
  show_temperature(25);

  return 0;
}

void show_temperature(int temperature)
{
  printf("Temperature: %d\n", temperature);
}



=================================================================


自力問題2

次の条件でプログラムを書いてください。

multiply という関数を作ります。

main関数から、

5
4

を渡します。

関数の中で掛け算をして、その結果を return で返してください。

main関数では戻り値を、

int result;

に保存して表示します。

使用する関数プロトタイプ
int multiply(int a, int b);
出力
20

プログラム全体を書いてください。



解答：
#include <stdio.h>

int multiply(int a, int b);

int main(void)
{
  int result;

  result = multiply(5, 4);

  printf("%d\n", result);

  return 0;
}

int multiply(int a, int b)
{
  return a * b;
}



====================================================================


自力問題3

次のコードを見て、実行結果を文字で答えてください。

#include <stdio.h>

void change(int x);

int main(void)
{
    int number = 5;

    change(number);

    printf("%d\n", number);

    return 0;
}

void change(int x)
{
    x = 20;
}

答える内容は、

実行結果：
理由：

の2つです。



解答：
実行結果：5

理由：change関数にあるint xとnumberは違っているがxもまず5になる。しかし今回出力するようになっているのはnumberだから5。int xは後に20になる。




====================================================================



自力問題4

次の条件でプログラムを書いてください。

関数1
int add(int a, int b);

a + b を返す。

関数2
int triple(int number);

受け取った数を3倍して返す。

main関数

最初に、

5 + 3

を計算し、その結果を triple に渡してください。

最終的な結果を表示します。

出力
24

プログラム全体を書いてください。




解答：
#include <stdio.h>

int add(int a, int b);
int triple(int number);

int main(void)
{
  int result;

  result = add(5,3);

  triple(result);

  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int triple(int number);
{
  return number * 3;
}

----------------------------

解答：
#include <stdio.h>

int add(int a, int b);
int triple(int number);

int main(void)
{
  int result;

  result = add(5,3);

  result = triple(result);

  printf("%d\n", result);

  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int triple(int number)
{
  return number * 3;
}



=======================================================================


応用問題

2つの整数 12 と 4 を使って、次の処理をしてください。

まず2つの数を引き算する
その結果を別の関数に渡して2倍する
最後の結果を表示する

出力結果は、

16

です。

プログラム全体を書いてください。



解答：
#include <stdio.h>

int subtraction(int a, int b);
int twice(int number);

int main(void)
{
  int result;

  result = subtraction(12,4);

  result = twice(result);

  printf("%d\n", result);

  return 0;
}

int subtraction(int a, int b)
{
  return a - b;
}

int twice(int number)
{
  return number * 2;
}


===================================================================


自分の言葉で説明する問題です。

次の3つを、自分の言葉で説明してください。

引数とは何か
戻り値とは何か
値渡しとは何か

コードは書かなくて大丈夫です。


解答：
引数とは何か
引数とは、外部から、その関数で使うように入れられる値。

戻り値とは何か
関数で処理した後に返される値。return 〇;のような形である。

値渡しとは何か
別関数で定義された値を別関数に渡す事

--------------------------------------------

解答：
引数とは何か
引数とは、外部から、その関数で使うように入れられる値。

戻り値とは何か
関数で処理した後に返される値。return 〇;のような形である。

値渡しとは何か
/* 別関数での変数をコピーして、その関数の処理で使う。
   渡される側の変数を変更しても、渡す側の変数は変らない。 */



===================================================================


最終問題

2つの整数 7 と 5 を使って、次の処理をしてください。

2つの数を足し算する関数を作る
その結果を別の関数に渡し、3倍する
その結果をさらに別の関数に渡し、2を引く
最後の結果を表示する
関数では、引数と戻り値を使うこと

出力結果は、

34

です。

プログラム全体を書いてください。



解答：
#include <stdio.h>

int add(int a, int b);
int triple(int number);
int minus2(int numeric);

int main(void)
{
  int result;

  result = add(7,5);

  result = triple(result);

  result = minus2(result);

  printf("%d\n", result);

  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int triple(int number)
{
  return number * 3;
}

int minus2(int numeric)
{
  return numeric - 2;
}