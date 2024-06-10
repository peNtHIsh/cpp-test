#include <cassert>
#include "string_utils.h"

int main() {
    // Тест 1: Одинаковые строки
    assert(areEqual("Hello", "Hello") == true);

    // Тест 2: Строки разной длины
    assert(areEqual("Hello", "Helloo") == false);

    // Тест 3: Строки с разными символами
    assert(areEqual("Hello", "World") == false);

    // Тест 4: Строки с разным регистром
    assert(areEqual("Hello", "hello") == true);

    // Тест 5: Одна строка пустая
    assert(areEqual("Hello", "") == false);

    // Тест 6: Обе строки пустые
    assert(areEqual("", "") == true);

    // Тест 7: Одна строка NULL
    assert(areEqual("Hello", nullptr) == false);

    // Тест 8: Обе строки NULL
    assert(areEqual(nullptr, nullptr) == false);

    // Тест 9: Строки с одинаковым началом, но разными концами
    assert(areEqual("HelloWorld", "Helloworld") == true); // Исправлено на true

    // Тест 10: Строки с символами разных регистров
    assert(areEqual("HeLLo", "hElLo") == true);

    return 0;
}
