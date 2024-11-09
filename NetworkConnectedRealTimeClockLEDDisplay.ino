/*the current date and time retrieved from an NTP server on the Internet (pool.ntp.org).
 * Download the NTPClient library (https://github.com/arduino-libraries/NTPClient) through the Library Manager
 * Change the WiFi credentials in the arduino_secrets.h file to match your WiFi network
 */
// Include the RTC library
#include "RTC.h"
//Include the NTP library
#include <NTPClient.h>

#if defined(ARDUINO_PORTENTA_C33)
#include <WiFiC3.h>
#elif defined(ARDUINO_UNOWIFIR4)
#include <WiFiS3.h>
#endif

#include <WiFiUdp.h>
//have another tab names "arduino_secrets.h" in which;
//#define SECRET_SSID "" //network name
//#define SECRET_PASS "" //network password
#include "arduino_secrets.h" 

#include "Arduino_LED_Matrix.h"
//have another tab named "LedMatrixNumbers.h" as obtained from https://projecthub.arduino.cc/pavletsotskolauri/real-time-clock-on-led-matrix-of-arduino-uno-r4-01075e
#include "LedMatrixNumbers.h"

//please enter your sensitive data in the Secret tab/arduino_secrets.h
char ssid[] = SECRET_SSID;        // your network SSID (name)
char pass[] = SECRET_PASS;    // your network password (use for WPA, or use as key for WEP)

int wifiStatus = WL_IDLE_STATUS;
WiFiUDP Udp; // A UDP instance to let us send and receive packets over UDP
NTPClient timeClient(Udp);

void printWifiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your board's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}

void connectToWiFi(){
  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true);
  }

  String fv = WiFi.firmwareVersion();
  if (fv < WIFI_FIRMWARE_LATEST_VERSION) {
    Serial.println("Please upgrade the firmware");
  }

  // attempt to connect to WiFi network:
  while (wifiStatus != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    wifiStatus = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }

  Serial.println("Connected to WiFi");
  printWifiStatus();
}

ArduinoLEDMatrix matrix;
#define PROGRAM_LOAD_DELAY 6

void displayClock(int time, int shiftRow, int shiftCol)
{
  switch (time)
  {
    case 0:
      zeroSmall(shiftRow, shiftCol);
      break;
    case 1: 
      oneSmall(shiftRow, shiftCol);
      break;
    case 2: 
      twoSmall(shiftRow, shiftCol);
      break;
    case 3: 
      threeSmall(shiftRow, shiftCol);
      break;
    case 4: 
      fourSmall(shiftRow, shiftCol);
      break;
    case 5: 
      fiveSmall(shiftRow, shiftCol);
      break;
    case 6: 
      sixSmall(shiftRow, shiftCol);
      break;
    case 7: 
      sevenSmall(shiftRow, shiftCol);
      break;
    case 8: 
      eightSmall(shiftRow, shiftCol);
      break;
    case 9: 
      nineSmall(shiftRow, shiftCol);
      break;
    default: clear();
  }
  matrix.renderBitmap(frame, 8, 12);
}


void secondsIndicator(int second)
{
  for(int i = 0; i < 12; i++)
  {
        frame[7][i] = 0;
  }

  if (second >= 5)  frame[7][0]    = 1;
  if (second >= 10) frame[7][1]    = 1;
  if (second >= 15) frame[7][2]    = 1;
  if (second >= 20) frame[7][3]    = 1;
  if (second >= 25) frame[7][4]    = 1;
  if (second >= 30) frame[7][5]    = 1;
  if (second >= 35) frame[7][6]    = 1;
  if (second >= 40) frame[7][7]    = 1;
  if (second >= 45) frame[7][8]    = 1;
  if (second >= 50) frame[7][9]    = 1;
  if (second >= 55) frame[7][10]   = 1;
  if (second >= 59) frame[7][11]   = 1;

  matrix.renderBitmap(frame, 8, 12);
}



void setup(){
  Serial.begin(9600);
  matrix.begin();
  
  Serial.begin(9600);
  while (!Serial);

  connectToWiFi();
  RTC.begin();
  Serial.println("\nStarting connection to server...");
  timeClient.begin();
  timeClient.update();

  // Get the current date and time from an NTP server and convert
  // You may change the time zone offset to your local one by adding + (timeZoneOffsetHours * [x in seconds e.g. 3600]) to the unixTime.
  auto timeZoneOffsetHours = 2;
  auto unixTime = timeClient.getEpochTime();
  Serial.print("Unix time = ");
  Serial.println(unixTime);
  RTCTime timeToSet = RTCTime(unixTime);
  RTC.setTime(timeToSet);

  // Retrieve the date and time from the RTC and print them
  RTCTime currentTime;
  RTC.getTime(currentTime); 
  Serial.println("The RTC was just set to: " + String(currentTime));
}

void loop() {
 
  RTCTime currentTime;
  RTC.getTime(currentTime); 
 
  clear();
  // Hour Display
  displayClock(currentTime.getHour() / 10, 0, 0);
  displayClock(currentTime.getHour() % 10, 0, 3);
  // Minutes Display
  displayClock(currentTime.getMinutes() / 10, 2, 6);
  displayClock(currentTime.getMinutes() % 10, 2, 9);

  // Seconds Display
  // displayClock(currentTime.getSeconds()/10, 2, 6);
  // displayClock(currentTime.getSeconds()%10, 2, 9);

  secondsIndicator(currentTime.getSeconds());


  delay(1000);
}
