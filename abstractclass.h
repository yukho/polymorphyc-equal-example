#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

#include <typeinfo>
#include <memory>

class AbstractClass
{
    friend bool operator == (const AbstractClass &, const AbstractClass &);
    friend bool operator == (const std::shared_ptr<AbstractClass> &,
                             const std::shared_ptr<AbstractClass> &);

public:
    virtual ~AbstractClass() = default;

protected:
    virtual bool equal(const AbstractClass *other) const = 0;
};

bool operator == (const AbstractClass &lhs, const AbstractClass &rhs);
bool operator == (const std::shared_ptr<AbstractClass> &lhs,
                  const std::shared_ptr<AbstractClass> &rhs);

#endif // ABSTRACTCLASS_H
