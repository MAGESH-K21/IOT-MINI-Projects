#include<ESP8266WiFi.h>                          
#include<FirebaseESP8266.h>                  

#define wifi "Redmi"                               
#define password "12345678"
#define project "idr-sensor-b603e-default-rtdb.firebaseio.com"            
#define secret "noyXVS4dGVq0kohOcR6Fk1HPT92WL4eCymhx0rhP"
  
FirebaseData ldr_data;   
void setup(){
  Serial.begin(115200);                                       
  WiFi.begin(wifi,password);
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");}
  Firebase.begin(project,secret);
}
void loop()
{
int value = analogRead(A0);
Serial.println(value);              
Firebase.setInt(ldr_data,"ldr-sensor",value);
}
