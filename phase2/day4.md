# C言語基礎 C-Day4 学習記録

## 学習テーマ

データ型

## 学習内容

- `char`
- `short`
- `int`
- `long`
- `float`
- `double`
- `sizeof`
- GCCを使ったコンパイルと実行
- Ubuntu（WSL）上で各データ型の大きさを実際に確認

---

# 1. データ型とは

データ型とは、

> その変数に、どのような種類の値を保存するのかを決めるもの

である。

例：

    int age = 24;

この場合、

- `int`：整数を扱うデータ型
- `age`：変数名
- `24`：初期値

となる。

つまり、

    int age;

は、

> `age`という名前で、整数を保存する変数を用意する

という意味になる。

---

# 2. char

`char`は、1文字を扱うために使う基本的なデータ型。

例：

    char grade = 'A';

この場合、

- `char`：1文字を扱うデータ型
- `grade`：変数名
- `'A'`：初期値

となる。

C言語で1文字を表す場合は、シングルクォーテーション `' '` を使う。

    char letter = 'B';

`"B"`のようにダブルクォーテーションで囲むと文字列になるため、意味が異なる。

## printfでの表示

`char`型の文字を表示するときは、

    %c

を使う。

例：

    printf("%c\n", grade);

---

# 3. short

`short`は整数を扱うデータ型。

例：

    short count = 300;

この場合、

- `short`：整数を扱うデータ型
- `count`：変数名
- `300`：初期値

となる。

`short`は、`int`と比べて扱える整数の範囲が同じか狭い。

今回の学習では、一般的な環境を想定して、

> `short`は`int`より扱える整数の範囲が狭いことが多い

と理解した。

ここでいう「大きい・小さい」は、数値そのものの大小ではなく、

> 扱える整数の範囲が広いか狭いか

という意味。

## printfでの表示

`short`型の整数を表示するときは、

    %hd

を使う。

---

# 4. int

`int`は整数を扱う基本的なデータ型。

例：

    int temperature = 25;

この場合、

- `int`：整数を扱うデータ型
- `temperature`：変数名
- `25`：初期値

となる。

## printfでの表示

`int`型の整数を表示するときは、

    %d

を使う。

例：

    printf("%d\n", temperature);

---

# 5. long

`long`も整数を扱うデータ型。

例：

    long distance = 500000;

この場合、

- `long`：整数を扱うデータ型
- `distance`：変数名
- `500000`：初期値

となる。

`long`は`int`と比べて、

> 扱える整数の範囲が同じ、または広い

という特徴がある。

つまり、単純に、

> `long`は必ず`int`より広い

というわけではない。

環境によっては`int`と`long`が同じ大きさの場合もある。

## printfでの表示

`long`型の整数を表示するときは、

    %ld

を使う。

---

# 6. float

`float`は小数を扱うデータ型。

例：

    float voltage = 3.3f;

この場合、

- `float`：小数を扱うデータ型
- `voltage`：変数名
- `3.3f`：初期値

となる。

## なぜfを付けるのか

C言語では、

    3.3

のように小数をそのまま書くと、基本的に`double`型の小数として扱われる。

そのため、

    3.3f

と書くことで、

> この小数を`float`型として扱う

ということを明示する。

つまり、

    3.3

は`double`型、

    3.3f

は`float`型となる。

## printfでの表示

`float`型の値を`printf`で表示するときは、

    %f

を使う。

---

# 7. double

`double`も小数を扱うデータ型。

例：

    double pi = 3.141592;

この場合、

- `double`：小数を扱うデータ型
- `pi`：変数名
- `3.141592`：初期値

となる。

## floatとの違い

`double`は一般的に`float`より高い精度で小数を扱える。

つまり、

> `double`の方が、より細かい桁まで正確に値を保持しやすい

という特徴がある。

例：

    float a = 3.1415926f;
    double b = 3.1415926;

## なぜfを付けないのか

C言語では、

    3.141592

のように何も付けない小数リテラルは、基本的に`double`型として扱われる。

そのため、

    double pi = 3.141592;

では`f`を付ける必要がない。

`f`を付けると、その小数リテラル自体が`float`型になる。

## printfでの表示

`double`型の値を`printf`で表示するときも、

    %f

を使う。

---

# 8. sizeof

`sizeof`は、

> データ型や変数がメモリ上で何バイトの大きさを持つか確認するための演算子

である。

例：

    sizeof(int)

これは、

> `int`型そのものが何バイトか

を調べている。

変数に対して使うこともできる。

    int count = 100;

    sizeof(count)

これは、

> `count`という変数が何バイトの大きさを持つか

を調べている。

---

# 9. sizeofで「値」ではなく「型・変数の大きさ」を調べる

例えば、

    int count = 100;

に対して、

    sizeof(count)

の結果が`4`だった場合、

> `100`という数値が4バイト

という意味ではない。

正しくは、

> `count`という`int`型の変数そのものの大きさが4バイト

という意味。

ここは今回、特に重要な修正点として理解した。

---

# 10. sizeofを使う理由

C言語では、データ型の大きさが実行環境によって異なる場合がある。

