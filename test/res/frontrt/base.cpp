#include <vm/base.h>

// C O P Y R I G H T  2 0 2 2  (c) C O N N O R  W A L S H

bool frtVM::lang::checkFunc(string line, string func)
{
    bool isFunc = false;
    
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == func[i])
            isFunc = true;
        else
            return false;
    }

    return isFunc;
}

string frtVM::lang::getArgs(string line, string func)
{
    string arg;

    for (int i = 0; i < func.length(); i++)
    {
        arg = arg + func[i];
    }

    return arg;
}

void frtVM::vm::mem::setMemory(char byte, int loc, frtVM::vm::mem::memory *memory)
{
    memory->memory[loc] = byte;
}

void frtVM::vm::vmPutInMem(ifstream &file, frtVM::vm::mem::memory *memory)
{
    int cpos = 0;
    string line;
     
    while (getline(file, line))
    {
        frtVM::vm::mem::setMemory(line[0], cpos, memory);
        cpos++;
        for (int i = 1; i < line.length(); i++)
        {
            frtVM::vm::mem::setMemory(line[i], cpos, memory);
            cpos++;
        }
        frtVM::vm::mem::setMemory('\\', cpos, memory);
        cpos++;
    }
}

void frtVM::vm::execute(frtVM::vm::mem::memory *memory)
{
    char instruction;
    string arg;

    int i = 0;

    for (i = 0; i < 255; i++)
    {
        instruction = memory->memory[i];
        arg = "";

        if (instruction == '~')
        {
            break;
        }

        int j = 0;

        while (true)
        {
            if (memory->memory[i + 1 + j] == '\\')
                break;
            arg = arg + memory->memory[i + 1 + j];
            j++;
         }
        j++;

        i += j;

        if (instruction == '0')
            cout << arg << endl;
    }
}