// dev.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "launch\aqua_launch_main.h"
#include <Windows.h>

LONG CALLBACK OnTopLevelExceptionFilter(
	_In_ struct _EXCEPTION_POINTERS *ExceptionInfo
) {
	TCHAR buf[MAX_PATH];
	_stprintf_s(buf, MAX_PATH, TEXT("CODE: %08X , ADDR: %08X , %08X"), ExceptionInfo->ExceptionRecord->ExceptionCode, ExceptionInfo->ContextRecord->Eip, ExceptionInfo->ContextRecord->Esp);
	MessageBox(NULL, buf, NULL, NULL);
	
	return EXCEPTION_EXECUTE_HANDLER;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	EXCEPTION_ACCESS_VIOLATION;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		SetUnhandledExceptionFilter(OnTopLevelExceptionFilter);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}