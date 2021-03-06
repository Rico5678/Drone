////////////////////////////////////////
//gyro variables////////////////////////
////////////////////////////////////////
int gyro_add = 0x6B;
int gyro_start_add = 0x20;    //address for turning gyro to normal mode
int gyro_start_add2 = 0x23;   //address for setting range
int gyro_xaddL = 0x28;
int gyro_xaddH = 0x29;
int gyro_yaddL = 0x2A;
int gyro_yaddH = 0x2B;
int gyro_zaddL = 0x2C;
int gyro_zaddH = 0x2D;
int gyro_xH;
int gyro_xL;
int gyro_x;
float gyro_valx;
int gyro_yH;
int gyro_yL;
int gyro_y;
float gyro_valy;
int gyro_zH;
int gyro_zL;
int gyro_z;
float gyro_valz;
////////////////////////////////////////
//accelerometer variables///////////////
////////////////////////////////////////
int accel_add = 0x19;
int accel_start_add = 0x20;   //address for turning accelerometer on
int accel_start_add2 = 0x23;  //sets range of accelerometer
int accel_xaddL = 0x28;
int accel_xaddH = 0x29;
int accel_yaddL = 0x2A;
int accel_yaddH = 0x2B;
int accel_zaddL = 0x2C;
int accel_zaddH = 0x2D;
int accel_xH;
int accel_xL;
int accel_x;
float accel_valx;
int accel_yH;
int accel_yL;
int accel_y;
float accel_valy;
int accel_zH;
int accel_zL;
int accel_z;
float accel_valz;
////////////////////////////////////////
//compass variables/////////////////////
////////////////////////////////////////
int comp_add = 0x1E;
int comp_start_add = 0x01;    //address for setting compass range
int comp_start_add2 = 0x02;   //address for turning to normal mode
int comp_start_add3 = 0x00;
int comp_xaddL = 0x04;
int comp_xaddH = 0x03;
int comp_yaddL = 0x08;
int comp_yaddH = 0x07;
int comp_zaddL = 0x06;
int comp_zaddH = 0x05;
int comp_xH;
int comp_xL;
int comp_x;
float comp_valx;
int comp_yH;
int comp_yL;
int comp_y;
float comp_valy;
int comp_zH;
int comp_zL;
int comp_z;
float comp_valz;
////////////////////////////////////////
//altitude variables////////////////////
////////////////////////////////////////
int alt_add = 0x77;
int alt_tempadd = 0x2E;
int alt_presadd = 0x34;
long int AC1;
long int AC2;
long int AC3;
long int AC4;
long int AC5;
long int AC6;
long int BB1;
long int BB2;
long int MB;
long int MC;
long int MD;
float altitude=0;

//////////////////////////////////////////////////////////////
//complementary filter variables//////////////////////////////
//////////////////////////////////////////////////////////////
float T[] = {0, 0};
float dtime;
float anglex;
float gyro_anglex;
float gyro_angley;
float gyro_anglez;

float final_anglex=0;
float final_angley=0;
float final_anglez=0;

float gyro_Rx;
float gyro_Ry;
float gyro_Rz;

float Rx=0;
float Ry=0;
float Rz=0;

float comp_maxz;
float comp_minz;
float comp_maxy;
float comp_miny;
float comp_maxx;
float comp_minx;

double yaw;
double pitch;
double roll;

float Ax;
float Ay;
float Az;

float accel_totforce;
float accel_Rx;
float accel_Ry;
float accel_Rz;

float Ax_accel;
float Ay_accel;
float Az_accel;

float Ax_gyro;
float Ay_gyro;
float Az_gyro;

float comp_x2;
float comp_y2;
float comp_z2;
float Bfy;
float Bfx;

////////////////////////////////////////////////////////////////////////////
////////////////////////////////Serial read stuff///////////////////////////
////////////////////////////////////////////////////////////////////////////
String command;
String svalue;
float value = 1000;
int spacelocation;
String incomingByte;
int value2 = 0;

////////////////////////////////////////////////////////////////////////////
////////////////////////////////ESC stuff///////////////////////////////////
////////////////////////////////////////////////////////////////////////////

#define ESC1pin 10
#define ESC2pin 3
#define ESC3pin 11
#define ESC4pin 5
ServoTimer2 ESC1;
ServoTimer2 ESC2; 
ServoTimer2 ESC3; 
ServoTimer2 ESC4; 
//Servo ESC1;
//Servo ESC2;
//Servo ESC3;
//Servo ESC4; 
float ESC1_val;
float ESC2_val;
float ESC3_val;
float ESC4_val;

////////////////////////////////////////////////////////////////////////////
////////////////////////////////ESC2 no interrupt stuff/////////////////////
////////////////////////////////////////////////////////////////////////////
long loop_timer;
long esc_timer;
long timer_ESC1;
long timer_ESC2;
long timer_ESC3;
long timer_ESC4;

////////////////////////////////////////////////////
////Receiver variables//////////////////////////////
////////////////////////////////////////////////////

int ch1 = 6;
int ch2 = 7;
int ch3 = 8;
int ch4 = 9;
int pins[] = {6,7,8,9};
int pinlength = 4;
int rec[4] = {0, 0, 0, 0};
volatile byte i = 0;
volatile int pwm_value[4];
volatile int prev_time = 0;
uint8_t latest_interrupted_pin;
volatile int rec_speed[4];

long cal_timerstart;
long cal_timer;
long rec_cal[4] = {0, 0, 0, 0};
int rec_cal2[4] = {0, 0, 0, 0};
int pwm_corr[4];

////////////////////////////////////////////////////
///////////////////General Stuff////////////////////
////////////////////////////////////////////////////

int resetcount = 0;
long check;