#include "pch.h"
#include "CppUnitTest.h"
#include "../HTMLFinalFinal/contactsVector.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			contactsVector cv;
			std::string name = "Bob";
			std::string actual = "<td>Bob</td>";
			Assert::AreEqual(actual, cv.tableData(actual));
		}
	};
}
