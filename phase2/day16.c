問題1：コードを書いてください

次の条件を満たすプログラムを自分で書いてください。

グローバル変数
threshold = 30

main関数のローカル変数
temperature = 32

temperature が threshold 以上なら

FAN ON

と表示する。

さらにif文の中で

int fan = 1;

という変数を作り、

fan = 1

と表示する。

実行結果は、

FAN ON
fan = 1

です。

今回は**threshold、temperature、fanをそれぞれどこで宣言するか**を意識して書いてください。



解答：
#include <stdio.h>

int threshold = 30;

int main(void)
{
  int temperature = 32;

  if (temperature >= threshold) {

    int fan = 1;

    printf("FAN ON\n");

    printf("fan = %d\n", fan);
  }

  return 0;
}


========================================================================================


問題2：スコープの理解

次のコードを見てください。

#include <stdio.h>

int value = 100;

int main(void)
{
    int number = 10;

    if (number == 10) {
        int result = 20;

        printf("%d\n", value);
        printf("%d\n", number);
        printf("%d\n", result);
    }

    return 0;
}

次の3つを、自分の言葉で答えてください。

valueは何変数か。また、どこから使えるか
numberは何変数か。また、どこから使えるか
resultは何変数か。また、どこから使えるか


解答：
valueは何変数か。また、どこから使えるか
valueはグローバル変数でファイルスコープという範囲で同じファイルの中にある関数なら使えます。

numberは何変数か。また、どこから使えるか
numberはローカル変数でmain関数の中で定義されているので、main関数の中であれば使えます。

resultは何変数か。また、どこから使えるか
resultはローカル変数でif文の中で定義されているので、if文の中であれば使えます。



====================================================================================



問題3：変数の寿命です。

次のコードを見てください。

#include <stdio.h>

int threshold = 30;

int main(void)
{
    int temperature = 32;

    if (temperature >= threshold) {
        int fan = 1;

        printf("%d\n", fan);
    }

    return 0;
}

次の3つを、自分の言葉で答えてください。

threshold は、いつからいつまで存在するか
temperature は、いつからいつまで存在するか
fan は、いつからいつまで存在するか


解答：
threshold は、いつからいつまで存在するか
main関数が始まる前から終わった以降も存在する。

temperature は、いつからいつまで存在するか
main関数が始まって変数を定義した後から終わるまで存在する。

fan は、いつからいつまで存在するか
if文が始まって変数を定義した後からif文が終わるまで存在する。



==================================================================================


問題4：スコープの間違いを直す修正問題です。

次のコードには間違いがあります。

#include <stdio.h>

int main(void)
{
    int temperature = 32;

    if (temperature >= 30) {
        int fan = 1;
    }

    printf("fan = %d\n", fan);

    return 0;
}

このコードがエラーになる理由を説明したうえで、正しく動くように修正したコードを書いてください。


解答：
エラーになる理由はif文の中でint fan = 1;と変数を定義したのに、if文の外のスコープで使われて出力しようとしているからです。

#include <stdio.h>

int main(void)
{
    int temperature = 32;

    if (temperature >= 30) {
        int fan = 1;

        printf("fan = %d\n", fan);
    }

    return 0;
}



=================================================================================


C-Day16 最終問題です。

次の条件を満たすプログラムを書いてください。

グローバル変数
threshold = 30

main関数のローカル変数
temperature = 35

temperature が threshold 以上なら

FAN ON

と表示する。

さらにif文の中で

int fan = 1;

を作り、

fan = 1

と表示する。

その後、次の4つも自分の言葉で説明してください。

threshold は何変数で、どこから使えるか
temperature は何変数で、どこから使えるか
fan は何変数で、どこから使えるか
スコープと変数の寿命の違い



解答：
#include <stdio.h>

int threshold = 30;

int main(void)
{
  int temperature = 35;

  if (temperature >= threshold) {

    printf("FAN ON\n");

    int fan = 1;

    printf("fan = %d\n", fan);
  }

  return 0;
}

threshold はグローバル変数で、そのファイルのプログラム開始時から使える。

temperature はローカル変数で、main関数が始まり、その変数を定義した後から使える。

fan はローカル変数で、if文が始まり、その変数を定義した後から使える。

スコープと変数の寿命の違いは、スコープは変数をどこで使えるか。変数の寿命は変数がいつからいつまで存在するか。
