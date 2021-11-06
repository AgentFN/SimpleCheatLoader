#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <Windows.h>
#pragma comment (lib, "urlmon.lib") ///

// github.com/brave1338 / Join https://discord.gg/J5EFYbuXGw for chairs!


void brave1() // load mappper 
{                                                                   // driver name here                                                 
    HRESULT ab = URLDownloadToFile(NULL, _T("driver download link"), _T("name.sys"), 0, NULL);
    // mapper name here
    HRESULT abc = URLDownloadToFile(NULL, _T("mapper download link"), _T("name.exe"), 0, NULL);
    system("start name.exe name.sys"); // mapper and driver name here (this is what starts mapper)
}


void brave2() // download + inject dll
{                                                                // injector name here
    HRESULT ab = URLDownloadToFile(NULL, _T("DLL DOWNLOAD LINK"), _T("name.dll"), 0, NULL);
                                                                     // injector name here
    HRESULT abc = URLDownloadToFile(NULL, _T("Injector Download LINK"), _T("name.exe"), 0, NULL);
    system("start name.exe"); // << injector name here
}


void BraveLoady() // main loady info edit this at ur own
{
    system("cls");
    SetConsoleTitleA("loader / github.com/brave1338");
    system("color A");
    std::cout << "\n\n\n ";
    std::cout << "                                   [1] Start Loading Driver  [2] Start Injector\n\n\n ";
    std::cout << "                                                    Type Choice: ";
    Sleep(100);
    int choice;

    std::cin >> choice;
    switch (choice)
    {
    case 1:
        brave1();
        break;
    case 2:
        brave2();
        break;
    }
}

int main()
{
    SetConsoleTitleA("loader / github.com/brave1338");
    system("color b");
    std::cout << "\n";
    std::cout << "                                               Starting Loader...\n ";
    Sleep(3000);
    BraveLoady();
}





