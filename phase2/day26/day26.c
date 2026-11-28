

基礎問題①：コードを書く

基礎問題 1

次の条件を満たすCプログラムを作成してください。

条件
- "Sensor" という文字列を用意する。
- その文字列を読み取るためのポインタを用意する。
- ポインタを使って文字列全体を表示する。
- ポインタを使って先頭の1文字を表示する。
- 文字列の内容を変更しない。

期待する実行結果
Sensor
S

今回はコード全体を自分で書いてください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";

  int *p = word;

  printf("%s\n", *p);
  printf("%c\n", *p);

  return 0;
}

------------------------

解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";

  const char *p = word;

  printf("%s\n", p);
  printf("%c\n", *p);

  return 0;
}



======================================================================================


C-Day26：基礎問題②

今回は、ポインタを使った文字列の変更について確認します。
問題：文字列の一部を変更する

次の条件を満たすCプログラムを作成してください。

条件
- char配列に "Hello" を保存する。
- その配列の先頭を指すポインタを用意する。
- ポインタを使って2文字目の 'e' を 'a' に変更する。
- 変更後の文字列全体を表示する。

期待する実行結果
Hallo

コード全体を自力で書いてください。
提出後に正誤を確認します。次の問題には勝手に進みません。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Hello";
  char *const p = word;

  *(p + 1) = 'a';

  printf("%s\n", p);

  return 0;
}



=================================================================================



C-Day26：基礎問題③

今回は、文字列リテラルとchar配列の違いを確認します。
問題：コードを読んで説明する

次のコードを確認してください。

#include <stdio.h>

int main(void)
{
    char word[] = "Hello";
    const char *p = "World";

    word[0] = 'Y';
    p = "Sensor";

    printf("%s\n", word);
    printf("%s\n", p);

    return 0;
}


問題
問1. 実行結果はどうなりますか？

問2. word[0] = 'Y'; が許される理由を説明してください。

問3. const char *pなのに、p = "Sensor"; が許される理由を説明してください。

今回はコードを書く必要はありません。自分の言葉で説明してください。



解答：
問1. 実行結果はどうなりますか？
Yelloだけ出力される。

問2. word[0] = 'Y'; が許される理由を説明してください。
c言語の文字列リテラルを直接的に変更したのではなく、配列に入っている文字列リテラルとして変更したから大丈夫である。

問3. const char *pなのに、p = "Sensor"; が許される理由を説明してください。
わからない

------------------------------------------

解答：
問1. 実行結果はどうなりますか？
Yelloと/* Sensor */が出力される

問2. word[0] = 'Y'; が許される理由を説明してください。
c言語の文字列リテラルを直接的に変更したのではなく、文字列リテラルをコピーした配列の文字列を変更したから大丈夫である。

問3. const char *pなのに、p = "Sensor"; が許される理由を説明してください。
/* 値を変えているように見えるがこれは、値のメモリアドレスを変えている事になる。worldのメモリアドレスからSensorのメモリアドレスに変更しているという表現が適切であると */



===============================================================================



応用問題①（第4問）

今回は、文字列リテラルとポインタのアドレス変更を組み合わせた問題です。

問題：動作モードの切り替え

次の条件を満たすCプログラムを作成してください。

条件
1. 文字列リテラル "AUTO" を指すポインタを用意する。
2. ポインタを使ってAUTOを表示する。
3. 同じポインタが"MANUAL"を指すように変更する。
4. ポインタを使ってMANUALを表示する。
5. 文字列リテラルの内容は変更しない。

期待する実行結果
AUTO
MANUAL


確認するポイント
- 文字列リテラルの扱い
- ポインタが保持するアドレスの変更
- constの適切な使用
- ポインタを使った文字列の表示
今回はコード全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  const char word[] = "AUTO";
  const char *p = word;

  printf("%s\n", p);

  p = "MANUAL";

  printf("%s\n", p);

  return 0;
}

------------------------------


解答：
#include <stdio.h>

int main(void)
{
  const char word[] = "AUTO";
  const char *p = "AUTO";

  printf("%s\n", p);

  p = "MANUAL";

  printf("%s\n", p);

  return 0;
}



================================================================================



応用問題②（第5問）

今回は、constの位置による違いと、ポインタを使った文字列操作を確認します。


問題：文字列の変更と表示

次の条件を満たすCプログラムを作成してください。

条件
1. char配列に "Motor" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. ポインタが保持するアドレスは変更できないようにする。
4. ポインタを使って、3文字目の 't' を 'd' に変更する。
5. 変更後の文字列全体を表示する。

期待する実行結果
Modor

確認するポイント
- constの位置による違い
- ポインタを使った文字の変更
- 文字列全体の表示
今回はヒントとなるコードは提示しません。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Motor";
  char *const p = word;

  *(p + 2) = 'd';

  printf("%s\n", p);

  return 0;
}



======================================================================================



応用問題③（第6問）

今回は、ポインタが指す位置と、文字列の表示について復習します。

問題：コードを読んで説明する

次のコードを確認してください。
#include <stdio.h>

int main(void)
{
    char word[] = "Sensor";
    char *p = word;

    p = &word[2];

    printf("%c\n", *p);
    printf("%s\n", p);

    return 0;
}


問題
問1. 実行結果をすべて答えてください。
問2. p = &word[2]; は、何を変更しているのか説明してください。
問3. printf("%s\n", p); は、なぜその実行結果になるのか説明してください。

今回はコードを書く必要はありません。




解答：

問1. 実行結果をすべて答えてください。
わからない

問2. p = &word[2]; は、何を変更しているのか説明してください。
わからない

問3. printf("%s\n", p); は、なぜその実行結果になるのか説明してください。
わからない

