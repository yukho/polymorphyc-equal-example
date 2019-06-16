#include "abstractclass.h"

bool operator ==(const AbstractClass &lhs, const AbstractClass &rhs)
{
    return typeid(lhs) == typeid(rhs) && lhs.equal(&rhs);
}

bool operator ==(const std::shared_ptr<AbstractClass> &lhs,
                 const std::shared_ptr<AbstractClass> &rhs)
{
    return *lhs == *rhs;
}
