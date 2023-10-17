#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.3/LAB5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = y(0.0);
			Assert::AreEqual(z, 1.0);
		}
	};
}