---------------------------------------------------------

解答：

問1. 実行結果をすべて答えてください。
nとnsor

問2. p = &word[2]; は、何を変更しているのか説明してください。
もともとchar *p = word;でpがword配列の先頭アドレスを指していたが、p = &word[2];という風にword配列の0,1,2の2 = 3個目のメモリアドレスをpに代入することになった。だから、pに保存されるメモリアドレスが変更になった。

問3. printf("%s\n", p); は、なぜその実行結果になるのか説明してください。
もともとchar *p = word;でpがword配列の先頭アドレスを指していたが、p = &word[2];という風にword配列の0,1,2の2 = 3個目のメモリアドレスをpに代入することになった為、そのメモリアドレスから配列の最後の\0までを出力するという命令がprintf("%s\n", p);の為、nsorとなった


======================================================================================



Day24復習：第1問

理解確認問題
次のコードを確認してください。

#include <stdio.h>

int main(void)
{
    int numbers[4] = {10, 20, 30, 40};
    int *p = numbers;

    printf("%d\n", *p);
    printf("%d\n", numbers[2]);

    return 0;
}


問1. 実行結果をすべて答えてください。
問2. int *p = numbers;では、pに何が保存されていますか？
問3. numbersと&numbersは何が違いますか？
問4. sizeof(numbers)とsizeof(p)では、それぞれ何の大きさを取得しますか？

今回はコードを書く必要はありません。
自分の言葉で説明してください。正解・不正解だけでなく、理解に誤りがある部分も確認します。



解答：
問1. 実行結果をすべて答えてください。
10と30が出力される

問2. int *p = numbers;では、pに何が保存されていますか？
numbersという配列があって、その配列の先頭のメモリアドレスが入っている。

問3. numbersと&numbersは何が違いますか？
双方、numbersという配列の先頭のメモリアドレスを指すが、numbersは配列の1要素、&numbersは配列全体であって、p+1をしたときにnumbersは1個先のメモリアドレスの要素を指すが、&numbersは配列自体の1個後ろのメモリアドレスを指す。

問4. sizeof(numbers)とsizeof(p)では、それぞれ何の大きさを取得しますか？
sizeof(numbers)は配列の要素の数分 × その環境においての配列のデータ型のメモリの大きさで配列自体のメモリの大きさが出せる。sizeof(numbers)で出る。
sizeof(p)は、その環境においてのポインタ変数自体のメモリの大きさが出る。ポインタ変数にはメモリアドレス1つが入る。



==================================================================================



# C-Day26 集中復習：第1問

## 問題：文字列リテラルとポインタ

次の条件を満たすCプログラムを作成してください。

### 条件

1. 文字列リテラル "Temperature" を直接指すポインタを用意する。
2. そのポインタを使って文字列全体を表示する。
3. 同じポインタが文字列リテラル "Humidity" を指すように変更する。
4. 変更後の文字列全体を表示する。
5. 文字列リテラルの内容は変更しない。

### 期待する実行結果

Temperature
Humidity

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word = "Temperature";
  char *p = "Temperature";

  printf("%s\n", p);

  p = "Humidity";

  printf("%s\n", p);

  return 0;
}

--------------------------------


解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Temperature";
  const char *p = "Temperature";

  printf("%s\n", p);

  p = "Humidity";

  printf("%s\n", p);

  return 0;
}


=============================================================================



# C-Day26 反復練習 第1問

## 問題：文字列リテラルとポインタ

次の条件を満たすCプログラムを作成してください。

### 条件

1. 文字列リテラル "START" を直接指すポインタを用意する。
2. ポインタを使って文字列全体を表示する。
3. 同じポインタが "STOP" を指すように変更する。
4. 変更後の文字列全体を表示する。
5. 文字列リテラルの内容は変更しない。
6. 不要な変数や配列は作成しない。

### 期待する実行結果

START
STOP

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  const char *p ="START"; /*文字列リテラルを直接宣言していて、変更すると危ないので変更できないように*constを最初に付ける。変数名の前に付けるだけだと、メモリアドレスを変更できないという事である。*/
  printf("%s\n", p);

  p = "STOP";

  printf("%s\n", p);

  return 0;
}



=================================================================================


# C-Day26 反復練習 第2問

## 問題：文字列リテラルとポインタ

次の条件を満たすCプログラムを作成してください。

### 条件

1. 文字列リテラル "NORMAL" を直接指すポインタを用意する。
2. ポインタを使って文字列全体を表示する。
3. 同じポインタが "ERROR" を指すように変更する。
4. 変更後の文字列全体を表示する。
5. 文字列リテラルの内容は変更しない。
6. 不要な変数や配列は作成しない。

### 期待する実行結果

NORMAL
ERROR

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  const char *p = "NORMAL";

  printf("%s\n", p);

  p = "ERROR";

  printf("%s\n", p);

  return 0;
}


=================================================================================



# C-Day26 反復練習 第3問

## 問題：文字列リテラルとポインタ

次の条件を満たすCプログラムを作成してください。

### 条件

1. 文字列リテラル "STANDBY" を直接指すポインタを用意する。
2. ポインタを使って文字列全体を表示する。
3. 同じポインタが "RUNNING" を指すように変更する。
4. 変更後の文字列全体を表示する。
5. 文字列リテラルの内容は変更しない。
6. 不要な変数や配列は作成しない。

### 期待する実行結果

STANDBY
RUNNING

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  const char *p = "STANDBY";

  printf("%s\n", p);

  p = "RUNNING";

  printf("%s\n", p);

  return 0;
}



=============================================================================


# C-Day26 レベル2：第1問

