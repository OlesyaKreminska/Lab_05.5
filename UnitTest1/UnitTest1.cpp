#include "pch.h"
#include "CppUnitTest.h"
 // Замінити шлях на актуальний

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAP
{
    TEST_CLASS(UnitTestAP)
    {
    public:

        TEST_METHOD(TestNthTerm)
        {
            // Тест 1: a1 = 2, d = 3, n = 5, результат = 14
            Assert::AreEqual(14, nthTerm(2, 3, 5));

            // Тест 2: a1 = 5, d = 2, n = 3, результат = 9
            Assert::AreEqual(9, nthTerm(5, 2, 3));
        }

        TEST_METHOD(TestSumAP)
        {
            // Тест 1: a1 = 2, d = 3, n = 5, сума = 40
            Assert::AreEqual(40, sumAP(2, 3, 5));

            // Тест 2: a1 = 5, d = 2, n = 3, сума = 24
            Assert::AreEqual(24, sumAP(5, 2, 3));
        }

        TEST_METHOD(TestRecursionDepth)
        {
            // Тест 1: n = 5, глибина = 5
            Assert::AreEqual(5, recursionDepth(5));

            // Тест 2: n = 10, глибина = 10
            Assert::AreEqual(10, recursionDepth(10));
        }
    };
}