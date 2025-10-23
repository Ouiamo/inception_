// #include <iostream>
// #include "test.hpp"

// int main() {
//     // Création de bigints
//     bigint num1("242"), num2("10"), num3, num4(100);
//     bigint num5 = num2;
//     const bigint numC(60);

//     // Test des opérateurs arithmétiques
//     std::cout << num1 << num2 << num3 << num4 << num5 << numC << std::endl;
//     // std::cout << "num1 + num2 = " << (num1 + num2) << std::endl;
//     num3 = num1;
//     // num3 += num2;
//     // std::cout << "num3 += num2: " << num3 << std::endl;

//     bigint num8("999"), num9("999");
    
//     // Test des comparaisons
//     std::cout << "num8 == num9: " << (num8 == num9) << std::endl;
//     std::cout << "num8 != num9: " << (num8 != num9) << std::endl;
//     std::cout << "num8 < num9: " << (num8 < num9) << std::endl;
//     std::cout << "num8 <= num9: " << (num8 <= num9) << std::endl;
//     std::cout << "num8 > num9: " << (num8 > num9) << std::endl;
//     std::cout << "num8 >= num9: " << (num8 >= num9) << std::endl;

//     bigint num10("4254");
//     // Test des décalages avec entiers
//     std::cout << "num10 << 2 = " << (num10 << 2) << std::endl;
//     std::cout << "num10 >> 3 = " << (num10 >> 3) << std::endl;

//     bigint num11("2");
//     // // Test des décalages avec bigint
//     std::cout << "num10 >> num11 = " << (num10 >> num11) << std::endl;
//     std::cout << "num10 << num11 = " << (num10 << num11) << std::endl;

//     // bigint num12("2");
//     // // Test des décalages avec bigint
//     // std::cout << "num12++ = " << (num12++) << std::endl;
//     // std::cout << "++num12 = " << (++num12) << std::endl;


//     // // Test des décalages avec bigint constant
//     // std::cout << "num10 << numC = " << (num10 << numC) << std::endl;
//     // std::cout << "num10 >> numC = " << (num10 >> numC) << std::endl;

//     // Test des affectations combinées avec décalages
//     // num3 = num1;
//     // num3 <<= 2;
//     // std::cout << "num3 <<= 2: " << num3 << std::endl;
//     // num3 >>= 1;
//     // std::cout << "num3 >>= 1: " << num3 << std::endl;

//     // // Test des affectations combinées avec bigint
//     // num3 = num1;
//     // num3 <<= num5;
//     // std::cout << "num3 <<= num5: " << num3 << std::endl;
//     // num3 >>= num5;
//     // std::cout << "num3 >>= num5: " << num3 << std::endl;

//     return 0;
// }


#include "test.hpp"

// clear && c++ -g main.cpp bigint.cpp bigint.hpp && valgrind --leak-check=full --show-leak-kinds=all ./a.out
int	main(void)
{
	{
		const bigint	a(42);
		bigint			b(21), c, d(1337), e(d);
		
		//All are in base10
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << "a + b = " << a + b << std::endl; // a + b = 63
		std::cout << "(c += a) = " << (c += a) << std::endl; // c = 42, donc (c += a) = 42
		
		std::cout << "\n\n" << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "++b = " << ++b << std::endl;
		std::cout << "b++ = " << b++ << std::endl;
		std::cout << "b = " << b << std::endl;
		int	i = 0;//checking**
		std::cout << "i = " << i << std::endl;
		std::cout << "++i = " << ++i << std::endl;
		std::cout << "i++ = " << i++ << std::endl;
		std::cout << "i = " << i << std::endl;

		std::cout << "\n\n" << std::endl;
        // std::cout << "b =======" << b << std::endl;
		std::cout << "\"((b << 10) + 42)\" = " << ((b << 10) + 42) << std::endl;
		std::cout << "(d <<= 4) = " << (d <<= 4) << std::endl;
		std::cout << "(d >>= 2) = " << (d >>= (const bigint)2) << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "d = " << d << std::endl;
		std::cout << "(d < a) = " << (d < a) << std::endl;
		std::cout << "(d > a) = " << (d > a) << std::endl;
		std::cout << "(d == a) = " << (d == a) << std::endl;
		std::cout << "(d != a) = " << (d != a) << std::endl;
		std::cout << "(d == a) = " << (d == d) << std::endl;
		std::cout << "(d <= a) = " << (d <= a) << std::endl;
		std::cout << "(d >= a) = " << (d >= a) << std::endl;

		bigint x(1234);
		std::cout << std::endl;
		std::cout << "\"(x << 2)\"--> " << (x << 2) << "\n";   // prints 123400
		std::cout << "\"(x >>= 2)\"--> " << (x >>= 2) << "\n";   // prints   12}
	}
	return (0);
}

// #include <iostream>
// #include "test.hpp"  // your bigint header

// int main()
// {
//     // Construction tests
//     bigint a(1337);
//     bigint b("828");
//     bigint c = a;        // copy constructor
//     bigint d("0000123"); // leading zeros test

