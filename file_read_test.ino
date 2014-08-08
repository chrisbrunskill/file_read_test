#include <Bridge.h>
#include <FileIO.h>

void setup() {
  Bridge.begin();
  FileSystem.begin();
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
char i=1;
File f = FileSystem.open("/mnt/sd/arduino/test.txt");
  if(f) {
    while(i>0) {
    i = f.read();
    Serial.println(i);
    }
  }
}
