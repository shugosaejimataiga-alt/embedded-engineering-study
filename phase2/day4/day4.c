問題1

次のコードについて、自分の言葉で説明してください。

int speed = 60;



最低限、

int
speed
60

がそれぞれ何なのかを説明してください。


解答：
intは整数というデータ型
speedは変数という箱
60は初期値

=======================================================================


では、charの問題です。

char level = 'B';


これについて、

char
level
'B'

がそれぞれ何を意味するか説明してください。



解答：
charは1文字を扱うデータ型
levelは変数の箱
'B'は宣言と同時に初期化した文字

%c


=======================================================================


では、short の問題です。

short count = 300;


これについて、

short
count
300
int と比べたときの short の特徴

を説明してください。


解答：
shortは整数扱うときに使うデータ型
countは変数の箱
300は宣言されたときの初期値
intの方が扱える整数の幅が広く、shortの方が扱える整数の幅が狭い
%hd

=======================================================================


long の問題です。


long distance = 500000;


これについて、

long
distance
500000
int と比べたときの long の特徴
printf で表示するときの指定子

を説明してください。

longは整数を扱うデータ型です。
distanceは変数の箱
500000は変数んの初期値
intと比べた時longは整数の扱える幅intよりlongの方が広い
%ld

---------------------------------------------------

longは整数を扱うデータ型です。
distanceは変数の箱
500000は変数んの初期値
intと比べた時longは整数の扱える幅intよりlongの方が/*同じ又は広い*/
%ld


=======================================================================


では float の問題です。


float voltage = 3.3f;


これについて、

float
voltage
3.3f
なぜ f を付けるのか
printf で表示するときの指定子

を説明してください。


解答：
floatは小数を扱うデータ型
voltageは変数の箱
3.3fは変数の初期値
fを付ける理由は、fを付けないとc言語でdouble型と認識されてしまうから。
%f


=======================================================================


double の問題です。


double pi = 3.141592;


これについて、

double
pi
3.141592
float と比べたときの特徴
なぜ f を付けないのか
printf で表示するときの指定子

を説明してください。


解答：
doubleは小数を扱うデータ型
piは変数の箱
3.141592は変数の初期値
floatと比べた時の特徴としてdoubleの方がより精度よく小数を正しく扱える
fをつけるとfloat型と間違われて認識されるため
%f

----------------------------------------------

解答：
doubleは小数を扱うデータ型
piは変数の箱
3.141592は変数の初期値
floatと比べた時の特徴としてdoubleの方がより精度よく小数を正しく扱える
/*fを付けない理由はdouble型として扱いたい為*/
%f


=======================================================================


sizeof の問題です。


int count = 100;

printf("%zu\n", sizeof(count));


これについて、

sizeof(count) は何を調べているのか
結果が 4 だった場合、何を意味するのか
なぜ sizeof を使うのか
printf では何を使って表示するのか

を説明してください。


解答：
sizeof(count) はメモリ上で、その変数 = countが何バイト使っているかを調べている。
countという変数/*そのものが*/4バイトである
それぞれの/*環境でデータ型の大きさ*/が違うためsizeofをメモリ上に使っているデータの数を調べる
%zu


=======================================================================


C-Day4 最終問題

次のコードを見てください。

#include <stdio.h>

int main(void)
{
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

    return 0;
}

以下を自分の言葉で説明してください。

char は何を扱うデータ型か
short は何を扱うデータ型か。int と比べた特徴
int は何を扱うデータ型か
long は何を扱うデータ型か。int と比べた特徴
float は何を扱うデータ型か。なぜ 3.3f と f を付けるのか
double は何を扱うデータ型か。float と比べた特徴
sizeof(temperature) は何を調べているのか
sizeof(temperature) の結果が 4 だった場合、何を意味するか
各表示指定子を答えてください
char / short / int / long / float / double / sizeof の結果


解答：
char は文字を扱うデータ型
short は整数を扱うデータ型。int と比べた特徴として、整数を扱う幅がintより狭い。
int は整数を扱うデータ型
long は整数を扱うデータ型か。int と比べた特徴として、整数を扱う幅がintと同じまたは、より広い。
float は小数を扱うデータ型。なぜ 3.3f と f を付けるのかの理由としてdouble型と認識されない為。
double は小数を扱うデータ型。float と比べた特徴としてdoubleの方が小数をより精密に扱える。
sizeof(temperature) はtemperatureという変数がメモリで何バイト使っているかを調べている。
sizeof(temperature) の結果が 4 だった場合、temperatureが4バイトである。
char %c A / short %hd 300 / int %h 25 / long %ld 500000 / float %f 3.3 / double %f 3.141592 / sizeof %zu


---------------------------------------

解答：
char は文字を扱うデータ型
short は整数を扱うデータ型。int と比べた特徴として、整数を扱う幅がintより狭い。
int は整数を扱うデータ型
long は整数を扱うデータ型か。int と比べた特徴として、整数を扱う幅がintと同じまたは、より広い。
float は小数を扱うデータ型。なぜ 3.3f と f を付けるのかの理由としてdouble型と認識されない為。
double は小数を扱うデータ型。float と比べた特徴としてdoubleの方が小数をより精密に扱える。
sizeof(temperature) はtemperatureという変数がメモリで何バイト使っているかを調べている。
sizeof(temperature) の結果が 4 だった場合、temperatureが4バイトである。
char %c A / short %hd 300 / int %d 25 / long %ld 500000 / float %f 3.3 / double %f 3.141592 / sizeof %zu
