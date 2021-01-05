#ifndef _RULE_ENGINE_EXPRESSION_
#define _RULE_ENGINE_EXPRESSION_

#include <string>

#include "node.hpp"
#include "op.hpp"
#include "expression_atom.hpp"

namespace rule_engine {

enum OP_TYPE {
    MUL,
    DIV,
    MOD,
    ADD,
    SUB,
    AND,
    OR,
    GT,
    GET,
    LT,
    LET,
    BITAND,
    BITOR,
    EQ,
    NEQ
};

class Expression: public Node, public IExpressionAcceptor, public IExpressionAtomAcceptor {
public:
    Expression():negation_(false) {}

    rttr::variant evaluate(IDataContext* dctx) {
        // if(evaluated_) return evaluation_;
        if(atom_) {
            return atom_->evaluate(dctx);
        } else if(left_ && !right_) {
            return left_->evaluate(dctx);
        } else if(left_ && right_) {
            auto left = left_->evaluate(dctx);
            auto right = right_->evaluate(dctx);
            switch(op_type_) {
                case MUL:
                    return process_multiplication(left, right);
                case DIV:
                    return process_division(left, right);
                case MOD:
                    return process_mod(left, right);
                case ADD:
                    return process_addition(left, right);
                case SUB:
                    return process_subtraction(left, right);
                case AND:
                    return process_and(left, right);
                case OR:
                    return process_or(left, right);
                case GT:
                    return process_gt(left, right);
                case GET:
                    return process_get(left, right);
                case LT:
                    return process_lt(left, right);
                case LET:
                    return process_let(left, right);
                case BITAND:
                    return process_bit_and(left, right);
                case BITOR:
                    return process_bit_or(left, right);
                case EQ:
                    return process_equal(left, right);
                case NEQ:
                    return process_not_equal(left, right);
                default:
                    ;
            }
        }
        return rttr::variant();
    }

    void set_negation() {
        negation_ = true;
    }

    void accept_expression(std::shared_ptr<Expression> expr) {
        if(!left_) {
            left_ = expr;
        } else {
            right_ = expr;
        }
    }

    void accept_expression_atom(std::shared_ptr<ExpressionAtom> atom) {
        atom_ = atom;
    }

    void set_op_type(OP_TYPE t) {
        op_type_ = t;
    }

    // bool evaluated() {return evaluated_;}
private:
    std::shared_ptr<Expression> left_;
    std::shared_ptr<Expression> right_;
    std::shared_ptr<ExpressionAtom> atom_;
    OP_TYPE op_type_;
    bool negation_;
    // bool evaluated_;

    // holds the result of a binary operation
    // bool bin_evaluation_;

    // holds the native variable
    // rttr::variant evaluation_;
};



}

#endif