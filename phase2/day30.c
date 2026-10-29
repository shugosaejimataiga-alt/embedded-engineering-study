【Level 1・問題1】

信号機の状態を管理するプログラムを作成してください。

条件
1. enum TrafficLightを定義する。
2. RED、YELLOW、GREENの3つの列挙定数を用意する。
3. TrafficLight型の変数lightを宣言し、GREENで初期化する。
4. switch文を使用し、状態によって以下を表示する。
   RED：STOP
   YELLOW：CAUTION
   GREEN：GO
5. main関数内で処理を実行する。

実行結果
GO



解答：
#include <stdio.h>

enum TrafficLight {
  RED,
  YELLOW,
  GREEN
};

int main(void)
{
  enum TrafficLight light = GREEN;

  switch(light) {

    case RED:
        printf("STOP");
        break;

    case YELLOW:
        printf("CAUTION");
        break;

    case GREEN:
        printf("GO");
        break;

  }

  return 0;
}



===============================================================================================



【Level 1・問題2】

センサーの状態を管理するプログラムを作成してください。

条件
1. enum SensorStatusを定義する。
2. 以下の3つの列挙定数を用意する。
   SENSOR_NORMAL
   SENSOR_WARNING
   SENSOR_ERROR

3. enum SensorStatus型の変数statusを宣言し、
   SENSOR_WARNINGで初期化する。

4. switch文を使用し、状態に応じて以下を表示する。

   SENSOR_NORMAL  → NORMAL
   SENSOR_WARNING → WARNING
   SENSOR_ERROR   → ERROR

5. main関数内で処理を実行する。

実行結果
WARNING



解答：
#include <stdio.h>

enum SensorStatus {
  SENSOR_NORMAL,
  SENSOR_WARNING,
  SENSOR_ERROR,
};

int main(void)
{
  enum SensorStatus status = SENSOR_WARNING;

  switch(status) {

    case SENSOR_NORMAL:
        printf("NORMAL");
        break;

    case SENSOR_WARNING:
        printf("WARNING");
        break;

    case SENSOR_ERROR:
        printf("ERROR");
        break;
  }

  return 0;
}



==========================================================================================



【Level 1・問題3】

モーターの動作モードを管理するプログラムを作成してください。

条件
1. enum MotorModeを定義する。
2. 以下の4つの列挙定数を用意する。
   MODE_STOP
   MODE_FORWARD
   MODE_REVERSE
   MODE_BRAKE

3. enum MotorMode型の変数modeを宣言し、MODE_REVERSEで初期化する。

4. switch文を使用して、以下のように表示する。
   MODE_STOP    → STOP
   MODE_FORWARD → FORWARD
   MODE_REVERSE → REVERSE
   MODE_BRAKE   → BRAKE

5. main関数内で処理を実行する。

実行結果
REVERSE



解答：
#include <stdio.h>

enum MotorMode {
  MODE_STOP,
  MODE_FORWARD,
  MODE_REVERSE,
  MODE_BRAKE
};

int main(void)
{
  enum MotorMode mode = MODE_REVERSE;

  switch(mode) {

    case MODE_STOP:
        printf("STOP");
        break;

    case MODE_FORWARD:
        printf("FORWARD");
        break;

    case MODE_REVERSE:
        printf("REVERSE");
        break;

    case MODE_BRAKE:
        printf("BRAKE");
        break;
  }

  return 0;
}



======================================================================================================



【Level 2・問題1】

センサーの測定回数を管理するプログラムを作成してください。

条件
1. typedefを使用して、unsigned intに
   MeasurementCountという型名を付ける。

2. MeasurementCount型の変数countを宣言し、
   20で初期化する。

3. countが10以上なら「READY」、
   10未満なら「WAIT」と表示する。

4. main関数内で処理を実行する。

実行結果
READY



解答：
#include <stdio.h>

typedef unsigned int MeasurementCount;

int main(void)
{
  MeasurementCount count = 20;

  if (count >= 10) {
    printf("READY");
  } else {
    printf("WAIT");
  }

  return 0;
}



=================================================================================================



【Level 2・問題2】

温度を判定するプログラムを作成してください。

条件
1. typedefを使用して、intに
   Temperatureという型名を付ける。

2. Temperature型の引数tempを受け取る
   void型の関数check_temperatureを作成する。

3. check_temperature関数では、
   温度が30以上なら「HOT」、
   30未満なら「NORMAL」と表示する。

4. main関数でTemperature型の変数tempを宣言し、
   35で初期化する。

5. main関数からcheck_temperature関数を呼び出す。

実行結果
HOT



解答：
#include <stdio.h>

typedef int Temperature;

void check_temperature(Temperature temp);