## 問題：ポインタを使った文字列の変更

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Motor" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. ポインタが保持するメモリアドレスを変更できないようにする。
4. ポインタを使って2文字目の 'o' を 'a' に変更する。
5. 変更後の文字列全体をポインタを使って表示する。
6. 不要な変数は作成しない。

### 期待する実行結果

Mator

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Motor";

  char *const p = word;

  (p + 1) = 'a';

  /*p[1] = 'a';*/

  printf("%s\n", p);

  return 0;
}

----------------------------------

解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Motor";

  char *const p = word;

  *(p + 1) = 'a';  /* *がついていない(p + 1)は2個目のメモリアドレスを指す */

  /*p[1] = 'a';*/

  printf("%s\n", p);

  return 0;
}



========================================================================================


# C-Day26 レベル2：第2問

## 問題：ポインタを使った文字列の変更

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Sensor" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. ポインタが保持するメモリアドレスを変更できないようにする。
4. ポインタを使って3文字目の 'n' を 't' に変更する。
5. 変更後の文字列全体をポインタを使って表示する。
6. 不要な変数は作成しない。

### 期待する実行結果

Set sor



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";

  char *const p = word;

  *(p + 2) = 't';

  // p[2] = 't';

  printf("%s\n", p);

  return 0;
}



===================================================================================


# C-Day26 レベル2：第3問

## 問題：ポインタを使った文字列の変更

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Control" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. ポインタが保持するメモリアドレスを変更できないようにする。
4. ポインタを使って4文字目の 't' を 's' に変更する。
5. 変更後の文字列全体をポインタを使って表示する。
6. 不要な変数は作成しない。

### 期待する実行結果

Consrol

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Control";
  char *const p = word;

  p[3] = 's';

  // *(p + 3) = 's';

  printf("%s\n", p);

  return 0;
}



=================================================================================


# C-Day26 レベル3：第1問

## 問題：文字列とconstの使い分け

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Sensor" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. そのポインタを通じて文字の値を変更できないようにする。
4. 配列の2文字目の 'e' を 'a' に変更する。
5. ポインタを使って変更後の文字列全体を表示する。
6. 同じポインタが文字列リテラル "Motor" を直接指すように変更する。
7. ポインタを使って "Motor" を表示する。
8. 不要な変数は作成しない。

### 期待する実行結果

Sansor
Motor

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";
  
  const char *p = word;

  p[1] = 'a';

  // *(p + 1) = 'a';

  printf("%s\n", p);

  p = "Motor";

  printf("%s\n", p);

  return 0;
}

--------------------------------

解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";
  
  const char *p = word;

  word[1] = 'a';

  printf("%s\n", p);

  p = "Motor";

  printf("%s\n", p);

  return 0;
}



==============================================================================


# C-Day26 レベル3：第2問

## 問題：char配列・const・ポインタの使い分け

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Engine" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. そのポインタを通じて文字の値を変更できないようにする。
4. 配列の3文字目の 'g' を 't' に変更する。
5. ポインタを使って変更後の文字列全体を表示する。
6. 同じポインタが文字列リテラル "System" を直接指すように変更する。
7. ポインタを使って "System" を表示する。
8. 不要な変数は作成しない。

### 期待する実行結果

Entine
System

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Engine";

  const char *p = word;

  word[2] = 't';

  printf("%s\n", p);

  p = "System";

  printf("%s\n", p);

  return 0;
}



=====================================================================================



# C-Day26 レベル3：第3問

## 問題：char配列・const・ポインタの使い分け

次の条件を満たすCプログラムを作成してください。

### 条件

1. char配列に "Device" を保存する。
2. 配列の先頭を指すポインタを用意する。
3. そのポインタを通じて文字の値を変更できないようにする。
4. 配列の2文字目の 'e' を 'a' に変更する。
5. ポインタを使って変更後の文字列全体を表示する。
6. 同じポインタが文字列リテラル "Sensor" を直接指すように変更する。
7. ポインタを使って "Sensor" を表示する。
8. 不要な変数は作成しない。

### 期待する実行結果

Davice
Sensor

### 提出内容

Cプログラム全体を自力で作成してください。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Device";

  const char *p = word;

  word[1] = 'a';

  printf("%s\n", p);

  p = "Sensor";

  printf("%s\n", p);

  return 0;
}



==============================================================================


# C-Day26 レベル4：第1問

## 問題：constとポインタの誤りを修正する

次のCプログラムには誤りがあります。

誤りを修正し、指定された実行結果になるようにしてください。


### 修正対象コード

#include <stdio.h>

int main(void)
{
    char word[] = "Code";

    const char *p1 = word;
    char *const p2 = "WAIT";
    const char *const p3 = "SAFE";

    p1[0] = 'M';

    p2 = "RUN";

    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);

    return 0;
}


### 条件

1. p1を使ってwordの文字を変更できるようにする。
2. p1が保持するメモリアドレスは変更できないようにする。
3. p2を通じて文字列の内容を変更できないようにする。
4. p2が保持するメモリアドレスは変更できるようにする。
5. p3は文字列の内容も、保持するメモリアドレスも変更できないようにする。
6. 不要な変数は追加しない。

### 期待する実行結果

Mode
RUN
SAFE

### 提出内容

1. 修正したCプログラム全体
2. p1、p2、p3のconstの意味をそれぞれ説明する




解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Code";

  char *const p1 = word;
  const char *p2 = "WAIT";
  const char *const p3 = "SAFE";

  p1[0] = 'M';

  p2 = "RUN";

  printf("%s\n", p1);
  printf("%s\n", p2);
  printf("%s\n", p3);

  return 0;
}

