#include "pch.h"
#include "CppUnitTest.h"
#include "./../interviewQs/UniqueCharacters.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(tests)
	{
	public:
		
		TEST_METHOD(TestIsUniqueBruteForce)
		{
			std::string input1 = "abcdefghe";
			UniqueCharacters uc;
			Assert::AreEqual(false, uc.IsUniqueBruteForce(input1));

			std::string input2 = "abcdefgh";
			Assert::AreEqual(true, uc.IsUniqueBruteForce(input2));
		}

		TEST_METHOD(TestIsUniqueSort)
		{
			std::string input1 = "abcdefghe";
			UniqueCharacters uc;
			Assert::AreEqual(false, uc.IsUniqueSort(input1));

			std::string input2 = "abcdefgh";
			Assert::AreEqual(true, uc.IsUniqueSort(input2));
		}

		TEST_METHOD(TestIsUniqueBitset)
		{
			std::string input1 = "abcdefghe";
			UniqueCharacters uc;
			Assert::AreEqual(false, uc.IsUniqueBitset(input1));

			std::string input2 = "abcdefgh";
			Assert::AreEqual(true, uc.IsUniqueBitset(input2));
		}
	};
}
