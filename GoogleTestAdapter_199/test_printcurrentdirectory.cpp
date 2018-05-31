#include "gtest/gtest.h"

#include <tchar.h> // _tprintf
#include <Windows.h> // GetCurrentDirectory

TEST(PrintCurrentDirectoryTest, Run)
{
	const DWORD nBufferLength = GetCurrentDirectory(NULL, 0);
	ASSERT_LT(0u, nBufferLength);
	const LPTSTR lpBuffer = new TCHAR[nBufferLength];
	ASSERT_NE(nullptr, lpBuffer);
	GetCurrentDirectory(nBufferLength, lpBuffer);
	_tprintf(L"Current directory: %s\n", lpBuffer);
	delete[] lpBuffer;
}
