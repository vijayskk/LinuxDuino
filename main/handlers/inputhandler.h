#include <string.h>
#include "commandHandler.h"
extern void handleInput(String input)
{
    String command;
    String argument;
    bool isArgument = false;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ' && !isArgument)
        {
            isArgument = true;
            i++;
        }
        if (isArgument)
        {
            argument += input[i];
        }
        else
        {
            command += input[i];
        }
    }
    handleCommands(command, argument);
}