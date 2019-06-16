#include "concreteclassb.h"

QVector<int> ConcreteClassB::getVec() const { return vec; }

bool ConcreteClassB::equal(const AbstractClass *other) const
{
    if (const auto *casted = dynamic_cast<const ConcreteClassB *>(other))
        return vec == casted->getVec();

    return false;
}
