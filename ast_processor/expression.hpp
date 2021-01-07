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

class Expression: public Node, public IExpressionAcceptor, 
    public IExpressionAtomAcceptor, public IEvaluable {
public:
    Expression():negation_(false) {}

    rttr::variant evaluate(IDataContext* dctx) {
        // if(evaluated_) return evaluation_;
        rttr::variant var;
        if(atom_) {
            var = atom_->evaluate(dctx);
        } else if(left_ && !right_) {
            var = left_->evaluate(dctx);
        } else if(left_ && right_) {
            auto left = left_->evaluate(dctx);
            auto right = right_->evaluate(dctx);
            switch(op_type_) {
                case MUL:
                    var = process_multiplication(left, right);
                    break;
                case DIV:
                    var = process_division(left, right);
                    break;
                case MOD:
                    var = process_mod(left, right);
                    break;
                case ADD:
                    var = process_addition(left, right);
                    break;
                case SUB:
                    var = process_subtraction(left, right);
                    break;
                case AND:
                    var = process_and(left, right);
                    break;
                case OR:
                    var = process_or(left, right);
                    break;
                case GT:
                    var = process_gt(left, right);
                    break;
                case GET:
                    var = process_get(left, right);
                    break;
                case LT:
                    var = process_lt(left, right);
                    break;
                case LET:
                    var = process_let(left, right);
                    break;
                case BITAND:
                    var = process_bit_and(left, right);
                    break;
                case BITOR:
                    var = process_bit_or(left, right);
                    break;
                case EQ:
                    var = process_equal(left, right);
                    break;
                case NEQ:
                    var = process_not_equal(left, right);
                    break;
                default:
                    ;
            }
        }
        return var;
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