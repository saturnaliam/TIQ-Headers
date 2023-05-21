// demo of it working! you only need to include /include/ in your project!

#include <iostream>
#include <Windows.h>
#include "include/tiq.hpp"

int main() {
    TIQ::window flash = TIQ::findWindow(L"flashplayer_32_sa.exe", L"Flash Player 32");
}