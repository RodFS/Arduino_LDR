//Definição das portas para cada componente
#define pinLDR A0
#define pinLED 7

//Defição do nível de luz em que a lampada se acende
#define nivelLuz 200

void setup() {

    //Indicação do número da porta digital do LED
    //E configurando-a como saída (OUTPUT)
    pinMode(pinLED, OUTPUT);

    //Indicação da velocidade em que os dados 
    //serão apresentados no monitor Serial
    Serial.begin(9600);

}

void loop() {

    //Retorno dos valores de luz do ambiente
    int valorLDR = analogRead(pinLDR);

    //Condições para o LED acender

    if (valorLDR < nivelLuz) { //Luz ligada
        digitalWrite(pinLED, HIGH);
        Serial.print("| Quantidade de luz do ambiente: ");
        Serial.print(valorLDR);
        Serial.println("| Status da luz: LIGADO |");
    } else { //Luz desligada
        digitalWrite(pinLED, LOW);
        Serial.print("| Quantidade de luz do ambiente: ");
        Serial.print(valorLDR);
        Serial.println("| Status da luz: DESLIGADO |");
    }
}