#include "MicMMS.h"

/*------------------- Data list -------------------*/
// MicMMS aaa("WiFi_name", "Password", "Mqtt_server", Mqtt_port,"/Department/Process/","Machine_number", 1, Serial1,"IP_Address","Gate_way","Subnet_mask");
/*-------------------------------------------------*/

MicMMS aaa("MIC_Iot", "Micdev@2024", "192.168.0.167", 1883,"/nht/gd/","ir01h", 1, Serial1,"192.168.0.100","192.168.0.1","255.255.255.0");
// MicMMS aaa("MIC_IIOT", "mic@admin", "192.168.1.104", 1883,"/Department/Process/","A01", 1, Serial1,"192.168.1.106","192.168.1.1","255.255.255.0");
// MicMMS aaa("MIC-IIoT-DEVICE", "natmms22", "10.128.16.120", 1883,"/Department/Process/","A01", 1, Serial1,"10.128.58.23","10.128.58.1","255.255.254.0");

void setup() {
  aaa.init();
  aaa.start();
}
  
void loop() {
  aaa.run();
}
