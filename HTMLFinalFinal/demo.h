#pragma once

#include <iostream>
#include <fstream>
#include "contactsVector.h"
#include "sqlite3.h"
#include "indexPage.h"
#include "linkedPage.h"
#include "tableTag.h"
#include "HTMLPage.h"

namespace Demo {
	class Demo {
	public:
		int demoHTML();
		static int callback(void* NotUsed, int argc, char** argv, char** azColName);
		int openReadClose();
	private:
		

	};
}