int main(void)
{
  Temperature temp = 35;

  check_temperature(temp);

  return 0;
}

void check_temperature(Temperature temp)
{
  if (temp >= 30) {
    printf("HOT");
  }else {
    printf("NORMAL");
  }
}



===============================================================================================================




【Level 2・問題3】

モーターの回転速度を判定するプログラムを作成してください。

条件
1. typedefを使用して、unsigned intに
   MotorSpeedという型名を付ける。

2. MotorSpeed型の引数speedを受け取る
   void型の関数check_speedを作成する。

3. check_speed関数では、以下の条件で表示する。

   0          → STOP
   1～100     → NORMAL
   101以上    → HIGH

4. main関数でMotorSpeed型の変数speedを宣言し、
   120で初期化する。

5. main関数からcheck_speed関数を呼び出す。

実行結果
HIGH



解答：
#include <stdio.h>

typedef unsigned int MotorSpeed;

void check_speed(MotorSpeed speed);

int main(void)
{
  MotorSpeed speed = 120;

  check_speed(speed);

  return 0;
}

void check_speed(MotorSpeed speed)
{
  if (speed < 1) {
    printf("STOP");
  } else if (speed < 101) {
    printf("NORMAL");
  } else {
    printf("HIGH");
  }
}




==================================================================================================



【Level 3・問題1】

装置の動作状態を管理するプログラムを作成してください。

条件
1. enumとtypedefを組み合わせて、DeviceStatusという型名を定義する。

2. 以下の3つの列挙定数を用意する。
   STATUS_IDLE
   STATUS_ACTIVE
   STATUS_ERROR

3. DeviceStatus型の引数statusを受け取るvoid型の関数check_statusを作成する。

4. check_status関数では、状態に応じて以下を表示する。
   STATUS_IDLE   → IDLE
   STATUS_ACTIVE → ACTIVE
   STATUS_ERROR  → ERROR

5. main関数でDeviceStatus型の変数statusを宣言し、STATUS_ERRORで初期化する。

6. main関数からcheck_status関数を呼び出す。

実行結果
ERROR



解答：
#include <stdio.h>

typedef enum {
  STATUS_IDLE,
  STATUS_ACTIVE,
  STATUS_ERROR
} DeviceStatus;

void check_status(DeviceStatus status);

int main(void)
{
  DeviceStatus status = STATUS_ERROR;

  check_status(status);

  return 0;
}

void check_status(DeviceStatus status)
{
  switch(status) {

    case STATUS_IDLE:
        printf("IDLE");
        break;

    case STATUS_ACTIVE:
        printf("ACTIVE");
        break;

    case STATUS_ERROR:
        printf("ERROR");
        break;
  }
}



====================================================================================================================



【Level 3・問題2】

車体の走行モードを管理するプログラムを作成してください。

条件

1. enumとtypedefを組み合わせて、
   DriveModeという型名を定義する。

2. 以下の4つの列挙定数を用意する。

   DRIVE_STOP
   DRIVE_MANUAL
   DRIVE_AUTO
   DRIVE_ERROR

3. DriveMode型の引数modeを受け取る
   void型の関数control_driveを作成する。

4. control_drive関数では、状態に応じて
   以下の文字列を表示する。

   DRIVE_STOP   → STOP
   DRIVE_MANUAL → MANUAL
   DRIVE_AUTO   → AUTO
   DRIVE_ERROR  → ERROR

5. main関数でDriveMode型の変数modeを宣言し、
   DRIVE_AUTOで初期化する。

6. main関数からcontrol_drive関数を呼び出す。

実行結果
AUTO




解答：
#include <stdio.h>

typedef enum {
  DRIVE_STOP,
  DRIVE_MANUAL,
  DRIVE_AUTO,
  DRIVE_ERROR
} DriveMode;

void control_drive(DriveMode mode);

int main(void)
{
  DriveMode mode = DRIVE_AUTO;

  control_drive(mode);

  return 0;
}

void control_drive(DriveMode mode)
{
  switch(mode){

    case DRIVE_STOP:
        printf("STOP");
        break;

    case DRIVE_MANUAL:
        printf("MANUAL");
        break;

    case DRIVE_AUTO:
        printf("AUTO");
        break;

    case DRIVE_ERROR:
        printf("ERROR");
        break;
  }
}




====================================================================================================




【Level 3・問題3】

障害物との距離に応じて、車体の動作を
切り替えるプログラムを作成してください。

条件

1. typedef enumを使用して、
   VehicleModeという型名を定義する。

2. 以下の3つの列挙定数を用意する。

   MODE_FORWARD
   MODE_STOP
   MODE_ERROR

