
#define REMOTEXY_MODE__SOFTSERIAL
#include <SoftwareSerial.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL_RX 0
#define REMOTEXY_SERIAL_TX 1
#define REMOTEXY_SERIAL_SPEED 9600


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,5,0,0,0,116,0,6,5,0,
  4,32,6,11,11,46,2,4,32,26,
  11,11,46,2,4,32,46,11,11,46,
  2,4,32,66,11,11,46,2,4,32,
  84,11,11,46,2,129,0,7,10,8,
  6,11,77,49,0,129,0,28,10,8,
  6,11,77,50,0,129,0,47,10,8,
  6,11,77,51,0,129,0,67,10,8,
  6,11,77,52,0,129,0,85,10,8,
  6,11,77,53,0,129,0,68,59,29,
  3,11,58,41,77,65,68,69,32,196,
  176,78,32,84,195,156,82,75,196,176,
  89,69,0 };
  

struct {

    
  int8_t m1; 
  int8_t m2;  
  int8_t m3;
  int8_t m4; 
  int8_t m5; 
  #define in1 2
  #define in2 3
  
  #define in3  4
  #define in4  5
  
  #define in5  6
  #define in6  7
  
  #define in7  8
  #define in8  9
  
  #define in9  11
  #define in10  12
  
  
        

    
  uint8_t connect_flag; 

} RemoteXY;
#pragma pack(pop)




void setup() 
{
  RemoteXY_Init (); 
 
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

 RemoteXY.m1=50;
 RemoteXY.m2=50;
 RemoteXY.m3=50;
 RemoteXY.m4=50;
 RemoteXY.m5=50;

}

void loop() 
{ 
  RemoteXY_Handler ();
if(RemoteXY.m1==100)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
}
if(RemoteXY.m1==-100)
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
}
if(RemoteXY.m2==100)
{
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
 if(RemoteXY.m2==-100)
{
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
if(RemoteXY.m3==100)
{
  digitalWrite(in5,HIGH);
  digitalWrite(in6,LOW);
}
if(RemoteXY.m3==-100)
{
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
}
if(RemoteXY.m4==100)
{
  digitalWrite(in7,HIGH);
  digitalWrite(in8,LOW);
}
 if(RemoteXY.m4==-100)
{
  digitalWrite(in7,LOW);
  digitalWrite(in8,HIGH);
}
if(RemoteXY.m5==100)
{
  digitalWrite(in9,HIGH);
  digitalWrite(in10,LOW);
}
 if(RemoteXY.m5==-100)
{
  digitalWrite(in9,LOW);
  digitalWrite(in10,HIGH);
}
else
{
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   digitalWrite(in3,LOW);
   digitalWrite(in4,LOW);
   digitalWrite(in5,LOW);
   digitalWrite(in6,LOW);
   digitalWrite(in7,LOW);
   digitalWrite(in8,LOW);
   digitalWrite(in9,LOW);
   digitalWrite(in10,LOW);
}
}
