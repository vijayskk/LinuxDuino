#include "fsHandler.h"

extern void handleTouch(String filename){
    int res = createFile(filename);
    if (res == 0)
    {
        Serial.println("File "+ filename + " is created.");
    }else{
        Serial.println("Failed.");
    }
}

extern void handleLS(){
    printAllFileNames();
}