p1のconstはp1に保存されているメモリアドレスを変更できない。p1に保存されているメモリアドレスが指していて、メモリに保存されている値は変更してよい
p2のconstはp2に保存されているメモリアドレスが指しているメモリの保存されている値をp2を通じて変更はできない。p2に保存されているメモリアドレスは変更できる。
p3のconstはp3に保存されているメモリアドレスが変更できないのと。p3 = ポインタを通じて、p3に保存されているメモリアドレスが指すメモリに保存されている値を変更できない。

//char word[] = "Code"; ← この"Code"の文字列リテラルを配列にコピーしている。数字の配列は違う。文字列リテラルの宣言の時だけ。




=================================================================================



# C-Day26 レベル4：第2問

## 問題：3種類のconstを使った状態管理

次の条件を満たすCプログラムを作成してください。

### 条件

【p1】
1. char配列に "Lamp" を保存する。
2. p1というポインタ変数を用意する。
3. p1に保存されているメモリアドレスは変更できないようにする。
4. p1を通じて4文字目の 'p' を 'b' に変更する。
5. p1を使って変更後の文字列全体を表示する。

【p2】
6. 文字列リテラル "IDLE" を直接指すp2を用意する。
7. p2を通じて文字列の値を変更できないようにする。
8. p2に保存されているメモリアドレスは変更できるようにする。
9. p2が文字列リテラル "ACTIVE" を指すように変更する。
10. p2を使って文字列全体を表示する。

【p3】
11. 文字列リテラル "LOCKED" を直接指すp3を用意する。
12. p3に保存されているメモリアドレスを変更できないようにする。
13. p3を通じて文字列の値を変更できないようにする。
14. p3を使って文字列全体を表示する。

### 期待する実行結果

Lamb
ACTIVE
LOCKED

### 提出内容

1. Cプログラム全体を自力で作成する。
2. p1、p2、p3について、それぞれ何を変更できて、
  何を変更できないのか、自分の言葉で説明する。

### 注意事項

・不要な変数は作成しない。
・文字列リテラル自体を変更しない。




解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Lamp";

  char *const p1 = word;
  const char *p2 = "IDLE";
  const char *const p3 = "LOCKED";

  p1[3] = 'b';

  p2 = "ACTIVE";

  printf("%s\n", p1);
  printf("%s\n", p2);
  printf("%s\n", p3);

  return 0;
}

*p1のconstはp1ポインタに保存されているメモリアドレスを変更できない。p1ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値をp1ポインタを通して変更できる。もちろん配列に対して直接、値は変更可能
*p2のconstはp2ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値をp2ポインタを通して変更はできない。p2ポインタに保存されているメモリアドレスは変更できる。
*p3のconstはp3ポインタに保存されているメモリアドレスも変更できないし、p3ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値をp3ポインタを通して変更できない。



========================================================================================



# C-Day26 レベル4：第3問

## 問題：センサーの状態とポインタの制御

次の条件を満たすCプログラムを作成してください。

### 条件

【p1】
1. char配列に "Sensor" を保存する。
2. p1というポインタ変数を用意する。
3. p1に保存されているメモリアドレスは変更できないようにする。
4. p1を通じて1文字目の 'S' を 'M' に変更する。
5. p1を使って変更後の文字列全体を表示する。

【p2】
6. 文字列リテラル "STANDBY" を直接指すp2を用意する。
7. p2を通じた文字の変更は禁止する。
8. p2に保存されているメモリアドレスは変更できるようにする。
9. p2が "STANDBY" の4文字目を指すように変更する。
10. p2が指している位置から文字列全体を表示する。

【p3】
11. 文字列リテラル "LOCKED" を直接指すp3を用意する。
12. p3に保存されているメモリアドレスを変更できないようにする。
13. p3を通じた文字の変更も禁止する。
14. p3を使って文字列全体を表示する。

### 期待する実行結果

Mensor
NDBY
LOCKED

### 提出内容

1. Cプログラム全体を自力で作成する。
2. p1、p2、p3について、それぞれ変更できるものと
  変更できないものを自分の言葉で説明する。

### 注意事項

・不要な変数は作成しない。
・文字列リテラルの内容は変更しない。



解答：
#include <stdio.h>

int main(void)
{
  char word[] = "Sensor";

  char *const p1 = word;
  const char *p2 = "STANDBY";
  const char *const p3 = "LOCKED";

  p1[0] = 'M';
  p2 = &p2[3];

  printf("%s\n", p1);
  printf("%s\n", p2);
  printf("%s\n", p3);

  return 0;
}

*p1のconstはp1ポインタに保存されているメモリアドレスを変更できない。p1ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値はp1ポインタを通して変更できる。
*p2のconstはp2ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値をp2ポインタを通して変更できない。p2ポインタに保存されているメモリアドレスは変更できる。
*p3のconstはp3ポインタに保存されているメモリアドレスが指す場所、メモリに保存されている値をp3ポインタを通して変更もできないし、p3ポインタに保存されているメモリアドレスも変更できない。



===========================================================================================



# C-Day26 レベル4：第4問

## 問題：文字列・ポインタ・constの総合操作

次の条件を満たすCプログラムを作成してください。

### 条件

【p1：文字列の変更】

1. char配列に "Timer" を保存する。
2. p1というポインタ変数を用意する。
3. p1に保存されているメモリアドレスを変更できないようにする。
4. p1を通じて3文字目の 'm' を 'g' に変更する。
5. p1を使って変更後の文字列全体を表示する。

【p2：文字列リテラルとアドレス変更】

6. 文字列リテラル "IDLE" を直接指すp2を用意する。
7. p2を通じた文字の変更を禁止する。
8. p2に保存されているメモリアドレスは変更できるようにする。
9. p2が文字列リテラル "RUNNING" を指すように変更する。
10. p2が "RUNNING" の4文字目を指すように変更する。
11. p2が現在指している1文字を表示する。
12. p2が現在指している位置から文字列を表示する。

