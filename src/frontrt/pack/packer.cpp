#include <vm/base.h>

void debugLog(string data)
{
    cout << "[*] " << data << endl;
}

int main()
{
    debugLog("Packing app....");
    debugLog("Makeing app res dir....");
    system("mkdir reso");

    debugLog("Copying app.app....");
    system("cp app.app reso");
    system("rm app.app");

    debugLog("Compileing frontrt packed src.....");
    system("g++ res/packsrc/*.cpp res/frontrt/base.cpp -o app -I res/frontrt/include");


    return 0;
}