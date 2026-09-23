最初の問題

次の配列があります。

int score[4] = {70, 85, 90, 60};

この配列を関数へ渡して、

70
85
90
60

と表示してください。

条件は次のとおりです。

void show_score(int score[], int size);

という関数を作ること。

main関数から、

show_score(score, 4);

と呼び出してください。

プログラム全体を自分で書いてください。




解答：
#include <stdio.h>

void show_score(int score[], int size);

int main(void)
{
  int score[4] = {70, 85, 90, 60};

  show_score(score, 4);

  return 0;
}

void show_score(int score[], int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d\n", score[i]);
  }
}



====================================================================================


問題

次の配列があります。

int temperature[5] = {22, 25, 19, 27, 24};

この5個の値の合計を関数で計算し、117 と表示するプログラムを作成してください。



解答：
#include <stdio.h>

void add(int temperature[], int size);

int main(void)
{
  int temperature[5] = {22, 25, 19, 27, 24};

  add(temperature, 5);

  return 0;
}

void add(int temperature[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + temperature[i];
  }

  printf("%d\n", total);
}



#include <stdio.h>

int add(int temperature[], int size);

int main(void)
{
  int temperature[5] = {22, 25, 19, 27, 24};

  int total;

  total = add(temperature, 5);

  printf("%d\n", total);

  return 0;
}

int add(int temperature[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + temperature[i];
  }

  return total;
}



================================================================================



問題2：平均値を求める

5個の整数データがあります。

値は、

18、22、25、20、15

です。

この5個の値を配列に保存し、関数を使って平均値を計算してください。

計算した平均値を main 関数側で表示してください。


解答：
#include <stdio.h>

double average(double number[], int size);

int main(void)
{
  double number[18, 22, 25, 20, 15];

  double answer;

  answer = average(number, 5);

  printf("%d\n", answer);

  return 0;
}

double average(double number[], int size)
{
  double average = 0;

  for (int i = 0; i < size; i++) {
    average = average + number[i];
    average / size
  }

  return average;
}

---------------------------------------

解答：
#include <stdio.h>

double average(double number[], int size);

int main(void)
{
  double number[5] = {18, 22, 25, 20, 15};

  double answer;

  answer = average(number, 5);

  printf("%f\n", answer);

  return 0;
}

double average(double number[], int size)
{
  double average = 0;

  for (int i = 0; i < size; i++) {
    average = average + number[i];
  }

  return average / size;
}



=================================================================================


問題3：最大値を求める

5個の整数データがあります。

12、37、25、41、19

この5個の値を配列に保存し、関数を使って最大値を求めてください。

求めた最大値は main 関数側で表示してください。



解答：
#include <stdio.h>

int maximum(int integer[], int size);

int main(void)
{
  int answer;

  int number[5] = {12, 37, 25, 41, 19};

  answer = maximum(number, 5);

  printf("%d\n", answer);

  return 0;
}

int maximum(int integer[], int size)
{
  int number = 0;

  for (int i = 0; i < size; i++) {
    if (number < integer[i]) {
      number = integer[i]
    }
  }

  return number;
}

--------------------------------------------

解答：
#include <stdio.h>

int maximum(int integer[], int size);

int main(void)
{
  int answer;

  int number[5] = {12, 37, 25, 41, 19};

  answer = maximum(number, 5);

  printf("%d\n", answer);

  return 0;
}

int maximum(int integer[], int size)
{
  int number = integer[0];

  for (int i = 0; i < size; i++) {
    if (number < integer[i]) {
      number = integer[i];
    }
  }

  return number;
}


================================================================================


問題4：最小値を求める

5個の整数データがあります。

34、18、27、11、25

この5個の値を配列に保存し、関数を使って最小値を求めてください。

求めた最小値は main 関数側で表示してください。



解答：
#include <stdio.h>

int minimum(int integer[], int size);

int main(void)
{
  int answer;

  int number[5] = {34, 18, 27, 11, 25};

  answer = minimum(number, 5);

  printf("%d\n", answer);

  return 0;
}

int minimum(int integer[], int size)
{
  int number = integer[0];

  for (int i = 0; i < size; i++) {
    if (number > integer[i]) {
      number = integer[i];
    }
  }

  return number;
}


==============================================================================


最終問題

6個の整数データがあります。

8、15、23、4、17、10

このデータを配列に保存し、以下をすべて関数を使って求めるプログラムを作成してください。

合計値
平均値
最大値
最小値

main 関数側でそれぞれ表示してください。

出力は分かるように表示してください。



解答：
#include <stdio.h>

int add(int integer[], int size);
double average(double integer[], int size);
int maxmimu(int integer[], int size);
int minimum(int integer[], int size);

int main(void)
{
  int answer1;

  double answer2;

  double number[6] = {8, 15, 23, 4, 17, 10};



  answer1 = add(number, 6);

  printf("%d\n", answer1);



  answer2 = average(number, 6);

  printf("%f\n", answer2);



  answer1 = maximum(number, 6)

  printf("%d\n", answer1);



  answer1 = minimum(number, 6);

  printf("%d\n", answer1);


  return 0;
}

int add(int integer[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + integer[i];
  }

  return total;
}

double average(double integer[], int size)
{
  double total = 0;

  double answer;

  for (int i = 0; i < size; i++) {
    total = total + integer[i];
  }
  answer = total/size

  return answer;
}

int maximum(int integer[], int size)
{
  int total = integer[0];

  for (int i = 0; i < size; i++) {
    if (total < integer[i]) {
      total = integer[i];
    }
  }

  return total;
}

int minimum(int integer[], int size)
{
  int total = integer[0];

  for (int i = 0; i < size; i++) {
    if (total > integer[i]) {
      total = integer[i];
    }
  }

  return total;
}

-------------------------------------------

解答：
#include <stdio.h>

int add(int integer[], int size);
double average(int integer[], int size);
int maximum(int integer[], int size);
int minimum(int integer[], int size);

int main(void)
{
  int answer1;

  double answer2;

  int number[6] = {8, 15, 23, 4, 17, 10};



  answer1 = add(number, 6);

  printf("%d\n", answer1);



  answer2 = average(number, 6);

  printf("%f\n", answer2);



  answer1 = maximum(number, 6);

  printf("%d\n", answer1);



  answer1 = minimum(number, 6);

  printf("%d\n", answer1);


  return 0;
}

int add(int integer[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + integer[i];
  }

  return total;
}

double average(int integer[], int size)
{
  double total = 0;

  for (int i = 0; i < size; i++) {
    total = total + integer[i];
  }

  return total/size;
}

int maximum(int integer[], int size)
{
  int total = integer[0];

  for (int i = 0; i < size; i++) {
    if (total < integer[i]) {
      total = integer[i];
    }
  }

  return total;
}

int minimum(int integer[], int size)
{
  int total = integer[0];

  for (int i = 0; i < size; i++) {
    if (total > integer[i]) {
      total = integer[i];
    }
  }

  return total;
}