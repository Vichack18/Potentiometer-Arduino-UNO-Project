 int pote=A1;
 int leer=0; // espacio de memeoria que vale inicialmente 0 //

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //analogRead lo que hace es leer el pin//
 leer=analogRead(pote);  //analog hace refer a un pin analogico, si fuese un pin digital ( Ej: 10 )seria digitalRead //
    // Cuando es digitalRead no tenemos una cantidad de valores mostrados, solo muestra dos estados, 1 y 0 //

 // Ahora tenemos que guardar lo que esta leyendo la func en el analogico 1 (pote), lo hacemos con la v. leer //
 Serial.println (leer); //Nos muestra el valor contenido en leer, que es lo leido en el pin A1 //
 delay(2500);

}
