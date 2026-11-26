【要求仕様】

マイコン開発用テスターに、
受信データの判定機能を追加する。

・期待値と受信値を比較する。
・2つの値が一致すれば1を返す。
・一致しなければ0を返す。
・2つの値はint型とする。
・画面への表示は行わない。

【課題】

① この機能の入力を説明してください。

② この機能の出力を説明してください。

③ この機能が仕様どおり動作していると
   確認できるテストケースを、
   一致する場合と一致しない場合で
   それぞれ1つずつ作成してください。

④ この判定処理を担当する関数の宣言を
   C言語で書いてください。

   関数名：checkResponse


#include <stdio.h>

int checkResponse(int expected, int received);

int main(void)
{
  int expected = 10;
  int received = 12;
  int result = 0;

  result = checkResponse(10, 12);

  return 0;
}

int checkResponse(int expected, int received)
{
  if (expected == received) {
    return 1;
  } else {
    return 0;
  }
}

① この機能の入力を説明してください。
checkResponce関数にexpectedとreceivedに入っている値を入れる。

② この機能の出力を説明してください。
expectedとreceivedの値が同じであれば1。そうでなければ0を返す。

③ この機能が仕様どおり動作していると
   確認できるテストケースを、
   一致する場合と一致しない場合で
   それぞれ1つずつ作成してください。
一致するケースはexpectedとreceivedが1。
一致しない場合は4と5とか違う数字だと0


===================================================================================================================



【要求仕様】

マイコン開発用テスターに、
センサー値を検査する機能を追加する。

・センサーの測定値を検査する。
・測定値が下限値以上、上限値以下なら1を返す。
・範囲外なら0を返す。
・測定値、下限値、上限値はint型とする。
・画面への表示は行わない。

【課題】

① この機能の入力を説明してください。
センサーの測定値を入れる。

② この機能の出力を説明してください。
センサーの測定値を下限値5以上、上限値15以下なら1を返す。そうでなければ0を返す。

③ 正常な場合と範囲外の場合について、
   テストケースをそれぞれ1つ作成してください。
   入力値と期待する結果を記述してください。

   正常な場合は10で1が返ってくる。
   範囲外の場合は4で0が返ってくる。

④ 次の関数名を使用して、
   関数のプロトタイプ宣言を書いてください。

   関数名：checkSensor



#include <stdio.h>

int checkSensor(int sensor);

int main(void)
{
  int sensor = 10;

  int result = checkSensor(10);

  return 0;
}

int checkSensor(int sensor)
{
  if (sensor >= 5 && sensor <= 15) {
    return 1;
  } else {
    return 0;
  }
}



==============================================================================================



【要求仕様】

マイコン開発用テスターに、
電圧を検査する機能を追加する。

1. 測定電圧、下限値、上限値を比較する。

2. 測定電圧が下限値以上、上限値以下なら
   1を返す。

3. 測定電圧が範囲外なら0を返す。

4. 測定電圧、下限値、上限値は
   すべてint型とする。

5. 3つの値は、すべて関数の引数として
   受け取ること。

6. 戻り値はint型とする。

7. 画面への表示は行わない。

8. 下限値・上限値を関数内部で
   固定してはいけない。

9. 下限値は上限値以下であるものとする。


【課題】

① この関数の入力を文章で説明してください。

② この関数の出力を文章で説明してください。

③ 次の2つのテストケースを作成してください。

   A. 範囲内の場合

   B. 範囲外の場合

   それぞれ3つの入力値と
   期待する戻り値を記述してください。

④ 以下の関数名を使用して、
   関数のプロトタイプ宣言を書いてください。

   関数名：checkVoltage



#include <stdio.h>

int checkVoltage(int voltage, int max, int min);

int main(void)
{
  int voltage = 10;

  int max = 15;

  int min = 5;

  int result = checkVoltage(10, 15, 5);

  return 0;
}

int checkVoltage(int voltage, int max, int min)
{
  if (voltage >= min && voltage <= max) {
    return 1;
  } else {
    return 0;
  }
}

① この関数の入力を文章で説明してください。
voltageとmaxとminをcheckVoltageに入れる。

② この関数の出力を文章で説明してください。
volatageの値がmaxとminの中に入っていたら1が返る。そうでなければ0を返す。

③ 次の2つのテストケースを作成してください。

   A. 範囲内の場合
   voltage 10, max 15, min 5, 戻り値 1

   B. 範囲外の場合
   voltage 10, max 9, min 5, 戻り値 0



================================================================================================



#include <stdio.h>

int main(void)
{
    // 送信するデータ
    unsigned char tx[] = {0x03};

    // マイコンから返ってくると期待するデータ
    unsigned char expected[] = {0x05};

    // PC上で模擬した受信データ
    unsigned char received[] = {0x05};

    // 送信処理を模擬する
    printf("TX: %02X\n", (unsigned int)tx[0]);

    // 受信したデータを表示する
    printf("RX: %02X\n", (unsigned int)received[0]);

    // 受信データを比較する
    if (expected[0] == received[0]) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}



