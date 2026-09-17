````markdown
# C-Day14 関数

## 学習内容

C-Day14では、C言語の「関数」について学習した。

今回学習した内容は以下の4つ。

- 関数の定義
- 関数の呼び出し
- 関数プロトタイプ
- `void`

---

# 1. 関数とは

関数とは、

> ある処理をひとまとまりにして、名前を付けたもの

である。

例えば、

```c
void show_led(void)
{
    printf("LED ON\n");
}
````

という関数を作ると、

```c
show_led();
```

と書くだけで、

```text
LED ON
```

という処理を実行できる。

同じ処理を何度も書くのではなく、関数としてまとめることでプログラムを分かりやすく整理できる。

---

# 2. 関数の定義

関数を作ることを「関数を定義する」という。

基本形は以下。

```c
戻り値の型 関数名(引数)
{
    処理
}
```

今回使用した例。

```c
void show_start(void)
{
    printf("START\n");
}
```

この場合、

```text
void        → 値を返さない
show_start  → 関数名
(void)      → 値を受け取らない
```

という意味になる。

---

# 3. 関数の呼び出し

作った関数を実行することを「関数を呼び出す」という。

例えば、

```c
void show_led(void)
{
    printf("LED ON\n");
}
```

という関数を、

```c
int main(void)
{
    show_led();

    return 0;
}
```

と呼び出す。

処理の流れは、

```text
main開始
↓
show_led();
↓
show_led関数へ移動
↓
show_ledの処理を実行
↓
mainへ戻る
↓
次の処理へ進む
```

となる。

---

# 4. void の意味

今回、特に重要だったのが `void`。

例えば、

```c
void show_led(void)
```

には `void` が2つある。

## 左側の void

```c
void show_led
```

左側の `void` は、

> 関数が値を返さない

という意味。

例えば、

```c
void show_led(void)
{
    printf("LED ON\n");
}
```

では処理は実行するが、

```c
return 10;
```

のように値を呼び出し元へ返すことはしない。

重要なのは、

```text
void = 何もしない
```

ではないということ。

`void` 関数でも、

* 画面へ表示する
* 変数を変更する
* LEDをONにする
* モーターを動かす
* 他の関数を呼ぶ

など、さまざまな処理ができる。

つまり、

```text
左のvoid
→ 処理はするが、値は返さない
```

と理解する。

---

## 右側の void

```c
show_led(void)
```

カッコ内の `void` は、

> 関数が値を受け取らない

という意味。

そのため呼び出すときは、

```c
show_led();
```

となり、カッコの中に値を入れない。

つまり、

```text
右のvoid
→ 値をもらわずに処理する
```

ということ。

---

# 5. 戻り値と画面出力は別

今回混同しやすかったポイント。

例えば、

```c
void show_message(void)
{
    printf("HELLO\n");
}
```

では画面に、

```text
HELLO
```

と表示される。

しかし、

```text
画面へ表示すること
```

と、

```text
関数が値を返すこと
```

は別。

関数が値を返す場合は、

```c
return 10;
```

などを使い、呼び出し元へ値を渡す。

例えば、

```c
int get_number(void)
{
    return 10;
}
```

なら、

```c
int number = get_number();
```

として `10` を受け取ることができる。

一方、

```c
void show_message(void)
```

では戻り値がないため、

```c
int number = show_message();
```

のような使い方はできない。

---

# 6. 複数の関数

1つのプログラムの中に複数の関数を作ることもできる。

```c
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
```

実行すると、

```text
SYSTEM START
SYSTEM STOP
```

となる。

このように、

```text
開始処理
停止処理
エラー処理
LED処理
センサー処理
```

など、役割ごとに関数を分割できる。

---

# 7. 関数プロトタイプ

関数を使用する前に、

> このような関数が存在する

とコンパイラへ知らせるものを「関数プロトタイプ」という。

例えば、

```c
void show_ready(void);
```

これが関数プロトタイプ。

最後に `;` が付く。

---

# 8. なぜ関数プロトタイプが必要なのか

次のように、関数本体を `main` より後ろに書く場合がある。

```c
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
```

`main` の中では、

```c
show_ready();
```

を呼び出している。

しかし、その時点では関数本体はまだ下にある。

そこで、

```c
void show_ready(void);
```

と先に書いて、

> show_readyという関数があります

とコンパイラへ知らせる。

---

# 9. 関数プロトタイプと関数定義の違い

## 関数プロトタイプ

```c
void show_ready(void);
```

役割：

```text
この名前・戻り値・引数を持つ関数があります
```

とコンパイラへ知らせる。

処理の中身は書かない。

---

## 関数定義

```c
void show_ready(void)
{
    printf("READY\n");
}
```

役割：

```text
実際に何をする関数なのかを書く
```

---

# 10. main関数と関数の位置

Cプログラムでは、基本的に `main` 関数がプログラムの開始地点になる。

重要なのは、

> ファイルの一番上に書かれているから最初に動くわけではない

ということ。

例えば、

```c
void test(void)
{
    printf("TEST\n");
}

