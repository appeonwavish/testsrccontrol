
// testsrccontrol.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtestsrccontrolApp:
// See testsrccontrol.cpp for the implementation of this class
//

class CtestsrccontrolApp : public CWinApp
{
public:
	CtestsrccontrolApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CtestsrccontrolApp theApp;