3. main関数でint型の変数distanceを宣言し、
   15で初期化する。

4. VehicleMode型の変数modeを宣言する。

5. distanceの値によってmodeを設定する。

   0未満       → MODE_ERROR
   0以上20以下 → MODE_STOP
   21以上      → MODE_FORWARD

6. VehicleMode型の引数modeを受け取る
   void型の関数control_vehicleを作成する。

7. control_vehicle関数で以下を表示する。

   MODE_FORWARD → FORWARD
   MODE_STOP    → STOP
   MODE_ERROR   → SENSOR ERROR

8. main関数からcontrol_vehicle関数を呼び出す。

実行結果
STOP



解答：
#include <stdio.h>

typedef enum {
  MODE_FORWARD,
  MODE_STOP,
  MODE_ERROR
}VehicleMode;

void control_vehicle(VehicleMode mode);

int main(void)
{
  int distance = 15;

  VehicleMode mode;

  if (distance < 0) {
    mode = MODE_ERROR;
  } else if (distance <= 20) {
    mode = MODE_STOP;
  } else {
    mode = MODE_FORWARD;
  }

  control_vehicle(mode);

  return 0;
}

void control_vehicle(VehicleMode mode)
{
  switch(mode){

    case MODE_FORWARD:
        printf("FORWARD");
        break;

    case MODE_STOP:
        printf("STOP");
        break;

    case MODE_ERROR:
        printf("SENSOR ERROR");
        break;
  }
}




================================================================================================================



【Level 3・問題4】

バッテリー残量とセンサーの状態に応じて、
車体の動作モードを決定するプログラムを作成してください。

条件

1. typedef enumを使用して、
   SystemModeという型名を定義する。

2. 以下の4つの列挙定数を用意する。

   SYSTEM_READY
   SYSTEM_LOW_BATTERY
   SYSTEM_STOP
   SYSTEM_ERROR

3. main関数で以下の変数を宣言・初期化する。

   int battery = 15;
   int sensor_error = 0;

4. SystemMode型の変数modeを宣言する。

5. 以下の優先順位でmodeを決定する。

   最優先：sensor_errorが1ならSYSTEM_ERROR
   次：batteryが0ならSYSTEM_STOP
   次：batteryが1以上20以下ならSYSTEM_LOW_BATTERY
   それ以外：SYSTEM_READY

6. SystemMode型の引数modeを受け取る
   void型の関数display_modeを作成する。

7. display_mode関数では、以下を表示する。

   SYSTEM_READY       → READY
   SYSTEM_LOW_BATTERY → LOW BATTERY
   SYSTEM_STOP        → STOP
   SYSTEM_ERROR       → ERROR

8. main関数からdisplay_mode関数を呼び出す。

実行結果
LOW BATTERY




解答：
#include <stdio.h>

typedef enum {
  SYSTEM_READY,
  SYSTEM_LOW_BATTERY,
  SYSTEM_STOP,
  SYSTEM_ERROR
}SystemMode;

void display_mode(SystemMode mode);

int main(void)
{
  int battery = 15;
  int sensor_error = 0;
  SystemMode mode;

  if (sensor_error == 1) {
    mode = SYSTEM_ERROR;
  } else if (battery == 0) {
    mode = SYSTEM_STOP;
  } else if (battery >= 1 && battery <= 20) {
    mode = SYSTEM_LOW_BATTERY;
  } else {
    mode = SYSTEM_READY;
  }

  display_mode(mode);

  return 0;
}

void display_mode(SystemMode mode)
{
  switch(mode) {
    
    case SYSTEM_READY:
        printf("READY");
        break;

    case SYSTEM_LOW_BATTERY:
        printf("LOW BATTERY");
        break;

    case SYSTEM_STOP:
        printf("STOP");
        break;

    case SYSTEM_ERROR:
        printf("ERROR");
        break;
  }
}



===================================================================================================================



【C-Day30 総合最終問題】

車体のセンサー情報とバッテリー残量から、
走行モードを決定するプログラムを作成してください。

■ 条件1：構造体

typedef structを使用して、VehicleData型を定義する。

メンバー
・int distance_cm：障害物までの距離
・int battery_percent：バッテリー残量（%）
・int sensor_error：センサー異常（0=正常、1=異常）

■ 条件2：列挙型

typedef enumを使用して、DriveMode型を定義する。

列挙定数
・DRIVE_FORWARD
・DRIVE_SLOW
・DRIVE_STOP
・DRIVE_ERROR

■ 条件3：走行モードの判定関数

VehicleData型の引数dataを受け取り、
DriveMode型の値を返す関数decide_modeを作成する。

判定の優先順位

