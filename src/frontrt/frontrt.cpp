#include <vm/base.h>

int main(int argc, char **argv)
{
    frtVM::vm::mem::memory memory;
    ifstream file("app.app");
    frtVM::vm::vmPutInMem(file, &memory);
    frtVM::vm::execute(&memory);

    return 0;
}
