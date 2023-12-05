#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr9.2/Pr9.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest092
{
	TEST_CLASS(UnitTest092)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Student* s = new Student[3];
			s[0] = Student();
			s[0].prizv = "bbb";
			s[0].kurs = 2;
			s[0].speciality = (Speciality)1;
			s[0].phys = 4;
			s[0].math = 5;
			s[0].info = 3;

			s[1] = Student();
			s[1].prizv = "abs";
			s[1].kurs = 3;
			s[1].speciality = (Speciality)0;
			s[1].phys = 4;
			s[1].math = 5;
			s[1].info = 5;

			s[2] = Student();
			s[2].prizv = "Marinchuk";
			s[2].kurs = 2;
			s[2].speciality = (Speciality)3;
			s[2].phys = 4;
			s[2].math = 4;
			s[2].info = 4;
			Assert::AreEqual(-1, BinSearch(s, 3, "prizv", (Speciality)2, 4));
			Assert::AreEqual(2, BinSearch(s, 3, "Marinchuk", (Speciality)3, 4));

		}
	};
}