【p3：両方の変更禁止】

13. const char配列に "SAFE" を保存する。
14. その配列の先頭を指すp3を用意する。
15. p3に保存されているメモリアドレスを変更できないようにする。
16. p3を通じた値の変更も禁止する。
17. p3を使って文字列全体を表示する。

### 期待する実行結果

Tiger
N
NING
SAFE

### 提出内容

1. Cプログラム全体
2. p1、p2、p3のconstの意味を説明する。
3. p2で「N」と「NING」が表示される理由を説明する。

### 注意事項

・不要な変数は作成しない。
・文字列リテラルを変更しない。
・すべて自力で実装する。



解答：
#include <stdio.h>

int main(void)
{
  char word1[] = "Timer";
  const char word2[] = "SAFE";

  char *const p1 = word1;
  const char *p2 = "IDLE";
  const char *const p3 = word2;

  p1[2] = 'g';
  p2 = "RUNNING";

  p2 = &p2[3];

  printf("%s\n", p1);
  printf("%c\n", *p2);
  printf("%s\n", p2);
  printf("%s\n", p3);
}

*p1のconstはp1ポインタに保存されているメモリアドレスを変更できない。p1ポインタ保存されているメモリアドレスが指している場所、メモリに保存されている値をp1ポインタを通して変更はできる。
*p2のconstはp2ポインタに保存されているメモリアドレスが指している場所、メモリに保存されている値をp2ポインタを通して変更が出来ない。p2ポインタに保存されているメモリアドレスは変更できる。
*p3のconstはp3ポインタに保存されているメモリアドレスも変更できないし、p3ポインタに保存されているメモリアドレスが指す場所、メモリに保存されている値をp3ポインタを通して変更も出来ない。

p2で「N」が表示される理由は
p2のポインタ変数で保存されていたメモリアドレスで指していた場所にある値がIDLEだったのをRUNNINGを指すメモリ、場所のメモリアドレスにまず、変更したと。で、その後p2ポインタ変数に保存されていたメモリアドレスは、IDLE,RUNNING双方、先頭の文字が保存されている場所、メモリを指すメモリアドレスだったが、そのメモリアドレスを変更してRUNNINGの4文字目のNという値がある場所、メモリを指すことになった。で、出力の時は%cで1文字だけを出力するから。Nが表示される。

p2で「NING」が表示される理由
p2のポインタ変数で保存されていたメモリアドレスで指していた場所にある値がIDLEだったのをRUNNINGを指すメモリ、場所のメモリアドレスにまず、変更したと。で、その後p2ポインタ変数に保存されていたメモリアドレスは、IDLE,RUNNING双方、先頭の文字が保存されている場所、メモリを指すメモリアドレスだったが、そのメモリアドレスを変更してRUNNINGの4文字目のNという値がある場所、メモリを指すことになった。で、出力の時は%sで文字列全体を出力するから、4文字目のNからすべて出力する形になっている。



==========================================================================================



問題①：センサーの名前を表示する
次の条件を満たすCプログラムを作成してください。

条件
1. p というポインタ変数を宣言し、文字列リテラル "SENSOR" を指すようにする。
2. p を通じて文字列の内容を変更できないようにする。
3. printf で3番目の文字だけを表示する。
4. printf で3番目の文字から最後までを文字列として表示する。
5. p が指す先を文字列リテラル "MOTOR" に変更する。
6. 変更後の文字列全体を表示する。
期待する実行結果
N
NSOR
MOTOR


#include から main 関数まで、プログラム全体を書いてください。

回答後に正誤を判定します。



const char *p = "SENSOR";

printf("%c\n", p[2]);
printf("%s\n", &p[2]);

p = "MOTOR";

printf("%s\n", p);



===============================================================================================



Day26｜コード演習②
問題：センサーの状態を表示する
次の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 status に "ERROR" を保存する。
2. ポインタ変数 p を宣言し、配列 status の先頭要素を指すようにする。
3. ポインタ p を使って、status の最初の文字を 'A' に変更する。
4. 変更後の文字列全体を表示する。
5. ポインタ p を使って、変更後の文字列の3番目の文字だけを表示する。
6. 変更後の文字列の3番目から最後までを表示する。
期待する実行結果
ARROR
R
ROR


#include から main 関数まで、プログラム全体を書いてください。


#include <stdio.h>

int main(void)
{
  char status[] = "ERROR";

  char *p = &status[0];

  *p = 'A';

  printf("%s\n", p);

  printf("%c\n", p[2]);

  printf("%s\n", &p[2]);

  return 0;
}



=======================================================================================


Day26｜レベル2・コード演習③
問題：センサーの状態変更
次の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 status に "STOP" を保存する。
2. char 型へのポインタ p を宣言し、配列 status の先頭要素を指すようにする。
3. ポインタ p を使い、2番目の文字を 'T' から 'H' に変更する。
4. 変更後の文字列全体を表示する。
5. 変更後の3番目の文字だけを表示する。
6. 変更後の3番目から最後までを文字列として表示する。


#include <stdio.h>

int main(void)
{
  char status[] = "STOP";

  char *p = &status[0];

  p[1] = 'H';

  printf("%s\n", p);

  printf("%c\n", p[2]);

  printf("%s\n", &p[2]);

  return 0;
}



=========================================================================================



Day26｜レベル3・コード演習①
問題：センサー名の変更と表示
次の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 sensor に "MOTOR" を保存する。
2. ポインタ変数 p を宣言し、配列 sensor の先頭要素を指すようにする。
3. ポインタ p を2要素先に移動させる。
4. 移動後のポインタを使って、現在指している文字を 'D' に変更する。
5. ポインタ p を使って、現在指している位置から最後までを表示する。
6. 配列 sensor を使って、変更後の文字列全体を表示する。


