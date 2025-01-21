// Keyboard.h

void setupKeyboard(){
  pinMode(COL_1, OUTPUT);
  pinMode(COL_2, OUTPUT);
  pinMode(ROW_1, INPUT_PULLUP);
  pinMode(ROW_2, INPUT_PULLUP);
  pinMode(ROW_3, INPUT_PULLUP);
  pinMode(ROW_4, INPUT_PULLUP);    
}

uint8_t _countKeyboard = 0;

uint8_t readKeyboard(){

  uint8_t sel = (_countKeyboard % 2)*4; 
  
  digitalWrite(COL_1, sel);
  digitalWrite(COL_2, !sel);


  if(!digitalRead(ROW_1)){
    return 1 + (sel);  
  }

  if(!digitalRead(ROW_2)){
    return 2 + (sel);  
  }

  if(!digitalRead(ROW_3)){
    return 3 + (sel);  
  }

  if(!digitalRead(ROW_4)){
    return 4 + (sel);  
  }

  _countKeyboard++;

  return 0;
}
