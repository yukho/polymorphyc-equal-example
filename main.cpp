#include <iostream>
#include <memory>
#include <algorithm>
#include "concreteclassa.h"
#include "concreteclassb.h"

template <template <typename> class Conteiner, typename T>
bool isEqual(const Conteiner<T> &lhs, const Conteiner<T> &rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    return std::equal(lhs.cbegin(), lhs.cend(), rhs.cbegin(), rhs.cend());
}

int main()
{
    QVector<std::shared_ptr<AbstractClass>> vec1, vec2;
    std::cout << std::boolalpha;

    vec1.push_back(std::make_shared<ConcreteClassA>());
    vec1.push_back(std::make_shared<ConcreteClassB>());

    vec2.push_back(std::make_shared<ConcreteClassB>());
    vec2.push_back(std::make_shared<ConcreteClassA>());
    std::cout << isEqual(vec1, vec2) << std::endl;

    std::swap(vec2[0], vec2[1]);
    std::cout << isEqual(vec1, vec2) << std::endl;
}
