問題5：自分でコードを書く

次の条件を満たすCプログラムを書いてください。

main 関数を使う
printf を使う
画面に Hello と表示する
Hello の後で改行する
最後に return 0; を書く
//#include <stdio.h> も含めて、最初から最後まで自分で書いてください。


解答：

#include <studio.h>

int main(void)
{
    printf("Hello\n");

    return 0;
}

ほぼ正解です。1か所だけ修正があります。

#include <studio.h>

ではなく、

#include <stdio.h>

です。

-------------------------------------

解答：

#include <stdio.h>

int main(void)
{
    printf("Hello\n");

    return 0;
}

正解です。

今回、自分で書けた要素は次の4つです。

#include <stdio.h> → printf などの標準入出力の宣言を取り込む
int main(void) → プログラムの実行が始まる場所
printf("Hello\n"); → Hello を表示して改行する
return 0; → main 関数を終了する

問題5は合格です。


=======================================================================

問題6

次の条件を満たすCプログラムを書いてください。

#include <stdio.h> を使う
main 関数を書く
1行目に Apple
2行目に Orange
3行目に Banana
最後に return 0;

表示結果はこうです。

Apple
Orange
Banana

コードを最初から最後まで書いてください。


解答：

#include <stdio.h>

int main(void)
{
  printf("Apple\n");

  printf("Orange\n");

  printf("Banana");

  return 0;
}

正解です。

これで表示は、

Apple
Orange
Banana

になります。

Banana の後に改行が不要なら、今の printf("Banana"); で問題ありません。

=======================================================================

問題8

次の条件を満たすコードを書いてください。

#include <stdio.h> を使う
main 関数を書く
1行目に Age
2行目に整数 24
最後に return 0;

表示結果はこうです。

Age
24

自分で最初から最後まで書いてください。


解答：

#include <stdio.h>

int main(void)
{
    printf("Age\n");

    printf("%d", 24);

    return 0;
}

正解です。

#include <stdio.h>


int main(void)
{
    printf("Age\n");
    printf("%d", 24);


    return 0;
}

表示結果は、

Age
24

になります。

24 の後にも改行したいなら、

printf("%d\n", 24);

とします。

=======================================================================

C-Day2 最終問題

次の条件を満たすCプログラムを、最初から最後まで自分で書いてください。

#include <stdio.h> を使う
main 関数を書く
コメントを1行入れる
1行目に C Language
2行目に整数 100
どちらも表示後に改行する
最後に return 0;

表示結果はこうです。

C Language
100

さらに、書いたあとに次の4つも説明してください。

main 関数の役割
; の役割
\n の意味
return 0; の意味


解答：

#include <stdio.h>

int main(void)
{
    printf("C Language\n");

    printf("%d\n", 100);

    return 0;
}

main関数の役割：そのファイルにて最初に処理される関数
; の役割：終わりの意味
\n の意味：改行の意味
return 0; の意味：わからない

---------------------------------------------------

解答：

#include <stdio.h>

int main(void)
{
    //c言語頑張ろう
    printf("C Language\n");

    printf("%d\n", 100);

    return 0;
}

main関数の役割：そのファイルにて最初に処理される関数
; の役割：終わりの意味
\n の意味：改行の意味
return 0; の意味：正常にmain関数が終えるという事を示す0を返す


合格です。C-Day2はこれで終了です。
コードも条件を満たしています。

説明も問題ありません。より正確にすると、こうです。

main 関数：プログラムの実行が始まる関数
;：文の終わりを示す
\n：改行
return 0;：main関数を終了し、プログラムが正常終了したことを示す 0 を返す

特に return 0; まで自分の言葉で説明できているので、Day2の到達目標である「Cプログラムの基本構造を説明できる」「文字や数値を画面へ表示できる」は達成できています。