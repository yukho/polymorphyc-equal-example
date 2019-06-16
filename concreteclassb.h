#ifndef CONCRETECLASSB_H
#define CONCRETECLASSB_H

#include "abstractclass.h"
#include <QVector>

class ConcreteClassB : public AbstractClass
{
public:
    QVector<int> getVec() const;

protected:
    bool equal(const AbstractClass *other) const override;

private:
    QVector<int> vec{1, 2, 3};
};

#endif // CONCRETECLASSB_H
