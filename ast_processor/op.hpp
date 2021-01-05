#include <rttr/registration>

#include "log/logger.hpp"

namespace rule_engine {

rttr::variant process_multiplication(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_division(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_mod(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_addition(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_subtraction(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_and(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_or(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_gt(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_gt");
    }
    
    return left > right;
}

rttr::variant process_get(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_get");
    }
    
    return left >= right;
}

rttr::variant process_lt(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_lt");
    }
    
    return left < right;
}

rttr::variant process_let(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_let");
    }
    
    return left <= right;
}

rttr::variant process_bit_and(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_bit_or(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

rttr::variant process_equal(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_equal");
    }
    
    return left == right;
}

rttr::variant process_not_equal(rttr::variant& left, rttr::variant& right) {
    return rttr::variant();
}

}