//     std::cout << "a = " << a << "\n";  // 1337
//     std::cout << "b = " << b << "\n";  // 828
//     std::cout << "c (copy of a) = " << c << "\n"; // 1337
//     std::cout << "d (leading zeros removed) = " << d << "\n"; // 123

//     // Addition tests
//     bigint sum1 = a + b;
//     std::cout << "a + b = " << sum1 << "\n"; // 2165

//     a += b;
//     std::cout << "a after a += b: " << a << "\n"; // 2165

//     // Comparison tests
//     std::cout << std::boolalpha;
//     std::cout << "a == c? " << (a == c) << "\n"; // false (2165 != 1337)
//     std::cout << "b != d? " << (b != d) << "\n"; // true (828 != 123)
//     std::cout << "d < b? " << (d < b) << "\n";   // true (123 < 828)
//     std::cout << "a > c? " << (a > c) << "\n";   // true (2165 > 1337)
//     std::cout << "d <= d? " << (d <= d) << "\n"; // true
//     std::cout << "c >= a? " << (c >= a) << "\n"; // false

//     // Shift left/right by unsigned int
//     bigint shl = b << 2;  // multiply by 10^2 = append "00"
//     std::cout << "b << 2 = " << shl << "\n"; // 82800

//     bigint shr = shl >> 3; // divide by 10^3 = remove last 3 digits
//     std::cout << "shl >> 3 = " << shr << "\n"; // 82

//     // Shift left/right by bigint
//     bigint shiftAmount("2");
//     bigint shl2 = b << shiftAmount;
//     std::cout << "b << shiftAmount (2) = " << shl2 << "\n"; // 82800

//     bigint shr2 = shl2 >> shiftAmount;
//     std::cout << "shl2 >> shiftAmount (2) = " << shr2 << "\n"; // 828

//     // Increment tests
//     bigint inc("999");
//     std::cout << "inc before ++: " << inc << "\n"; // 999
//     std::cout << "inc++ = " << inc++ << "\n";       // 999
//     std::cout << "After inc++: " << inc << "\n";    // 1000
//     std::cout << "++inc = " << ++inc << "\n";       // 1001

//     // Edge case shift right beyond digits length
//     bigint small("5");
//     std::cout << "small >> 10 = " << (small >> 10) << "\n"; // 0

//     return 0;
// }



// #include "test.hpp"
// #include <iostream>

// int main() {
//     // 1. Basic construction
//     bigint a("00001234");
//     bigint b(4321);
//     bigint c = a;

//     std::cout << "a = " << a << std::endl; // 1234
//     std::cout << "b = " << b << std::endl; // 4321
//     std::cout << "c (copy of a) = " << c << std::endl; // 1234

//     // 2. Comparisons
//     std::cout << std::boolalpha;
//     std::cout << "a == c? " << (a == c) << std::endl;
//     std::cout << "a != b? " << (a != b) << std::endl;
//     std::cout << "a < b? " << (a < b) << std::endl;
//     std::cout << "a > b? " << (a > b) << std::endl;
//     std::cout << "a <= c? " << (a <= c) << std::endl;
//     std::cout << "b >= a? " << (b >= a) << std::endl;

//     // 3. Addition
//     bigint sum = a + b;
//     std::cout << "a + b = " << sum << std::endl; // 1234 + 4321 = 5555

//     a += b;
//     std::cout << "a after a += b: " << a << std::endl; // 5555
//     std::cout << "a == sum? " << (a == sum) << std::endl;

//     // 4. Shift left / right with int
//     bigint shiftLeft = b << 3;
//     std::cout << "b << 3 = " << shiftLeft << std::endl; // 4321000

//     bigint shiftRight = shiftLeft >> 2;
//     std::cout << "shiftLeft >> 2 = " << shiftRight << std::endl; // 43210

//     // 5. Shift left / right with bigint
//     bigint shiftAmount(2);
//     bigint shiftBigLeft = b << shiftAmount;
//     std::cout << "b << shiftAmount (" << shiftAmount << ") = " << shiftBigLeft << std::endl; // 432100

//     bigint shiftBigRight = shiftBigLeft >> shiftAmount;
//     std::cout << "shiftBigLeft >> shiftAmount (" << shiftAmount << ") = " << shiftBigRight << std::endl; // 4321

//     // 6. Increment
//     bigint inc(999);
//     std::cout << "inc before ++: " << inc << std::endl;
//     std::cout << "inc++ = " << inc++ << std::endl; // 999
//     std::cout << "After inc++: " << inc << std::endl; // 1000
//     std::cout << "++inc = " << ++inc << std::endl; // 1001

//     // 7. Chained addition
//     bigint x(1000), y(2000), z(3000);
//     bigint total = x + y + z;
//     std::cout << "x + y + z = " << total << std::endl; // 6000

//     // 8. Edge case: shifting zero
//     bigint zero(0);
//     std::cout << "zero << 5 = " << (zero << 5) << std::endl; // 0
//     std::cout << "zero >> 5 = " << (zero >> 5) << std::endl; // 0

//     // 9. Very large number addition
//     bigint large1("999999999999999999999999");
//     bigint large2("1");
//     std::cout << "large1 + large2 = " << (large1 + large2) << std::endl; // 1000000000000000000000000

//     return 0;
// }