#include <stdio.h>

int main(void)
{
  char sensor[] = "MOTOR";

  char *p = &sensor[0];

  p += 2;

  *p = 'D';

  printf("%s\n", p);

  printf("%s\n", &sensor[0]);

  return 0;
}



================================================================================


Day26｜レベル3・コード演習②
今回は、Day21〜26で学習したポインタの内容を組み合わせた問題です。
問題：装置の状態変更プログラム
次の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 device に "POWER" を保存する。
2. ポインタ変数 p を宣言し、配列 device の先頭要素を指すようにする。
3. 文字列リテラル "STATUS" を指すポインタ変数 label を宣言する。文字列の変更は禁止する。
4. void 型の関数 update_device を作成する。この関数はポインタを引数として受け取る。
5. update_device 関数の中で、受け取ったポインタを2要素先へ移動し、移動先の文字を 'K' に変更する。
6. main 関数から update_device を呼び出し、配列 device の内容を変更する。
7. printf を使い、次の順番で表示する。
   - label が指す文字列全体
   - 変更後の device の文字列全体
   - 変更後の device の3番目から最後まで
   - 変更後の device の3番目の文字だけ

#include <stdio.h>

void update_device(char *p);

int main(void)
{
  char device[] = "POWER";

  char *p = &device[0];

  const char *label = "STATUS";

  update_device(&device[0]);

  printf("%s\n", label);

  printf("%s\n", &device[0]);

  printf("%s\n", &device[2]);

  printf("%c\n", device[2]);
}

void update_device(char *p)
{
  p += 2;

  *p = 'K';
}



=============================================================================================



Day26｜レベル3・コード演習③
問題：センサー名の更新
以下の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 name に "SENSOR" を保存する。
2. ポインタ変数 p を宣言し、配列 name の先頭要素を指すようにする。
3. 文字列リテラル "DEVICE" を指す、文字の変更が禁止されたポインタ変数 label を宣言する。
4. void 型の関数 change_name を作成する。この関数は char 型へのポインタを受け取り、指している文字を 'I' に変更する。
5. main 関数で p を3要素先に移動する。
6. change_name 関数を呼び出し、p が指す文字を変更する。
7. printf を使って、以下の順番で表示する。
   - label が指す文字列全体
   - 変更後の name の文字列全体
   - 現在の p が指す位置から最後まで
   - 現在の p が指す1文字


#include <stdio.h>

void change_name(char *p);

int main(void)
{
  char name[] = "SENSOR";
  char *p = &name[0];
  const char *label = "DEVICE";
  p += 3;
  change_name(p);

  printf("%s\n", label);
  printf("%s\n", &name[0]);
  printf("%s\n", p);
  printf("%c\n", *p);
}

void change_name(char *p)
{
  *p = 'I';
}



===========================================================================================



Day26｜レベル4・コード演習①
今回は、これまでの問題から少し変えて、2種類のポインタを使い分ける問題です。
問題：装置の動作モード管理
次の条件を満たすCプログラムを作成してください。

条件
1. char 型の配列 mode に "AUTO" を保存する。
2. ポインタ変数 p を宣言し、配列 mode の先頭要素を指すようにする。
3. 文字列リテラル "READY" を指すポインタ変数 message を宣言する。このポインタを通じた文字の変更は禁止する。
4. p を使い、配列 mode の2番目の文字を 'N' に変更する。
5. message が指す先を、文字列リテラル "RUNNING" に変更する。
6. void 型の関数 show_status を作成する。この関数は文字の変更を禁止したポインタを2つ引数として受け取る。
7. main 関数から show_status を呼び出し、変更後の mode と message を渡す。
8. show_status の中で、次の順番で表示する。
   - mode の文字列全体
   - message の文字列全体
   - mode の3番目の文字だけ
   - message の4番目から最後まで

#include <stdio.h>

void show_status(const char *p1, const char *p2);

int main(void)
{
  char mode[] = "AUTO";
  char *p = &mode[0];
  const char *message = "READY";
  p[1] = 'N';
  message = "RUNNING";
  show_status(p, message);

  return 0;
}

void show_status(const char *p1, const char *p2)
{
  printf("%s\n", p1);
  printf("%s\n", p2);
  printf("%c\n", p1[2]);
  printf("%s\n", &p2[3]);
}


==============================================================================================



問題：装置の動作状態管理
今回は、ポインタ・文字列・const・struct・enum・typedef・関数を組み合わせた問題です。


1. データ型の定義
次の2つの型を作成してください。

① 列挙型 Mode
- typedef と enum を使用する。
- 状態は STOP と RUN の2種類。

② 構造体 Device
- typedef と struct を使用する。
- name：16文字分の char 型配列。
- mode：先ほど定義した Mode 型。


2. main関数の処理

1. Device 型の変数 device を宣言する。
2. device.name に "START" を保存する。
3. device.mode を STOP に設定する。
4. 文字列リテラル "DEVICE" を指すポインタ label を宣言する。このポインタを通じた文字の変更は禁止する。
5. activate 関数を呼び出し、device のアドレスを渡す。


3. activate関数の処理

次の関数を作成してください。
- 関数名：activate
- 戻り値：なし
- 引数：Device 型へのポインタ1つ

関数内で行う処理：
1. device.name の2番目の文字を 'M' に変更する。
2. device.mode を RUN に変更する。

※関数内で変更するのは、呼び出し元の device のデータです。


4. 表示処理

