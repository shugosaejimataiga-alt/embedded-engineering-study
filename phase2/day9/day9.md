# C-Day9 学習記録：switch文

## 学習内容

C-Day9では、`switch`文を使った条件分岐について学習した。

今回学習した主な内容は以下。

- `switch`
- `case`
- `break`
- `default`
- フォールスルー
- `if`文と`switch`文の使い分け

---

## 1. switch文とは

`switch`文は、1つの変数や式の値によって処理を切り替えるために使用する。

例えば、動作モードを数字で管理する場合に使いやすい。

```c
int mode = 1;

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
```

この場合、

```c
mode = 1;
```

なので、

```text
AUTO
```

が表示される。

---

## 2. switch文の基本構造

基本的な書き方は以下。

```c
switch (変数) {

    case 値1:
        処理;
        break;

    case 値2:
        処理;
        break;

    default:
        処理;
        break;
}
```

`switch`の中に判定したい値を指定し、その値と一致する`case`の処理が実行される。

---

## 3. case

`case`は、`switch`で指定した値と一致する場合に実行する処理を書く場所。

例：

```c
int mode = 2;

switch (mode) {

    case 1:
        printf("AUTO\n");
        break;

    case 2:
        printf("MANUAL\n");
        break;
}
```

`mode`の値が`2`なので、

```c
case 2:
```

の処理が実行される。

実行結果：

```text
MANUAL
```

---

## 4. break

`break;`は、実行中の`switch`文から抜けるために使用する。

例：

```c
case 1:
    printf("AUTO\n");
    break;
```

`AUTO`を表示したあと、`break;`によって`switch`文を終了する。

そのため、その下にある別の`case`は実行されない。

---

## 5. breakがない場合

`case`の最後に`break;`がない場合、その下にある`case`の処理まで続けて実行される。

例：

```c
int mode = 1;

switch (mode) {

    case 1:
        printf("AUTO\n");

    case 2:
        printf("MANUAL\n");
        break;
}
```

実行結果：

```text
AUTO
MANUAL
```

処理の流れ：

```text
mode = 1
↓
case 1 に入る
↓
AUTOを表示
↓
breakがない
↓
case 2の処理も続けて実行
↓
MANUALを表示
↓
break
↓
switch終了
```

---

## 6. フォールスルー

`case`の最後に`break;`がなく、次の`case`の処理まで続けて実行されることを「フォールスルー」という。

例：

```c
case 2:
    printf("TWO\n");

case 3:
    printf("THREE\n");
    break;
```

`case 2`に入った場合、

```text
TWO
THREE
```

の両方が表示される。

これは`case 2`の最後に`break;`がないため。

意図しないフォールスルーを防ぐため、必要な場所に`break;`を書くことが重要。

---

## 7. default

`default`は、どの`case`にも値が一致しなかった場合に実行される。

例：

```c
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
```

`mode = 5`に一致する`case`が存在しないため、

```text
ERROR
```

と表示される。

つまり、`default`は、

```text
どのcaseにも一致しなかった場合
```

の処理を担当する。

---

## 8. switch文の処理の流れ

例えば、

```c
int mode = 3;
```

の場合、

```c
switch (mode)
```

によって`mode`の値に一致する`case`が選ばれる。

今回は、

```c
case 3:
```

と一致するため、次の処理が実行される。

```c
case 3:
    printf("TEST\n");
    break;
```

実行結果：

```text
TEST
```

処理の流れ：

```text
mode = 3
↓
switch(mode)
↓
case 3 と一致
↓
TESTを表示
↓
break
↓
switch終了
```

---

## 9. if文とswitch文の使い分け

### if文が向いている場合

`if`文は、範囲や大小関係を判定するときに向いている。

例：

```c
if (temperature >= 35) {

    printf("DANGER\n");

} else if (temperature >= 30) {

    printf("HOT\n");

} else {

    printf("NORMAL\n");
}
```

このような、

```text
35度以上
30度以上
25度以下
```

などの範囲を使った条件では`if`文が使いやすい。

---

### switch文が向いている場合

`switch`文は、1つの値に対して複数の決まった候補から処理を選ぶ場合に向いている。

例：

```text
0 → STOP
1 → AUTO
2 → MANUAL
3 → TEST
```

コード：

```c
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
```

---

## 10. if文とswitch文の違い

大まかには以下のように使い分ける。

```text
範囲・大小比較
↓
if文

特定の値ごとの処理
↓
switch文
```

例えば、

```text
温度が30度以上
温度が25度以下
```

のような条件は`if`文が向いている。

一方、

```text
mode == 0
mode == 1
mode == 2
```

のように特定の値ごとに処理を分ける場合は`switch`文が分かりやすい。

---

## 11. switch文で注意すること

### breakを書き忘れない

必要な場所に`break;`を書かないと、次の`case`の処理まで実行される。

```c
case 1:
    printf("AUTO\n");
    break;
```

基本的には、このように`case`の処理の最後に`break;`を書く。

---

### defaultを用意する

想定していない値が入った場合の処理として`default`を使用できる。

```c
default:
    printf("ERROR\n");
    break;
```

これによって、どの`case`にも一致しない値を処理できる。

---

## 12. switch文の完成例

```c
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
```

実行結果：

```text
TEST
```

理由：

```text
mode = 3
↓
switch(mode)で値を確認
↓
case 3と一致
↓
TESTを表示
↓
breakでswitch終了
```

---

## 13. 今日理解したこと

- `switch`文は1つの値によって処理を切り替えるために使う
- `case`は特定の値に対応する処理を書く
- `break;`で`switch`文を終了する
- `break;`がない場合は次の`case`の処理も続けて実行される
- `break;`がなく次の`case`へ処理が続くことをフォールスルーという
- `default`はどの`case`にも一致しなかった場合に実行される
- 範囲や大小比較には`if`文が向いている
- 特定の値ごとの分岐には`switch`文が向いている
- モードや番号による処理の切り替えに`switch`文が使いやすい
- 必要な場所に`break;`を書くことが重要

---

## C-Day9 到達目標

- [x] `switch`文を使って処理を分岐できる
- [x] `case`の役割を説明できる
- [x] `break`の役割を説明できる
- [x] `default`の役割を説明できる
- [x] `break`がない場合の動作を説明できる
- [x] フォールスルーを理解した
- [x] モードや番号に応じて処理を分岐できる
- [x] `if`文と`switch`文を使い分けられる

---

# C-Day9 完了

C-Day9では、`switch`文を使用した条件分岐について学習した。

特に、`case`・`break`・`default`の役割と、`break`を書かなかった場合に発生するフォールスルーについて理解した。

また、

- 範囲や大小比較 → `if`文
- モード番号など特定の値ごとの分岐 → `switch`文

という使い分けについて学習した。

C-Day9の到達目標を達成したため、学習完了。