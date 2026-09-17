# C-Day15：引数と戻り値

## 今日の学習内容

- 引数
- 戻り値
- `return`
- 値渡し
- 複数の関数の連携
- 関数の戻り値を変数へ代入する流れ

---

# 1. 引数

## 引数とは

引数とは、**関数の外部から、その関数で使うために渡される値**。

例：

```c
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
```

実行結果：

```text
Temperature: 25
```

### 処理の流れ

```c
show_temperature(25);
```

で `25` を関数へ渡す。

関数側では、

```c
void show_temperature(int temperature)
```

の `temperature` が値を受け取る。

```text
show_temperature(25)
        ↓
temperature = 25
        ↓
printfで表示
```

---

# 2. 複数の引数

関数には複数の値を渡すこともできる。

```c
void show_sum(int a, int b)
{
    printf("%d\n", a + b);
}
```

例えば、

```c
show_sum(10, 20);
```

とすると、

```text
a = 10
b = 20
```

となり、

```text
10 + 20 = 30
```

を計算できる。

---

# 3. 戻り値

## 戻り値とは

戻り値とは、**関数で処理した結果として、呼び出し元へ返す値**。

値を返すときは `return` を使う。

```c
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int result;

    result = add(10, 20);

    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

実行結果：

```text
30
```

### 処理の流れ

```c
result = add(10, 20);
```

まず、

```text
a = 10
b = 20
```

として関数へ値が渡される。

その後、

```c
return a + b;
```

によって、

```text
10 + 20 = 30
```

が計算される。

その `30` が呼び出し元へ返り、

```text
result = 30
```

となる。

---

# 4. voidと戻り値のある関数の違い

## void

```c
void show_temperature(int temperature)
```

`void` は、

```text
値を返さない
```

という意味。

## int

```c
int add(int a, int b)
```

先頭の `int` は、

```text
この関数はint型の値を返す
```

という意味。

```c
return a + b;
```

のように整数を返す。

---

# 5. return

`return` は、関数で得た値を呼び出し元へ返すために使う。

```c
int multiply(int a, int b)
{
    return a * b;
}
```

例えば、

```c
multiply(5, 4)
```

なら、

```text
5 × 4 = 20
```

となり、`20` が返される。

```c
result = multiply(5, 4);
```

とすれば、

```text
result = 20
```

となる。

---

# 6. 値渡し

## 値渡しとは

値渡しとは、**元の変数の値を関数側の別の変数へ渡して使用する仕組み**。

元の変数そのものを変更しているわけではない。

```c
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
```

実行結果：

```text
5
```

### 処理の流れ

最初は、

```text
number = 5
```

その状態で、

```c
change(number);
```

を実行すると、関数側では最初、

```text
x = 5
```

となる。

つまり、

```text
number = 5
x      = 5
```

という状態になる。

ただし、`number` と `x` は別の変数。

その後、

```c
x = 20;
```

とすると、

```text
number = 5
x      = 20
```

になる。

`x` を変更しても `number` は変わらない。

---

# 7. 値渡しを使う場面

値渡しは、**元の変数を変更せずに、その値を関数で計算や判定に使いたい場合**によく使う。

組み込みでは例えば、

```c
int check_temperature(int temperature)
{
    if (temperature >= 30) {
        return 1;
    }

    return 0;
}
```

のように使える。

```c
int temp = 35;

int result = check_temperature(temp);
```

処理は、

```text
temp = 35
↓
temperature = 35
↓
関数内で判定
↓
結果をreturn
```

となる。

元の `temp` は変更されない。

---

# 8. 戻り値を変数へ再代入する

重要な形：

```c
result = triple(result);
```

例えば実行前が、

```text
result = 8
```

なら、まず右側の、

```c
triple(result)
```

が実行される。

つまり、

```c
triple(8)
```

として呼び出される。

```c
int triple(int number)
{
    return number * 3;
}
```

なら、

```text
number = 8
↓
8 × 3 = 24
↓
24をreturn
```

となる。

返された `24` が再び `result` に代入されるため、

```text
result = 8
↓
result = 24
```

と上書きされる。

---

# 9. 値渡しと戻り値による上書きの違い

## 値渡しだけの場合

```c
change(number);
```

関数内で、

```c
x = 20;
```

としても、

```text
number = 5
x = 20
```

となり、元の `number` は変わらない。

## 戻り値を再代入した場合

```c
result = triple(result);
```

では、

```text
現在のresultを関数へ渡す
↓
関数が新しい値を返す
↓
返された値をresultへ代入する
```

という流れになる。

そのため、

```text
result = 8
↓
triple(result) が24を返す
↓
result = 24
```

となる。

つまり、

```text
関数内の引数を変更する
```

ことと、

```text
関数の戻り値を元の変数へ再代入する
```

ことは別。

---

# 10. 複数の関数の連携

関数の戻り値を、別の関数でさらに使用できる。

```c
#include <stdio.h>

