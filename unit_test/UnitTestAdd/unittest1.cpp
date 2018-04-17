#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\unit_test\Add.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAdd
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		BEGIN_TEST_METHOD_ATTRIBUTE(AddTest_Positive)
			TEST_OWNER(L"Orest")
			TEST_PRIORITY(1)
			TEST_WORKITEM(L"WorkItem")
		END_TEST_METHOD_ATTRIBUTE(AddTest_Positive)

		TEST_METHOD(AddTest_Positive)
		{
			int a = 4;
			int b = 6;
			int result = add(a, b);
			Assert::AreEqual(result, 10, L"Add function doesn`t return right result");
		}
		TEST_METHOD(AddTest_Negative)
		{
			int a = 4;
			int b = 6;
			int result = add(a, b);
			Assert::AreNotEqual(result, 11, L"Result of add function is incorrect");
		}
	};
}