#include "handlers/inputhandler.h"

String input;

void setup(){
  Serial.begin(115200);
}

void loop(){
  input = Serial.readString();
  while (input == "")
  {
    input = Serial.readString();
  }
  handleInput(input);
}