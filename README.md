# Programmera ett enkelt blinkprogram

## Inledning
Här kommer jag att gå igenom hur du kan programmera ett enkelt blinkprogram i Arduino.

## Setup och loop
- Två basfunktioner i Arduino
- Setup är som inställningarna och sker bara en gång
- Det som står inom {   } i loop snurrar om och om och om igen

## Exempel
'''cpp
void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}
'''

- '''pinMode(D5, OUTPUT);''' talar om att pinnen D5 är en output
- ; avslutar varje kommandorad

'''cpp
void loop() {
  digitalWrite(D5, LOW);
  digitalWrite(D6, HIGH);
  delay(2000);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, LOW);
  delay(2000);
}
'''
