#include <vm/base.h>

void debugLog(string data)
{
    cout << "[*] " << data << endl;
}

int main()
{
    debugLog("Packing app....");
    debugLog("Makeing app res dir....");
    system("mkdir res");

    debugLog("Copying app.app....");
    system("cp app.app res");
    system("rm app.app");

    debugLog("Compileing frontrt packed src.....");
    system("g++ res/packsrc/*.cpp -o app");


    return 0;
}