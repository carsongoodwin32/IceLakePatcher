// IceLakePatcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <shlobj_core.h>
using namespace std;

void installPatch(bool inst) {
    if (inst) {
        ShellExecuteA(NULL, "open", "cmd.exe", "/c setx OPENSSL_ia32cap \"~0x200000200000000\" /M", NULL, SW_SHOWNORMAL);
    }
    else {
        ShellExecuteA(NULL, "open", "cmd.exe", "/c setx OPENSSL_ia32cap \"\" /M", NULL, SW_SHOWNORMAL);
    }
}



int main()
{
    int selection;
    if (IsUserAnAdmin() == 0) {
       cout << "Please Run this Application as an Administrator and Try Again!";
       exit(0);
    }
    
    cout << "Ice Lake Patcher v0.1a\n" << "\nPlease Select an Option:\n" << "1. Install Patch\n" << "2. Uninstall Patch\n" << "3. Exit\n" << "\n";
    cout << ">";
    cin >> selection;

    switch (selection) {
    case 1:
        cout << "\nInstalling Patch!\n";
        Sleep(1000);
        installPatch(true);
        cout << "Done!\n";
        Sleep(1000);
        cout << "Exiting...\n";
        Sleep(500);
        exit(0);
        break;
    case 2:
        cout << "\nUninstalling Patch!\n";
        Sleep(1000);
        installPatch(false);
        cout << "Done!\n";
        Sleep(1000);
        cout << "Exiting...\n";
        Sleep(500);
        exit(0);
        break;
    case 3:
        Sleep(1000);
        cout << "\nExiting...\n";
        Sleep(500);
        exit(0);
        break;
    default:
        cout << "\nInvalid Argument! Terminating.\n";
        Sleep(1000);
        exit(0);
    }

}