int add(int a, int b);
int triple(int number);

int main(void)
{
    int result;

    result = add(5, 3);
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
```

処理：

```text
5 + 3 = 8
↓
result = 8
↓
triple(8)
↓
8 × 3 = 24
↓
result = 24
```

実行結果：

```text
24
```

---

# 11. 複数の関数を順番につなげる

Day15では、複数の関数を順番に連携させた。

```c
#include <stdio.h>

int add(int a, int b);
int triple(int number);
int minus2(int numeric);

int main(void)
{
    int result;

    result = add(7, 5);
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
```

処理の流れ：

```text
7 + 5
↓
12

12 × 3
↓
36

36 - 2
↓
34
```

最終的に、

```text
result = 34
```

となる。

---

# 12. 関数プロトタイプと関数定義

関数プロトタイプでは、

```c
int add(int a, int b);
```

のように最後に `;` を付ける。

一方、関数を実際に定義するときは、

```c
int add(int a, int b)
{
    return a + b;
}
```

のように書き、関数名の後ろに `;` は付けない。

---

# 13. 今日の重要ポイント

## 引数

```text
関数の外から、その関数で使用する値を渡す
```

## 戻り値

```text
関数で処理した結果を呼び出し元へ返す
```

## return

```text
関数から値を返すために使う
```

## 値渡し

```text
元の変数の値を、関数側の別の変数へ渡して使用する
```

渡された側の変数を変更しても、元の変数は変わらない。

## 戻り値による上書き

```c
result = triple(result);
```

では、

```text
現在のresultを関数へ渡す
↓
関数で処理する
↓
戻り値を受け取る
↓
resultへ再代入する
```

となる。

## 複数関数の連携

```c
result = add(7, 5);
result = triple(result);
result = minus2(result);
```

のように、前の関数で得た結果を次の関数へ渡して処理をつなげられる。

---

# 自分の言葉での理解

## 引数とは

外部から、その関数で使うために入れられる値。

## 戻り値とは

関数で処理した後に返される値。

```c
return 値;
```

のような形で返す。

## 値渡しとは

別の場所にある変数の値を関数側へ渡し、その関数の処理で使用すること。

渡される側の変数を変更しても、渡す側の元の変数は変わらない。

---

# Day15 到達目標

- [x] 引数の意味を説明できる
- [x] 関数へ値を渡せる
- [x] 複数の引数を使用できる
- [x] 戻り値の意味を説明できる
- [x] `return` を使って値を返せる
- [x] 戻り値を変数へ保存できる
- [x] 値渡しを説明できる
- [x] 関数側の変数と元の変数が別物であることを理解した
- [x] 戻り値を使って変数を上書きできる
- [x] 複数の関数を連携させられる
- [x] 値を受け取って結果を返す関数を自分で作成できる

---

# Day15 まとめ

Day15では、関数をただ呼び出すだけではなく、

```text
値を渡す
↓
関数で処理する
↓
結果を返す
↓
返された結果を別の処理へ使用する
```

という関数の基本的なデータの流れを学んだ。

特に重要なのは、

```text
引数として値を渡したとき、
関数側の変数と元の変数は別物
```

という値渡しの考え方。

また、

```c
result = triple(result);
```

のように書くことで、

```text
現在のresultを関数へ渡す
↓
関数で計算する
↓
戻り値を受け取る
↓
resultを新しい値で上書きする
```

という処理ができる。

これにより、複数の関数を組み合わせながら処理を順番につなげられるようになった。

**C-Day15「引数と戻り値」修了。**