【前提】

PC上でマイコンとの通信を模擬する。
実際のマイコンは接続しない。

以下の3種類のデータを使用する。

tx       ：マイコンへ送信するデータ
expected ：正しい応答として事前に設定するデータ
received ：受信したと仮定するデータ

すべてuint8_t型の配列で扱う。


【要求仕様】

1. main関数で送信データを設定する。

   tx = {0x03}

2. 期待する応答データを設定する。

   expected = {0x05, 0x00}

3. 受信データを設定する。

4. checkResponse関数を作成する。

   ・期待データの配列を受け取る。
   ・期待データの長さをint型で受け取る。
   ・受信データの配列を受け取る。
   ・受信データの長さをint型で受け取る。
   ・戻り値はint型とする。

5. checkResponse関数の判定条件

   ・データの長さが異なれば0を返す。
   ・長さが一致していても、
     1バイトでも値が異なれば0を返す。
   ・長さとすべての値が一致すれば1を返す。

6. main関数からcheckResponse関数を呼び出す。

7. 判定結果を表示する。

   戻り値が1 → PASS
   戻り値が0 → FAIL


【テストケース】

次の3つをmain関数でそれぞれ検査する。

ケースA
expected = {0x05, 0x00}
received = {0x05, 0x00}

ケースB
expected = {0x05, 0x00}
received = {0x05, 0x01}

ケースC
expected = {0x05, 0x00}
received = {0x05}


【期待する実行結果】

PASS
FAIL
FAIL


【作成条件】

・#includeからmain関数まで自分で書く。
・関数のプロトタイプ宣言を書く。
・checkResponse関数を自分で実装する。
・配列の長さを正しく扱う。
・txの送信は模擬なので、
  実際の通信処理は書かなくてよい。
・txは受信データとの比較には使用しない。
・実際のUART通信処理は不要。


#include <stdio.h>
#include <stdint.h>

int checkResponse(uint8_t expected[],int count1, uint8_t received[], int count2);

int main(void)
{
    uint8_t tx[] = {0x03};
    uint8_t expected[] = {0x05, 0x00};
    uint8_t received[] = {0x05};

    int count1 = sizeof(expected) / sizeof(expected[0]);
    int count2 = sizeof(received) / sizeof(received[0]);
    int count3 = sizeof(tx) / sizeof(tx[0]);

    int result = checkResponse(expected, count1, received, count2);

    if (result == 1) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    for (int i = 0; i < count3; i++) {
        printf("TX: %02X\n", (unsigned int)tx[i]);
    }

    return 0;
}

int checkResponse(uint8_t expected[],int count1, uint8_t received[], int count2)
{
    if (count1 != count2) {
        return 0;
    }

    for (int i = 0; i < count1; i++) {
        
        if (expected[i] != received[i]) {
            return 0;
        }
    }

    return 1;
}



======================================================================================================



【Day1 追加実践：再実装】

送信データ
tx = {0x10, 0x20}

期待応答
expected = {0x30, 0x40}

受信データ
received = {0x30, 0x40}

【要求仕様】

・uint8_t型の配列を使う。
・配列の要素数を取得する。
・checkResponse関数を自分で作る。
・配列の長さと値を比較する。
・一致ならPASS、不一致ならFAIL。
・送信データを16進数2桁で表示する。
・main関数と判定関数を分離する。

#include <stdio.h>
#include <stdint.h>

int checkResponse(uint8_t expected[], int count1, uint8_t received[], int count2);

int main(void)
{
  uint8_t tx[] = {0x10, 0x20};
  uint8_t expected[] = {0x30, 0x40};
  uint8_t received[] = {0x30, 0x40};

  int count1 = sizeof(expected) / sizeof(expected[0]);
  int count2 = sizeof(received) / sizeof(received[0]);
  int count3 = sizeof(tx) / sizeof(tx[0]);

  int result = checkResponse(expected, count1, received, count2);

  if (result == 1) {
    printf("PASS\n");
  } else {
    printf("FAIL\n");
  }

  for (int i = 0; i < count1; i++) {
    printf("%02X\n", (unsigned int)expected[i]);
  }

  for (int i = 0; i < count2; i++) {
    printf("%02X\n", (unsigned int)received[i]);
  }

  for (int i = 0; i < count3; i++) {
    printf("TX: %02X\n", (unsigned int)tx[i]);
  }

}

int checkResponse(uint8_t expected[], int count1, uint8_t received[], int count2)
{
  if (count1 != count2) {
    return 0;
  }

  for (int i = 0; i < count1; i++) {

    if (expected[i] != received[i]) {
      return 0;
    }
  }

  return 1;

}