そのため、

    sizeof(char)
    sizeof(short)
    sizeof(int)
    sizeof(long)
    sizeof(float)
    sizeof(double)

のように書くことで、

> 現在の環境で各データ型が実際に何バイトなのか

を確認できる。

## sizeofの結果をprintfで表示する

`sizeof`の結果を表示するときは、

    %zu

を使う。

例：

    printf("%zu\n", sizeof(int));

---

# 11. 各データ型のprintf表示指定子

今回学習した基本的な表示指定子は以下。

    char   → %c
    short  → %hd
    int    → %d
    long   → %ld
    float  → %f
    double → %f
    sizeof → %zu

例：

    char grade = 'A';
    short count = 300;
    int temperature = 25;
    long distance = 500000;
    float voltage = 3.3f;
    double pi = 3.141592;

    printf("%c\n", grade);
    printf("%hd\n", count);
    printf("%d\n", temperature);
    printf("%ld\n", distance);
    printf("%f\n", voltage);
    printf("%f\n", pi);
    printf("%zu\n", sizeof(temperature));

---

# 12. 実際にsizeofでデータ型の大きさを確認

今回、以下のプログラムを作成した。

    #include <stdio.h>

    int main(void)
    {
        printf("char   : %zu byte\n", sizeof(char));
        printf("short  : %zu byte\n", sizeof(short));
        printf("int    : %zu byte\n", sizeof(int));
        printf("long   : %zu byte\n", sizeof(long));
        printf("float  : %zu byte\n", sizeof(float));
        printf("double : %zu byte\n", sizeof(double));

        return 0;
    }

このプログラムを実際にコンパイルして実行し、自分の環境で各データ型の大きさを確認した。

---

# 13. Windows側でGCCを使おうとした

最初は、VS Codeで`main.c`を作成した後、Windows側のターミナルからGCCを使おうとした。

実行しようとしたコマンド：

    gcc main.c -o main

しかし、

    'gcc' は、内部コマンドまたは外部コマンド、
    操作可能なプログラムまたはバッチ ファイルとして認識されていません。

というエラーが出た。

これは、

> Windows側でGCCが使用できる状態になっていなかった

ということを意味する。

そこで、今回はWindows側ではなく、WSLのUbuntuを使ってCプログラムをコンパイルすることにした。

---

# 14. WSL・Ubuntuとは

今回使用したUbuntuは、

> Windowsの中でLinux環境を動かすWSL（Windows Subsystem for Linux）

上のUbuntu。

Windows側では、

    C:\embedded-engineering-study\phase2

というフォルダは、

Ubuntu側から見ると、

    /mnt/c/embedded-engineering-study/phase2

になる。

そのためUbuntu上で、

    cd /mnt/c/embedded-engineering-study/phase2

を実行することで、

Windows側で作成した`main.c`が存在するフォルダへ移動できる。

---

# 15. Ubuntu側でも最初はGCCが入っていなかった

Ubuntu側で、

    gcc main.c -o main

を実行したところ、

    Command 'gcc' not found

と表示された。

つまり、

> Ubuntu側にもまだGCCがインストールされていなかった

ということ。

---

# 16. Ubuntuのパスワードを再設定

GCCをインストールするには、

    sudo apt install gcc

を使う。

しかし、`sudo`を使用するとUbuntuユーザーのパスワードが必要になる。

Ubuntuのパスワードが分からなかったため、一度Windows側からUbuntuのrootユーザーとして入り、パスワードを再設定した。

Windows側でWSL環境を確認：

    wsl -l -v

結果：

    NAME              STATE           VERSION
    docker-desktop    Running         2
    Ubuntu            Stopped         2

Ubuntuの正式な環境名が`Ubuntu`だと確認した。

その後、Windows側からUbuntuへrootユーザーで入った。

    wsl -d Ubuntu -u root

そして、

    passwd hugo_amasaki

を実行して、Ubuntuユーザー`hugo_amasaki`のパスワードを再設定した。

---

# 17. UbuntuにGCCをインストール

パスワード再設定後、通常のUbuntuユーザーで、

    sudo apt update

を実行してパッケージ情報を更新。

その後、

    sudo apt install gcc

を実行してGCCをインストールした。

インストール後、

    gcc --version

を実行して確認。

