// demo of it working! you only need to include /include/ in your project!

#include <iostream>
#include <Windows.h>
#include "include/tiq.hpp"

int main() {
    TIQ::window flash = TIQ::findWindow(L"flashplayer_32_sa.exe", L"Adobe Flash Player 32");
    DWORD_PTR address = TIQ::followPointerPath(flash, TIQ::offsets::FL32SA_OFFSETS);
    int scene = TIQ::getScene(address, flash);
    printf("%d", scene);
}