main 関数で、activate の実行後に次の順番で表示してください。
1. label が指す文字列全体
2. device.name の文字列全体
3. device.name の3番目から最後まで
4. device.name の2番目の文字だけ
5. device.mode が RUN なら "RUN"、それ以外なら "STOP"



#include <stdio.h>

typedef enum {
  STOP,
  RUN
} Mode;

typedef struct Device{
  char name[16];
  Mode mode;
} Device;

void activate(Device *p);

int main(void)
{
  Device device = {
    "START",
    STOP
  };

  Device *p = &device;

  const char *label = "DEVICE";

  activate(p);

  printf("%s\n", label);
  printf("%s\n", &p->name);
  printf("%s\n", &p->name[2]);
  printf("%c\n", p->name[1]);
  
  if (p->mode == RUN) {
    printf("RUN");
  } else if (p->mode == STOP) {
    printf("STOP");
  }
}

void activate(Device *p)
{
  p->name[1] = 'M';
  p->mode = RUN;
}



======================================================================================================




Day26｜レベル4・コード演習③
問題：センサーの情報更新
前回と同じレベルですが、今回は構造体の数値・文字列・動作状態を更新するプログラムを作成します。


1. データ型の定義

① 列挙型 State

typedef と enum を使い、次の2つの状態を定義してください。
- OFF
- ON

② 構造体 Sensor

typedef と struct を使い、次のメンバーを持つ型を定義してください。
メンバー名	型	内容
name	char 型の配列（16要素）	センサー名
temperature	int	温度
state	State	動作状態


2. main関数の処理

1. Sensor 型の構造体変数 sensor を作成し、以下の値で初期化する。
   - name："TEMP"
   - temperature：20
   - state：OFF
2. 構造体 sensor を指すポインタ変数 p を宣言する。
3. 文字列リテラル "SENSOR DATA" を指すポインタ変数 label を宣言する。ポインタを通じた文字の変更は禁止する。
4. update_sensor 関数を呼び出し、sensor のデータを更新する。


3. update_sensor関数の処理

次の関数を作成してください。

- 関数名：update_sensor
- 戻り値：なし
- 引数：Sensor 型へのポインタ1つ

関数内で、受け取った構造体のデータを次のように変更します。

1. name の3番目の文字を 'S' に変更する。
2. temperature を 35 に変更する。
3. state を ON に変更する。
4. 表示処理


main 関数で、更新後の情報を次の順番で表示してください。
1. label の文字列全体
2. sensor.name の文字列全体
3. sensor.name の3番目から最後まで
4. sensor.name の3番目の文字だけ
5. temperature の値
6. state が ON なら "ON"、それ以外なら "OFF"


#include <stdio.h>

typedef enum {
  OFF,
  ON
} State;

typedef struct Sensor{
  char name[16];
  int temperature;
  State state;
} Sensor;

void update_sensor(Sensor *p);

int main(void)
{
  Sensor sensor = {
    "TEMP",
    20,
    OFF
  };

  Sensor *p = &sensor;

  const char *label = "SENSOR DATA";

  update_sensor(p);

  printf("%s\n", label);
  printf("%s\n", &p->name[0]);
  printf("%s\n", &p->name[2]);
  printf("%c\n", p->name[2]);
  printf("%d\n", p->temperature);

  if (p->state == ON) {
    printf("ON");
  } else {
    printf("OFF");
  }
}

void update_sensor(Sensor *p)
{
  p->name[2] = 'S';
  p->temperature = 35;
  p->state = ON;
}


========================================================================================




# Day26｜レベル5・コード演習①

## 問題：装置の測定データ管理プログラムの不具合修正

今回は、不具合のあるCプログラムを自力で修正する問題です。

これまで学習した以下の内容を組み合わせています。

- ポインタ
- 配列・文字列
- 構造体・列挙型
- typedef
- #define
- 関数
- for文
- if文
- const
- printfの書式指定子

## 1. プログラムの仕様

装置の名前、測定値、動作状態を管理するプログラムです。

正常な動作では、以下の処理を行います。

1. 装置名を `"FAN"` に設定する。
2. 測定値 `20, 24, 28, 32` を配列に保存する。
3. 初期状態を `IDLE` にする。
4. `activate` 関数で動作状態を `ACTIVE` に変更する。
5. `average` 関数で4つの測定値の平均を求める。
6. 装置名・文字列の一部分・平均値・動作状態を表示する。

## 2. 期待する実行結果

```text
MONITOR
FAN
AN
A
AVG: 26
ACTIVE
```

## 3. 不具合のあるコード

以下のコードには複数の間違いがあります。

```c
#include <stdio.h>

#define SAMPLE_COUNT 4

typedef enum {
    IDLE,
    ACTIVE
} DeviceState;

typedef struct {
    char name[12];
    int samples[SAMPLE_COUNT];
    DeviceState state;
} Device;

void activate(Device *p);
int average(const int *values, int count);

int main(void)
{
    Device device = {
        "FAN",
        {20, 24, 28, 32},
        IDLE
    };

    Device *p = &device;

    const char *title = "MONITOR";

    activate(p);

    int avg = average(p->samples, SAMPLE_COUNT);

    printf("%s\n", title);
    printf("%s\n", &p->name);
    printf("%s\n", p->name[1]);
    printf("%c\n", &p->name[1]);
    printf("AVG: %d\n", avg);

    if (p->state == ACTIVE) {
        printf("ACTIVE\n");
    } else {
        printf("IDLE\n");
    }

    return 0;
}

void activate(Device *p)
{
    p->state = IDLE;
}

int average(const int *values, int count)
{
    int sum = 0;

    for (int i = 1; i < count; i++) {
        sum += values[i];
    }

    return sum / count;
}
```

## 4. 課題

このプログラムを修正し、期待する実行結果になるようにしてください。

