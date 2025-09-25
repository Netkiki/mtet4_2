#include <Arduino.h>

// กำหนดขารีเลย์
const int relayPins[5] = {2, 3, 4, 5, 6};

void setup() {
  // ตั้งค่าขารีเลย์เป็น OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW); // ปิดรีเลย์เริ่มต้น
  }
}

void loop() {
  // ตัวอย่าง: เปิดรีเลย์ทีละตัว
  for (int i = 0; i < 5; i++) {
    digitalWrite(relayPins[i], HIGH); // เปิดรีเลย์
    delay(500);
    digitalWrite(relayPins[i], LOW);  // ปิดรีเลย์
    delay(500);
  }
}