int main(void)
{
    test();

    return 0;
}
```

でも、開始地点は `main`。

処理の流れは、

```text
プログラム開始
↓
main()
↓
test()
↓
mainへ戻る
↓
終了
```

となる。

---

# 11. main.c / .h / .c の関係

今後、プログラムを複数ファイルへ分ける場合は、例えば以下のようになる。

```text
main.c
control.h
control.c
```

役割は、

```text
main.c
→ プログラム全体の流れを書く

control.h
→ 使用できる関数を宣言する
→ 関数プロトタイプを書く

control.c
→ 関数の実際の処理を書く
```

例えば、

## control.h

```c
void fan_on(void);
```

## control.c

```c
#include <stdio.h>
#include "control.h"

void fan_on(void)
{
    printf("FAN ON\n");
}
```

## main.c

```c
#include "control.h"

int main(void)
{
    fan_on();

    return 0;
}
```

という構成にできる。

`main.c` から見ると、

```c
#include "control.h"
```

によって、

```c
void fan_on(void);
```

という関数プロトタイプを知ることができる。

そして実際の処理は `control.c` に書かれている。

---

# 12. Day14で作成した最終形

```c
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
```

このコードでは、

```c
void show_start(void);
void show_stop(void);
```

で関数プロトタイプを宣言。

その後、

```c
int main(void)
```

から、

```c
show_start();
show_stop();
```

を呼び出す。

最後に、

```c
void show_start(void)
{
    printf("START\n");
}
```

```c
void show_stop(void)
{
    printf("STOP\n");
}
```

で関数本体を定義している。

---

# 13. Day14で理解したこと

今回の学習で、以下を理解した。

## 関数

```text
処理をひとまとまりにして名前を付けたもの
```

---

## 関数の定義

```c
void show_led(void)
{
    printf("LED ON\n");
}
```

関数が実際に行う処理を書く。

---

## 関数の呼び出し

```c
show_led();
```

定義した関数を実行する。

---

## 左側の void

```c
void show_led
```

```text
値を返さずに処理する
```

---

## 右側の void

```c
show_led(void)
```

```text
値を受け取らずに処理する
```

---

## 関数プロトタイプ

```c
void show_led(void);
```

```text
このような関数があります
```

とコンパイラへ先に知らせる。

---

## main関数

```text
Cプログラムの基本的な開始地点
```

ファイルの上にあるから最初に動くのではなく、`main` が開始地点として使われるため最初に処理される。

---

# 14. 組み込み開発との関係

組み込み開発でも、処理を関数に分けて管理する。

例えば、

```c
void led_on(void);
void led_off(void);
void read_sensor(void);
void fan_on(void);
void fan_off(void);
```

のように、

```text
LED制御
センサー読み取り
ファン制御
通信処理
エラー処理
```

などを別々の関数として作る。

さらに規模が大きくなると、

```text
main.c
sensor.c
sensor.h
control.c
control.h
```

のようにファイルも役割ごとに分割する。

そのため、今回学習した、

* 関数の定義
* 関数の呼び出し
* 関数プロトタイプ
* void

は、今後の組み込みCでも基本となる重要な知識。

---

# C-Day14 到達目標

* [x] 関数とは何か説明できる
* [x] 関数を定義できる
* [x] 関数を呼び出せる
* [x] 複数の関数を作成できる
* [x] 左側の `void` の意味を説明できる
* [x] カッコ内の `void` の意味を説明できる
* [x] 戻り値と画面出力の違いを理解した
* [x] 関数プロトタイプを書ける
* [x] 関数プロトタイプの役割を説明できる
* [x] `main` がプログラムの開始地点であることを理解した
* [x] `main.c`・`.h`・`.c` の基本的な役割を理解した
* [x] 処理を関数として分割できる

---

# C-Day14 完了

C-Day14「関数」修了。

```
```