1. sensor_errorが1ならDRIVE_ERROR
2. distance_cmが負の値、または
   battery_percentが0未満か100超ならDRIVE_ERROR
3. battery_percentが15以下ならDRIVE_STOP
4. distance_cmが20以下ならDRIVE_STOP
5. distance_cmが21以上50以下ならDRIVE_SLOW
6. それ以外はDRIVE_FORWARD

■ 条件4：表示関数

DriveMode型の引数modeを受け取る
void型の関数display_modeを作成する。

表示内容
DRIVE_FORWARD → FORWARD
DRIVE_SLOW    → SLOW
DRIVE_STOP    → STOP
DRIVE_ERROR   → ERROR

■ 条件5：main関数

1. VehicleData型の変数dataを宣言する。
2. 以下の値で初期化する。
   distance_cm = 35
   battery_percent = 60
   sensor_error = 0
3. decide_mode関数を呼び出して走行モードを取得する。
4. 取得した走行モードをdisplay_mode関数に渡して表示する。

■ 実行結果

SLOW

■ 動作確認

完成後、次の6パターンを確認する。

距離 / バッテリー / センサー異常 / 期待結果
35 / 60 / 0 / SLOW
10 / 60 / 0 / STOP
100 / 60 / 0 / FORWARD
100 / 5 / 0 / STOP
100 / 60 / 1 / ERROR
-1 / 60 / 0 / ERROR

■ 提出内容

1. 作成したC言語コード
2. 6パターンの動作確認結果
3. struct、typedef enum、decide_mode、
   display_modeの役割を自分の言葉で説明する。




解答：
#include <stdio.h>

typedef struct {
  int distance_cm;
  int battery_percent;
  int sensor_error;
} VehicleData;

typedef enum {
  DRIVE_FORWARD,
  DRIVE_SLOW,
  DRIVE_STOP,
  DRIVE_ERROR
} DriveMode;


int decide_mode(VehicleData data);


void display_mode(DriveMode mode);


int main(void)
{
  VehicleDate data = {35, 60, 0};

  mode = decide_mode(data);

  display_mode(mode);

  return 0;
}


int decide_mode(VehicleData data)
{
  DriveMode mode;

  if (data.sensor_error == 1) {
    mode = DRIVE_ERROR;
  } else if (data.distance_cm < 0 || (data.battery_percent < 0 && data.battery_percent > 100)) {
    mode = DRIVE_ERROR;
  } else if (data.battery_percent <= 15) {
    mode = DRIVE_STOP;
  } else if (data.distance_cm <= 20) {
    mode = DRIVE_STOP;
  } else if (distance_cm >= 21 && distance_cm <= 50) {
    mode = DRIVE_SLOW;
  } else {
    mode = DRIVE_FORWARD;
  }

  return mode;
}


void display_mode(DriveMode mode)
{
  switch(mode) {

    case DRIVE_FORWARD:
        printf("FORWARD");
        break;

    case DRIVE_SLOW:
        printf("SLOW");
        break;

    case DRIVE_STOP:
        printf("STOP");
        break;

    case DRIVE_ERROR:
        printf("ERROR");
        break;
  }
}

------------------------------------------------------


#include <stdio.h>

typedef struct {
  int distance_cm;
  int battery_percent;
  int sensor_error;
} VehicleData;

typedef enum {
  DRIVE_FORWARD,
  DRIVE_SLOW,
  DRIVE_STOP,
  DRIVE_ERROR
} DriveMode;


DriveMode decide_mode(VehicleData data);


void display_mode(DriveMode mode);


int main(void)
{
  VehicleData data = {-1, 60, 0};

  DriveMode mode = decide_mode(data);

  display_mode(mode);

  return 0;
}


DriveMode decide_mode(VehicleData data)
{
  DriveMode mode;

  if (data.sensor_error == 1) {
    mode = DRIVE_ERROR;
  } else if (data.distance_cm < 0 || (data.battery_percent < 0 || data.battery_percent > 100)) {
    mode = DRIVE_ERROR;
  } else if (data.battery_percent <= 15) {
    mode = DRIVE_STOP;
  } else if (data.distance_cm <= 20) {
    mode = DRIVE_STOP;
  } else if (data.distance_cm >= 21 && data.distance_cm <= 50) {
    mode = DRIVE_SLOW;
  } else {
    mode = DRIVE_FORWARD;
  }

  return mode;
}


void display_mode(DriveMode mode)
{
  switch(mode) {

    case DRIVE_FORWARD:
        printf("FORWARD");
        break;

    case DRIVE_SLOW:
        printf("SLOW");
        break;

    case DRIVE_STOP:
        printf("STOP");
        break;

    case DRIVE_ERROR:
        printf("ERROR");
        break;
  }
}