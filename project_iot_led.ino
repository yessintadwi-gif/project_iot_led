int led_merah = 6;



void setup() {
  pinMode(led_merah, OUTPUT);
  


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

    


    


    // 4 = semua mati
    else if (perintah == '4') {
      digitalWrite(led_merah, LOW);
      

    }

    // 5 = semua nyala
    else if (perintah == '5') {
      digitalWrite(led_merah, HIGH);
      
      
    }
  }

}