#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 2.4.1/Vector.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector vector;
			vector.setSize(5);
			Assert::AreEqual(5, vector.getSize());
		}
	};
}
