#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../laba8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string a="123.1. 1200011"
			string a = Faw(a);
			Assert::AreEqual(a, 123.1. 1211);
		}
	};
}
