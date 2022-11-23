#include "CppUnitTest.h"
#include "../app/app.h"

#include <type_traits>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std::string_literals;

namespace all_tests
{
	TEST_CLASS(test_k01) 
	{
	public:

		// 10 bodova
		TEST_METHOD(test_digits)
		{
			Assert::AreEqual(1u, sum_digits("1. kolokvij"s));
			Assert::AreEqual(6u, sum_digits("2022. godina"s));
			Assert::AreEqual(7u, sum_digits("23.11."s));
			Assert::AreEqual(45u, sum_digits("0123456789"s));
		}

		// 10 bodova
		TEST_METHOD(test_towers)
		{
			const uint32_t heights1[]{ 1, 2, 3, 4, 5 };
			Assert::AreEqual(5u, visible_towers(heights1, 5));

			const uint32_t heights2[]{ 5, 1, 3 };
			Assert::AreEqual(1u, visible_towers(heights2, 3));

			const uint32_t heights3[]{ 2, 3, 3, 5, 4 };
			Assert::AreEqual(3u, visible_towers(heights3, 5));

			const uint32_t heights4[]{ 3, 3, 4, 5 };
			Assert::AreEqual(3u, visible_towers(heights4, 4));
		}

		// 12 bodova
		TEST_METHOD(test_os)
		{
			Assert::IsTrue(std::is_abstract_v<operating_system>);
			Assert::IsTrue(std::is_base_of_v<operating_system, windows>);

			windows win11;
			const operating_system& os = win11;
			Assert::AreEqual("22H2"s, os.release());
			Assert::AreEqual("10.0.22621.819"s, os.build());
			Assert::AreEqual(25_GB, os.space());
		}
		
		// 18 bodova
		TEST_METHOD(test_string)
		{
			const string s1("hrvatska");
			Assert::AreEqual(8u, s1.length());
			const string s2 = s1.rev_sub(3, 3);
			Assert::AreEqual(3u, s2.length());
			std::stringstream ss1;
			s2.print(ss1);
			Assert::AreEqual("vrh"s, ss1.str());

			const string s3 = s1;
			const string s4 = s3.rev_sub(6, 4);
			Assert::AreEqual(4u, s4.length());
			std::stringstream ss2;
			s4.print(ss2);
			Assert::AreEqual("stav"s, ss2.str());
		}
	};
}
