#include "handleEcho.h"
#include "handleTouch.h"
extern void handleCommands(String command,String argument){
    if (command.compareTo("echo") == 0)
    {
        handleEchos(argument);
    }
    if (command.compareTo("touch") == 0)
    {
        handleTouch(argument);
    }
    if (command.compareTo("ls") == 0)
    {
        handleLS();
    }
}