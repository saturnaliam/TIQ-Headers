#pragma once
#include <Windows.h>

namespace TIQ {
    struct window {
        HWND windowHandle;
        DWORD PID;
        HANDLE processHandle;
        DWORD_PTR baseAddress;
    };
    window findWindow(wchar_t* executableName, wchar_t* windowTitle);
    
    uintptr_t getModuleBase(DWORD PID, const HWND windowHandle, wchar_t* executableName);
}