#include <Arduino.h>
#define TX_PIN 4    // GPIO10 (U1TXD)
#define RX_PIN 5    // GPIO9 (U1RXD)

void setup() {
    Serial.begin(115200);
    Serial1.setPins(RX_PIN, TX_PIN, -1, -1); // remark pin 
    Serial1.begin(9600);
    Serial2.begin(9600, SERIAL_8N1, 16, 17);
    Serial.println("UART1 ready on GPIO9 (RX) and GPIO10 (TX)");
}

void loop() {
    Serial.println("Hello from ESP32 UART0!");
    Serial1.println("Hello from ESP32 UART1!");
    Serial2.println("Hello from ESP32 UART2!");
    delay(1000);
}
