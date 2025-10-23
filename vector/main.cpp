#include "vect2.hpp"
#include <iostream>
#include <iomanip>

// int main() {
//     // Configure la précision pour l'affichage des doubles
//     //std::cout << std::fixed << std::setprecision(2);

//     // Test des constructeurs
//     vect2 a;
//     vect2 b(8, 9);
//     vect2 c(3, 3);

//     std::cout << "Constructeurs :\n";
//     std::cout << "a = " << a << "\n";
//     std::cout << "b = " << b << "\n";
//     std::cout << "c = " << c << "\n\n";

//     // Test operator[]
//     std::cout << "Accès aux composants :\n";
//     std::cout << "b[0] = " << b[0] << ", b[1] = " << b[1] << "\n";
//     std::cout << "c[0] = " << c[0] << ", c[1] = " << c[1] << "\n";
//     c[0] = 7;
//     std::cout << "c[0] = " << c[0] << ", c[1] = " << c[1] << "\n\n";

//     // Test des opérations avec scalaires
//     std::cout << "Opérations avec scalaires :\n";
//     a = vect2(3, 3);
//     std::cout << "a = " << a << "\n";
//     std::cout << "2 * a = " << 2 * a << "\n";
//     std::cout << "a * 2 = " << a * 2 << "\n";
//     std::cout << "b + 2 = " << b + 2 << "\n";
//     std::cout << "2 + b = " << 2 + b << "\n\n";

//     // Test des opérations composées
//     std::cout << "Opérations composées :\n";
//     a = vect2(1, 1);
//     b = vect2(2, 2);
//     a += b += c;
//     std::cout << "a += b += c : a = " << a << ", b = " << b << "\n";
//     std::cout << "b = " << b << "\n";
//     std::cout << "c = " << c << "\n";
    
//     a = vect2(5, 5);
//     std::cout << "a = " << a << "\n";
//     a -= 2;
//     std::cout << "a -= 2 : " << a << "\n";
//     std::cout << "a = " << a << "\n";
//     std::cout << "b = " << b << "\n";
//     a -= b;
//     std::cout << "a -= b : " << a << "\n\n";

//     // Test des expressions complexes
//     std::cout << "a = " << a << "\n";
//     std::cout << "b = " << b << "\n";
//     std::cout << "c = " << c << "\n";
//     a = b * c + 2;
//     std::cout << "a = b * c + 2 : " << a << "\n";
//     a = 2 + b * c;
//     std::cout << "a = 2 + b * c : " << a << "\n\n";

//     // Test des opérateurs d'incrémentation/décrémentation
//     std::cout << "Incrémentation/Décrémentation :\n";
//     a = vect2(1, 1);
//     std::cout << "a = " << a << "\n";
//     std::cout << "a++ = " << a++ << "\n";
//     std::cout << "a = " << a << "\n";
//     std::cout << "++a = " << ++a << "\n";
//     std::cout << "a-- = " << a-- << "\n";
//     std::cout << "a = " << a << "\n";
//     std::cout << "--a = " << --a << "\n\n";

// 	vect2 f(2,3);
// 	vect2 g(2,3);
//     // Test des comparaisons
//     std::cout << "Comparaisons :\n";
//     std::cout << "b == c : " << (g == f) << "\n";
//     std::cout << "b != c : " << (g != f) << "\n";

//     return 0;
// }

// #include "vect2.hpp"
// #include <iostream>

// int main() {
//     std::cout << "==== TEST 1: Constructors ====\n";
//     vect2 a;
//     vect2 b(4, -2);
//     vect2 c(b);
//     std::cout << "a = " << a << "\n";
//     std::cout << "b = " << b << "\n";
//     std::cout << "c = " << c << "\n\n";

//     std::cout << "==== TEST 2: Access and Assignment ====\n";
//     a[0] = 10; a[1] = 20;
//     std::cout << "a after assignment = " << a << "\n";
//     std::cout << "a[0] = " << a[0] << ", a[1] = " << a[1] << "\n\n";

//     std::cout << "==== TEST 3: Scalar Operations ====\n";
//     std::cout << "a * 2 = " << a * 2 << "\n";
//     std::cout << "2 * a = " << 2 * a << "\n";
//     std::cout << "a + 3 = " << a + 3 << "\n";
//     std::cout << "3 + a = " << 3 + a << "\n";
//     std::cout << "a - 5 = " << a - 5 << "\n";
//     std::cout << "5 - a = " << 5 - a << "\n\n";

//     std::cout << "==== TEST 4: Vector Operations ====\n";
//     vect2 x(1, 2), y(3, 4);
//     std::cout << "x = " << x << ", y = " << y << "\n";
//     std::cout << "x + y = " << x + y << "\n";
//     std::cout << "y - x = " << y - x << "\n";
//     std::cout << "x * y = " << x * y << "  (component-wise)\n\n";

//     std::cout << "==== TEST 5: Compound Assignments ====\n";
//     vect2 d(2, 2), e(5, 5);
//     std::cout << "Initial: d = " << d << ", e = " << e << "\n";
//     d += e;
//     std::cout << "After d += e: d = " << d << "\n";
//     d -= vect2(1, 1);
//     std::cout << "After d -= (1,1): d = " << d << "\n";
//     d *= 2;
//     std::cout << "After d *= 2: d = " << d << "\n\n";

