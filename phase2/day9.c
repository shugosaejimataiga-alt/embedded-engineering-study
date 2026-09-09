
次の条件を満たすCプログラムを書いてください。

変数は、

int mode = 2;

とします。

switch文を使って、

0 → STOP
1 → AUTO
2 → MANUAL

と表示するプログラムを書いてください。

それ以外の値だった場合は、

ERROR

と表示してください。

今回はコードを自分で書いて解答してください。


解答：
#include <stdio.h>

int main(void)
{
  int mode = 2;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;
    
    case 1:
        printf("AUTO\n");
        break;

    case 2:
        printf("MANUAL\n");
        break;

    default:
        printf("ERROR\n");
        break;
  }

  return 0;
}


==========================================================================



次のコードを見てください。

#include <stdio.h>

int main(void)
{
    int mode = 1;

    switch (mode) {

        case 0:
            printf("STOP\n");
            break;

        case 1:
            printf("AUTO\n");

        case 2:
            printf("MANUAL\n");
            break;

        default:
            printf("ERROR\n");
            break;
    }

    return 0;
}

このコードを実行すると、何が表示されるでしょうか。

あわせて、なぜそうなるのかも自分の言葉で説明してください。



解答：
実行されるのはcase1のAUTOが実行される。
int mode = 1;とされたのでswitch文で上から順にcase0から適合するかをやってcase1が適合されたからAUTOと出力された

-------------------------

解答：
実行されるのはcase1のAUTO/*とcase2のMANUALが*/実行される。
int mode = 1;とされたのでswitch文で/*switch (mode) の値に一致する case へ移動する。*/だからcase1が適合されたからAUTOと出力された。
/*しかしcase1にはbreakという止める役割が無いため、そのままcase2も実行されるようになる。case2はbreak;とあるためcase2のMANUALを出力して終了。*/


=========================================================================



次のコードを見てください。

#include <stdio.h>

int main(void)
{
    int mode = 5;

    switch (mode) {

        case 0:
            printf("STOP\n");
            break;

        case 1:
            printf("AUTO\n");
            break;

        case 2:
            printf("MANUAL\n");
            break;

        default:
            printf("ERROR\n");
            break;
    }

    return 0;
}

このコードについて、以下の2点を答えてください。

実行結果
なぜその結果になるのか

自分の言葉で説明してください。



解答：
実行結果はERROR
その結果になる理由として、int mode = 5;と指定されたが、それに完全に一致するcaseが無いため、自動的にそうでなければdefaultであるcaseに移動する。そのため実行結果がERRORと出力された


=====================================================================


次のコードを見てください。

#include <stdio.h>

int main(void)
{
    int number = 2;

    switch (number) {

        case 1:
            printf("ONE\n");
            break;

        case 2:
            printf("TWO\n");

        case 3:
            printf("THREE\n");
            break;

        default:
            printf("OTHER\n");
            break;
    }

    return 0;
}

以下を答えてください。

実行結果
なぜその結果になるのか

自分の言葉で説明してください。



解答：
実行結果はcase2のTWOと/*case3のTHREEが*/出力される。
その結果になる理由はint number = 2;と指定され、switch (number)で、そのswitch文にnumberの変数にある数字と適合するものを選ぶ。それに合致するcaseがcase2であったから。/*case2のTWOが出力される。その後。break;があれがそこで終了だがcase2にないため、case3のTHREEも出力される。その後case3にbreak;があるため、そこで終了となる。*/


==================================================================


次の2つの処理について、それぞれ if と switch のどちらが向いているか答えてください。

①
温度が

35度以上 → DANGER
30度以上 → HOT
それ以外 → NORMAL

と判定する。


②
モード番号が

0 → STOP
1 → AUTO
2 → MANUAL
3 → TEST

と処理を切り替える。


それぞれについて、なぜその方法が向いているのかも自分の言葉で説明してください。


解答：
if文は数字の範囲の以上や以下などを表すのに向いている為。switch文は、その種類ごとに分けられたものに向いている為。



===============================================================


次の条件を満たすプログラムを、最初から自分で書いてください。

変数：
int mode = 3;

条件：
0 → STOP
1 → AUTO
2 → MANUAL
3 → TEST
それ以外 → ERROR

条件があります。

switch文を使う
caseを使う
必要な場所にbreak;を書く
defaultを使う
printfで結果を表示する
main関数まで含めた完成したCコードを書く

さらにコードの下に、

「なぜ mode = 3 のとき TEST だけが表示されるのか」

を自分の言葉で説明してください。

これに正しく答えられれば、C-Day9合格です。




解答：

#include <stdio.h>

int main(void)
{
  int mode = 3;

  switch (mode) {

    case 0:
        printf("STOP\n");
        break;

    case 1:
        printf("AUTO\n");
        break;

    case 2:
        printf("MANUAL\n");
        break;

    case 3:
        printf("TEST\n");
        break;

    default:
        printf("ERROR\n");
        break;
  }

  return 0;
}


なぜ mode = 3 のとき TEST だけが表示されるのか。
それはまず、int mode = 3;の用に指定されます。その後にswitch (mode)のようにswitch文にてmodeの変数の値にあう、適合するものを選ぶようになります。で、それがcase3であるからです。で、case3で出力されるのがTESTであります。case3の最後にしっかりとbreak;で終わっている為、case3のTESTだけ出力して終了です。