### 提出するもの

修正後のCプログラム全体。

### 修正条件

- 単に表示結果を合わせるのではなく、プログラムの仕様を正しく実現すること。
- 不正なポインタ操作が含まれるため、修正前のコードを実行する必要はない。
- ヒントなしで自力で修正すること。

## 5. 採点基準

以下の項目を確認します。

1. 文法が正しいこと。
2. データ型と書式指定子が一致していること。
3. ポインタと配列の表記が正しいこと。
4. 構造体のメンバーに正しくアクセスできていること。
5. 関数の処理が仕様どおりであること。
6. 期待する実行結果と一致すること。

表記を間違えた場合は、その表記に絞った練習問題を行います。

次の問題には指示があるまで進みません。




#include <stdio.h>

#define SAMPLE_COUNT 4

typedef enum {
    IDLE,
    ACTIVE
} DeviceState;

typedef struct Device {
    char name[12];
    int samples[SAMPLE_COUNT];
    DeviceState state;
} Device;

void activate(Device *p);
int average(const int *values, int count);

int main(void)
{
    Device device = {
        "FAN",
        {20, 24, 28, 32},
        IDLE
    };

    Device *p = &device;

    const char *title = "MONITOR";

    activate(p);

    int avg = average(p->samples, SAMPLE_COUNT);

    printf("%s\n", title);
    printf("%s\n", &p->name);
    printf("%s\n", p->name[1]);
    printf("%c\n", &p->name[1]);
    printf("AVG: %d\n", avg);

    if (p->state == ACTIVE) {
        printf("ACTIVE\n");
    } else {
        printf("IDLE\n");
    }

    return 0;
}

void activate(Device *p)
{
    p->state = IDLE;
}

int average(const int *values, int count)
{
    int sum = 0;

    for (int i = 1; i < count; i++) {
        sum += values->samples[i];
    }

    return sum / count;
}



======================================================================================================



# Day26｜レベル5・コード演習①

## 問題：車両のバッテリー管理システム

これまで学習した内容を組み合わせて、最初からC言語のプログラムを作成してください。

## ① 定義するもの

### マクロ

- `VEHICLE_COUNT`：`3`

### 列挙型 Status

`typedef enum` を使用し、次の状態を定義してください。

- `STOP`
- `RUN`

### 構造体 Vehicle

`typedef struct` を使用し、次のメンバーを定義してください。

| メンバー | 型 |
|---|---|
| `name` | `char` 型の16要素配列 |
| `battery` | `int` |
| `status` | `Status` |

## ② main関数

3台の車両を構造体配列 `vehicles` に格納してください。

| name | battery | status |
|---|---|---|
| `"CAR_A"` | 15 | `RUN` |
| `"CAR_B"` | 60 | `STOP` |
| `"CAR_C"` | 25 | `RUN` |

続いて、以下の処理を実装してください。

1. `vehicles` の先頭を指すポインタ変数 `p` を宣言する。
2. `const char *` 型の変数 `title` に `"VEHICLE REPORT"` を設定する。
3. `updateVehicles` 関数を呼び出す。
4. `title` を表示する。
5. 更新後の3台の車両について、名前・バッテリー残量・状態を順番に表示する。
6. 最後に、2台目の車両名の3番目の文字から末尾までを表示する。

状態は、`RUN` なら `"RUN"`、`STOP` なら `"STOP"` と表示してください。

## ③ updateVehicles関数

次の関数を作成してください。

- 関数名：`updateVehicles`
- 戻り値：`void`
- 引数：`Vehicle` 型へのポインタ、車両数を表す `int`

関数内では、すべての車両に対して次の処理を行います。

- バッテリー残量が20以下なら、状態を `STOP` に変更する。
- バッテリー残量が20より大きければ、状態を `RUN` に変更する。
- バッテリー残量自体は変更しない。

## ④ 期待する実行結果

```text
VEHICLE REPORT
CAR_A 15 STOP
CAR_B 60 RUN
CAR_C 25 RUN
R_B
```

## ⑤ 作成条件

- `#include` から関数定義まで、プログラム全体を書くこと。
- 関数プロトタイプ宣言を記述すること。
- 車両情報の表示には繰り返し処理を使用すること。
- これまで学習したポインタと構造体の表記を使用すること。

## ⑥ 採点方針

- ヒントなしで自力で作成する。
- 回答後にコード全体を添削する。
- 表記に間違いがあれば、その部分を一つずつ解決する。
- 指示があるまで次の問題には進まない。


#include <stdio.h>

#define VEHICLE_COUNT  3

typedef enum {
  STOP,
  RUN
} Status;

typedef struct Vehicle {
  char name[16];
  int battery;
  Status status;
} Vehicle;

void updateVehicles(Vehicle *p, int count);

int main(void)
{
  Vehicle vehicles[3] = {
    {"CAR_A", 15, RUN},
    {"CAR_B", 60, STOP},
    {"CAR_C", 25, RUN}
  };

  Vehicle *p = vehicles;

  const char *title = "VEHICLE REPORT";

  updateVehicles(p, 3);

  printf("%s\n", title);

  for (int i = 0; i < 3; i++) {
    printf("%s ", p[i].name);
    printf(" %d ", p[i].battery);
    
    if (p[i].status == RUN) {
      printf("RUN\n");
    } else {
      printf("STOP\n");
    }
  }

  printf("%s\n", &p[1]->name[2]);
}

void updateVehicles(Vehicle *p, int count)
{
  if (p == NULL) {
    return;
  }

  for (int i = 0; i < count; i++) {
    
    if (p[i].battery <= 20) {
      p[i].status = STOP;
    } else {
      p[i].status = RUN;
    }
  }
}