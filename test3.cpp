#include <cassert>
#include "string_utils.h"

int main() {
    // ���� 1: ���������� ������
    assert(areEqual("Hello", "Hello") == true);

    // ���� 2: ������ ������ �����
    assert(areEqual("Hello", "Helloo") == false);

    // ���� 3: ������ � ������� ���������
    assert(areEqual("Hello", "World") == false);

    // ���� 4: ������ � ������ ���������
    assert(areEqual("Hello", "hello") == true);

    // ���� 5: ���� ������ ������
    assert(areEqual("Hello", "") == false);

    return 0;
}
