
問題1

次のプログラムを作成してください。

要件

"SENSOR" という文字列を配列に保存する
strlen を使って文字数を取得する
文字列と文字数を次のように表示する
SENSOR
6

最初から自分でコードを書いてください。



解答：
#include <stdio.h>
#include <string.h>

int main(void)
{
  char word[] = "SENSOR";

  printf("%s\n", word);

  printf("%zu\n", strlen(word));

  return 0;
}



==========================================================================================


問題2

次のプログラムを作成してください。

要件

2つの文字列をそれぞれ配列に保存する
どちらにも "AUTO" を保存する
strcmp を使って2つの文字列を比較する
同じなら、
MATCH

と表示する

最初から自分でコードを書いてください。




解答：
#include <stdio.h>
#include <string.h>

int main(void)
{
  char word1[] = "AUTO";
  char word2[] = "AUTO";

  if (strcmp(word1, word2) == 0) {
    printf("MATCH\n");
  }

  return 0;
}



==================================================================================


問題3

次のプログラムを作成してください。

要件：

20文字分保存できる char 配列を用意する
fgets を使ってキーボードから文字列を入力する
入力した文字列をそのまま表示する

最初から自分でコードを書いてください。



解答：
#include <stdio.h>

int main(void)
{
  char name[20];

  fgets(name, sizeof(name), stdin);

  printf("%s", name);

  return 0;
}



====================================================================================


問題4

次のプログラムを作成してください。

20バイトの文字列用配列を作る
fgets でユーザーから文字列を入力する
入力時に入った \n を削除する
最後に入力された文字列を表示する

今回は、今説明した strcspn を使ってください。



解答：
#include <stdio.h>

int main(void)
{
  char name[20];

  fgets(name, sizeof(name), stdin);

  name[strcspn(word, "\n")] = '\0';

  printf("%s\n", name);

  return 0;
}

-----------------------------------------

解答：
#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];

  fgets(name, sizeof(name), stdin);

  name[strcspn(name, "\n")] = '\0';

  printf("%s\n", name);

  return 0;
}



===================================================================================


問題5

次のプログラムを作成してください。

20バイトの文字列用配列を用意する
fgets でユーザーから文字列を入力する
入力された \n を削除する
入力された文字列が "START" と同じなら
SYSTEM START と表示する
違う場合は何も表示しなくてよい

最初から自分でコードを書いてください。



解答：
#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];

  fgets(name, sizeof(name), stdin);

  name[strcspn(name,"\n")] = '\0';

  if (strcmp(name, "START") == 0) {
    printf("SYSTEM START\n");
  }

  return 0;
}



===================================================================================


問題6：Day20理解確認 です。

次の4つを、自分の言葉で説明してください。

strlen は何を調べる関数か
fgets は何をする関数か
fgets で入力した文字列から \n を消すのはなぜか
strcmp で2つの文字列が同じとき、なぜ == 0 と書くのか


解答：
strlen は文字だけ\0を除けた文字のbite数を数えている。

fgets は、ゲームで言うプレイする人がキーボードで文字列を入力するための関数

fgets で入力した文字列から \n を消すのは、ゲームで言うプレイする人が最後に入力してEnter = \nを押す為、消す必要がある。

strcmp で2つの文字列が同じとき、なぜ == 0 と書くのかは、文字列が同じ大きさ、bite数だと比べた時に0になるから。

----------------------------------------------------------------

解答：
strlen は文字だけ\0を除けた文字のbite数を数えている。

fgets は、ゲームで言うプレイする人がキーボードで文字列を入力するための関数

fgets で入力した文字列から \n を消すのは、ゲームで言うプレイする人が最後に入力してEnter = \nを押す為、消す必要がある。

strcmp で2つの文字列が同じとき、なぜ == 0 と書くのかは、文字列自体が同じか。同じでないかを比べるため。bite数を比べるわけではない。



==================================================================================


Day20 最終問題です。

最終問題：文字列コマンド判定

次のプログラムを最初から自力で作成してください。

20バイト分の文字列を保存できる配列を用意する
実行中にユーザーから文字列を入力する
入力時に保存された改行を削除する
入力された文字列のバイト数を表示する
入力が START なら SYSTEM START と表示する
入力が STOP なら SYSTEM STOP と表示する
それ以外なら UNKNOWN と表示する
Day20で学習した strlen、fgets、strcspn、strcmp を使用する

コードの形や書き方のヒントは出しません。




解答：
#include <stdio.h>
#include <string.h>

int main(void)
{
  char word[20];

  fgets(word, sizeof(word), stdin);

  word[strcspn(word, "\n")] = '\0';

  printf("%zu\n", strlen(word));

  if (strcmp(word, "START") == 0) {
      printf("SYSTEM START\n");
  } else if (strcmp(word, "STOP") == 0) {
      printf("SYSTEM STOP\n");
  } else {
      printf("UNKNOWN\n");
  }

  return 0;
}