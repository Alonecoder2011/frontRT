#include <vm/base.h>
#include "config.h"

int main()
{
    frtVM::vm::mem::memory memory;
    ifstream file("res/app.app");
    frtVM::vm::vmPutInMem(file, &memory);
    frtVM::vm::execute(&memory);

    return 0;
}