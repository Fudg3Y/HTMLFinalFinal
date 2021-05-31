#include "pch.h"
#include "CppUnitTest.h"
#include "../HTMLFinalFinal/contactsVector.h"
#include "../HTMLFinalFinal/contactsVector.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestContactsVector
{
	TEST_CLASS(UnitTestContactsVector)
	{
	public:
	/**
	* Puts initialStr through tableData() and then compares expectedStr
	* to actualStr
	*/
		TEST_METHOD(TestMethod1)
		{
			contactsVector cv;
			std::string initialStr = "Test";
			std::string expectedStr = "<td>Test</td>";
			std::string actualStr;

			actualStr = cv.tableData(initialStr);
			Assert::AreEqual(expectedStr, actualStr);
		}
	};
}