実際の結果：

    gcc (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0

これによって、

> Ubuntu上でGCCが使用できる状態になった

ことを確認した。

---

# 18. main.cをコンパイル

Ubuntuでプログラムがあるフォルダへ移動。

    cd /mnt/c/embedded-engineering-study/phase2

その後、

    gcc main.c -o main

を実行した。

このコマンドの意味は、

- `gcc`：GCCを使用する
- `main.c`：コンパイルするC言語のソースファイル
- `-o main`：作成する実行ファイルの名前を`main`にする

という意味。

つまり、

    main.c
      ↓
    GCCでコンパイル
      ↓
    main

という流れで、ソースコードから実行ファイルを作成した。

---

# 19. Linux上で実行ファイルを起動

コンパイル後、

    ./main

を実行した。

ここで重要なのは、

    ./main.c

ではないということ。

`main.c`は人間が書いたソースコードであり、そのまま実行するものではない。

GCCによって作成された、

    main

という実行ファイルを、

    ./main

でLinux上から起動する。

流れは、

    main.c
      ↓
    gcc main.c -o main
      ↓
    mainという実行ファイルを作成
      ↓
    ./main
      ↓
    Linux上で実行

となる。

---

# 20. 実際に確認したデータ型の大きさ

`./main`を実行した結果：

    char   : 1 byte
    short  : 2 byte
    int    : 4 byte
    long   : 8 byte
    float  : 4 byte
    double : 8 byte

つまり、今回使用したUbuntu環境では、

- `char`：1バイト
- `short`：2バイト
- `int`：4バイト
- `long`：8バイト
- `float`：4バイト
- `double`：8バイト

だった。

これはC言語そのものがすべての環境でこの大きさを保証しているという意味ではなく、

> 今回使用したUbuntu環境で実際に`sizeof`を使って確認した結果

である。

---

# 21. 今回のコンパイル・実行の流れ

今回実際に行った流れを整理すると、

    VS Codeでmain.cを作成
        ↓
    Windows側でgccを使おうとする
        ↓
    Windows側ではgccが使えなかった
        ↓
    WSLのUbuntuを使用
        ↓
    Ubuntu側でもgccが未インストールだった
        ↓
    Ubuntuのパスワードを再設定
        ↓
    sudo apt update
        ↓
    sudo apt install gcc
        ↓
    GCCをUbuntuへインストール
        ↓
    cd /mnt/c/embedded-engineering-study/phase2
        ↓
    gcc main.c -o main
        ↓
    mainという実行ファイルを作成
        ↓
    ./main
        ↓
    Linux上でプログラムを実行
        ↓
    sizeofの結果を表示
        ↓
    各データ型の大きさを実際に確認

となる。

---

# 22. 今回理解したGCCと実行ファイルの関係

`main.c`は人間が読めるC言語で書いたソースコード。

    main.c

これをGCCで、

    gcc main.c -o main

とすることで、Linux上で実行できる`main`という実行ファイルを作成する。

その実行ファイルを、

    ./main

でLinux上から起動する。

つまり、

    ソースコード
        ↓
    GCC
        ↓
    実行ファイル
        ↓
    Linux上で実行

という流れになる。

---

# 23. データ型の整理

## 文字

    char

1文字を扱う。

例：

    char grade = 'A';

---

## 整数

    short
    int
    long

それぞれ整数を扱う。

整数型には、型ごとに扱える範囲やメモリ上の大きさの違いがある。

今回のUbuntu環境では、

    short = 2 byte
    int   = 4 byte
    long  = 8 byte

だった。

---

## 小数

    float
    double

どちらも小数を扱う。

`double`は一般的に`float`より高い精度で小数を扱える。

    float value1 = 3.3f;
    double value2 = 3.3;

`float`型の小数リテラルには`f`を付ける。

---

# 24. 今日理解した重要ポイント

- データ型は、変数にどのような種類の値を保存するかを決める
- `char`は1文字を扱う
- `short`、`int`、`long`は整数を扱う
- `short`は一般的に`int`より扱える整数の範囲が狭い
- `long`は`int`と同じか、それ以上の範囲を扱える
- `float`と`double`は小数を扱う
- `double`は一般的に`float`より精度が高い
- `3.3`のような小数リテラルは基本的に`double`型
- `3.3f`と書くことで`float`型の小数リテラルになる
- `sizeof`はデータ型や変数のメモリ上の大きさをバイト単位で確認する演算子
- `sizeof(count)`は`count`の中の値ではなく、`count`という変数そのものの大きさを調べる
- `sizeof(int)`のように書けば、データ型そのものの大きさを確認できる
- データ型の大きさは環境によって異なる場合がある
- `sizeof`の結果は`%zu`で表示する
- Windows側でGCCが使えなかったため、今回はWSLのUbuntuを使用した
- Ubuntuにも最初はGCCが入っていなかったため、`sudo apt install gcc`でインストールした
- `gcc main.c -o main`でソースコードから実行ファイルを作成できる
- `./main`でLinux上から実行ファイルを起動できる
- Windowsの`C:\`はWSL上では`/mnt/c/`としてアクセスできる
- VS Codeで作ったWindows側のファイルをUbuntu側からコンパイルして実行できる

---

# C-Day4 到達目標

- [x] 基本的なデータ型を説明できる
- [x] `char`の役割を説明できる
- [x] `short`、`int`、`long`の違いを説明できる
- [x] `float`と`double`の違いを説明できる
- [x] `float`の小数リテラルに`f`を付ける理由を説明できる
- [x] `sizeof`の役割を説明できる
- [x] `sizeof`で変数の大きさを確認できる
- [x] `sizeof`でデータ型そのものの大きさを確認できる
- [x] GCCで`main.c`をコンパイルできる
- [x] Linux上で`./main`を使って実行ファイルを実行できる
- [x] 実際の環境で各データ型の大きさを確認できる

# C-Day4 修了