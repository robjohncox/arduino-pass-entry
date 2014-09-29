int ENTRY_PIN = 2;
String PASSWORD = "<my password>";

void setup() {
  setup_pin(ENTRY_PIN);
  Keyboard.begin();
}

void setup_pin(int pin) {
  pinMode(pin, INPUT);
  digitalWrite(pin, HIGH);
}
  
void loop() {
  test_for_write_password(ENTRY_PIN, PASSWORD);
}

void test_for_write_password(int pin, String password) {
  if (!digitalRead(pin)) {
    Keyboard.println(password);
    while(!digitalRead(pin)) {
      delay(100);
    }
  }
}
