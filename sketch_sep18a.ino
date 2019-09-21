void setup*(){
  pinmode(5,output);
  pinmode(8,output0;
  pinmode(10,output);
  pinmode(13,output);
  
}

void lood(){
  digitalwrite(13,HIGH);
  delay(1000);
  digitwrite(13,LOW);
  digitwrite(10,HIGH);
  delay(1000);
  digitwrite(10,LOW);
  digitwrite(8,HIGH);
  delay(1000);
  digitwrite(8,LOW);
  digitwrite(5,HIGH);
  delay(1000);
  digitwrite(5,LOW);
}
