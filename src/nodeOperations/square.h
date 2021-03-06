/**
 * Square Class Header
 * 
 */

#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "node/tensorNode.h"

class Square: public TensorNode {
    private:
    const TensorNode *val;
    protected:
    std::string getDefaultTag();
    public:
    /**
     * Constructor for a Square
     */
    Square(const TensorNode *n_val);

    Tensor evaluate() const;
    Tensor evaluate(Session *session) const;
    /**
     * Returns the value of the input
     */
    Tensor derivative(const TensorNode *dx, Session *session) const;
};

#endif