//     std::cout << "==== TEST 6: Mixed and Chained Expressions ====\n";
//     vect2 p(1, 2), q(2, 3), r(3, 4);
//     vect2 result = 2 + p * q + r - 1;
//     std::cout << "result = 2 + p * q + r - 1 = " << result << "\n";
//     std::cout << "Expected calculation: (p*q)={2,6}, +r={5,10}, +2={7,12}, -1={6,11}\n\n";

//     std::cout << "==== TEST 7: Increment and Decrement ====\n";
//     vect2 inc(0, 0);
//     std::cout << "inc = " << inc << "\n";
//     std::cout << "inc++ = " << inc++ << "\n";
//     std::cout << "After inc++: " << inc << "\n";
//     std::cout << "++inc = " << ++inc << "\n";
//     std::cout << "inc-- = " << inc-- << "\n";
//     std::cout << "After inc--: " << inc << "\n";
//     std::cout << "--inc = " << --inc << "\n\n";

//     std::cout << "==== TEST 8: Comparisons ====\n";
//     vect2 g1(4, 4), g2(4, 4), g3(5, 4);
//     std::cout << "g1 == g2 : " << (g1 == g2) << "\n";
//     std::cout << "g1 != g2 : " << (g1 != g2) << "\n";
//     std::cout << "g1 == g3 : " << (g1 == g3) << "\n";
//     std::cout << "g1 != g3 : " << (g1 != g3) << "\n\n";

//     std::cout << "==== TEST 9: Chained Compound Ops ====\n";
//     vect2 z1(1,1), z2(2,2), z3(3,3);
//     (z1 += z2) += z3;
//     std::cout << "(z1 += z2) += z3 → z1 = " << z1 << "\n";
//     std::cout << "z2 = " << z2 << ", z3 = " << z3 << "\n\n";

//     std::cout << "==== TEST 10: Negative and Zero ====\n";
//     vect2 neg(-3, -4), zero(0, 0);
//     std::cout << "neg = " << neg << ", zero = " << zero << "\n";
//     std::cout << "neg + 3 = " << neg + 3 << "\n";
//     std::cout << "zero - 1 = " << zero - 1 << "\n";
//     std::cout << "neg * zero = " << neg * zero << "\n";

//     return 0;
// }


#include "vect2.hpp"
#include <iostream>

int main() {
    std::cout << "==== ADVANCED TEST 1: Mixed scalar + vector operations ====\n";
    vect2 a(1, -1), b(3, 4);
    std::cout << "a = " << a << ", b = " << b << "\n";
    vect2 res1 = a * 2 + b - 3;
    vect2 res2 = 3 + b * 2 - a;
    std::cout << "a * 2 + b - 3 = " << res1 << "\n";
    std::cout << "3 + b * 2 - a = " << res2 << "\n\n";

    std::cout << "==== ADVANCED TEST 2: Compound assignment chaining ====\n";
    vect2 c(1, 2), d(2, 3), e(3, 4);
    (c += d) += e;
    std::cout << "(c += d) += e -> c = " << c << " (should be {6,9})\n";
    std::cout << "d = " << d << ", e = " << e << "\n\n";

    std::cout << "==== ADVANCED TEST 3: Self compound operations ====\n";
    vect2 s(2, 5);
    s += s;
    std::cout << "s += s -> " << s << " (should be {4,10})\n";
    s *= 3;
    std::cout << "s *= 3 -> " << s << " (should be {12,30})\n\n";

    std::cout << "==== ADVANCED TEST 4: Increment / Decrement in expressions ====\n";
    vect2 x(0, 0);
    std::cout << "x = " << x << "\n";
    std::cout << "x++ = " << x++ << " (should print old value {0,0})\n";
    std::cout << "After x++ -> " << x << " (should be {1,1})\n";
    std::cout << "++x + 2 = " << (++x + 2) << " (should be {4,4})\n";
    std::cout << "x-- = " << x-- << " (should print {2,2})\n";
    std::cout << "After x-- -> " << x << " (should be {1,1})\n";
    std::cout << "--x = " << --x << " (should be {0,0})\n\n";

    std::cout << "==== ADVANCED TEST 5: Equality & Inequality ====\n";
    vect2 p1(5, 5), p2(5, 5), p3(5, 6);
    std::cout << "p1 == p2 : " << (p1 == p2) << "\n";
    std::cout << "p1 != p2 : " << (p1 != p2) << "\n";
    std::cout << "p1 == p3 : " << (p1 == p3) << "\n";
    std::cout << "p1 != p3 : " << (p1 != p3) << "\n\n";

    std::cout << "==== ADVANCED TEST 6: Nested expressions ====\n";
    vect2 n1(1, 1), n2(2, 3), n3(4, 5);
    vect2 res = (n1 + n2) * 2 + n3 * (n1 + 1);
    std::cout << "(n1 + n2) * 2 + n3 * (n1 + 1) = " << res << "\n";
    std::cout << "Expected: (n1+n2)={3,4} *2={6,8}; n3*(n1+1)={4*2,5*2}={8,10}; total={14,18}\n\n";

    std::cout << "==== ADVANCED TEST 7: Negative & zero mix ====\n";
    vect2 neg(-2, 5), zero(0, 0);
    std::cout << "neg = " << neg << ", zero = " << zero << "\n";
    std::cout << "neg - 2 = " << (neg - 2) << "\n";
    std::cout << "2 - neg = " << (2 - neg) << "\n";
    std::cout << "neg * zero = " << (neg * zero) << "\n";
    std::cout << "zero * 3 = " << (zero * 3) << "\n";
    std::cout << "neg + zero = " << (neg + zero) << "\n";

    return 0;
}
