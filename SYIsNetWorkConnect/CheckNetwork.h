#ifndef _CHECKNWTWORK_H_
#define _CHECKNWTWORK_H_ 
#include <windows.h> 
#include <wininet.h>
#pragma comment (lib, "Wininet.lib")

class CheckNetWork
{
public:
	bool IsNetworkConnect(void)
	{
		if(InternetCheckConnection(L"http://www.google.com", FLAG_ICC_FORCE_CONNECTION, 0))
		{
			return true;
		}
		return false;
	}
};
#endif