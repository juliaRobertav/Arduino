/*******************************************************************************
*
*    Usando um LED RGB COMUM(TESTE)
*         Por Julia Roberta
*
*******************************************************************************/
 /*o modificador #const faz é “dizer” ao compilador que a variável (ou ponteiro) não pode ser alterado no decorrer do código. No entanto continua a ser uma variável e 
dependendo de onde seja usada pode ou não consumir memória RAM.*/
// define pinos de entrada e saída do Arduino 
const int R = 9;   // terminal Red (vermelho)
const int G = 10;  // terminal Green (verde)
const int B = 11;  // terminal Blue (azul)

void setup(){
// pin mode - definie entradas e saídas 
    pinMode(R, OUTPUT); 
    pinMode(G, OUTPUT); 
    pinMode(B, OUTPUT); 
}

void loop(){
    // VERMELHO PURO
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(1000);
    // VERDE PURO
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(1000);
    // AZUL PURO
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(1000);
}
