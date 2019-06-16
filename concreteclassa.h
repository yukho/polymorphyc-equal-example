#ifndef CONCRETECLASSA_H
#define CONCRETECLASSA_H

#include "abstractclass.h"
#include <QString>

class ConcreteClassA : public AbstractClass
{   
public:
    QString getText() const;

protected:
    bool equal(const AbstractClass *other) const override;

private:
    QString text{"hello"};
};

#endif // CONCRETECLASSA_H
