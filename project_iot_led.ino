int led_merah = 6;
int led_kuning = 7;
int led_hijau= 8;

void setup() {
  pinMode(led_merah, OUTPUT);
  pinMode(led_kuning, OUTPUT);
  pinMode(led_hijau, OUTPUT);

  Serial.begin(19200);
}

void loop() {
  if(Serial.available()>0) {
    char perintah = Serial.read();

    Serial.print("Menerima: ");
    Serial.println(perintah);

    // 1 = merah nyala
    if (perintah == '1') {
      digitalWrite(led_merah, HIGH);
    }

    // 2 = kuning nyala
    if (perintah == '2') {
      digitalWrite(led_kuning, HIGH);
    }

    // 3 = hijau nyala
    else if(perintah == '3') {
      digitalWrite(led_hijau, HIGH);
    }

    // 4 = semua mati
    else if (perintah == '4') {
      digitalWrite(led_merah, LOW);
      digitalWrite(led_kuning, LOW);
      digitalWrite(led_hijau, LOW);
    }

    // 5 = semua nyala
    else if (perintah == '5') {
      digitalWrite(led_merah, HIGH);
      digitalWrite(led_kuning, HIGH);
      digitalWrite(led_hijau, HIGH);
    }
  }

}
