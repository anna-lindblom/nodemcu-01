# Programmera ett enkelt blinkprogram för externa dioder

## Inledning
Här kommer jag visa en kort genomgång hur du gör ett enkelt blinkprogram för att få två externa dioder att lysa växelvis i två sekunder vardera. I exemplet används ett NodeMCU-kretskort med en ESP8266 mikrocontroller och koden skrivs i Arduino IDE.

## Vad är Arduido?
- Plattform för att bygga och programmera små elektroniska saker
- Tre delar, kretskort, program att skriva kod i (Arduino IDE) och ett programmeringsspråk
- Enkel för nybörjare
- Open source - fri att använda för vemsomhelst
- Används t.ex. till att tända och släcka lampor, läsa av sensorer
- Här används Arduinos program och språk för att programmera ett NodeMCU-kort

## Basfunktioner i Arduido
- Setup, funktion som körs en gång när kortet startar
- Loop, arbetet som sker och snurrar om och om och om igen

<img width="556" height="263" alt="Ny sketch i Arduido" src="https://github.com/user-attachments/assets/c0aece9f-9c70-46ac-9db5-fd568e364901" />

### Setup
```cpp
void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}
```

- ```pinMode(D5, OUTPUT);``` talar om vilken "pinne" på kortet det gäller, här D5, samt att det är en output (skickar ut information till dioden)
- ; markerar slutet på varje rad

### Loop
```cpp
void loop() {
  digitalWrite(D5, LOW);
  digitalWrite(D6, HIGH);
  delay(2000);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, LOW);
  delay(2000);
}
```

- ```digitalWrite``` är kommandot som får dioden att lysa, D5/D6 talar om vilken port och LOW/HIGH talar om vilken diod som släcks och vilken som tänds
- ```delay(2000);``` talar om att nästa kodrad ska fördröjas i två sekunder
