#include "concreteclassa.h"

QString ConcreteClassA::getText() const { return text; }

bool ConcreteClassA::equal(const AbstractClass *other) const
{
    if (const auto *casted = dynamic_cast<const ConcreteClassA *>(other))
        return text == casted->getText();

    return false;
}
