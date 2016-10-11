// SYIsNetWorkConnect.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include "CheckNetWork.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CheckNetWork *checknw = new CheckNetWork();
	if (checknw->IsNetworkConnect())
	{
		OutputDebugString(L"connected to internet\n");
		printf("connected to internet\n");
	}else{
		OutputDebugString(L"disconnected to internet\n");
		printf("disconnected to internet\n");

	}
	system("PAUSE");
	return 0;
}

