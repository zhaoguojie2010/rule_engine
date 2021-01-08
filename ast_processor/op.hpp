#ifndef _RULE_ENGINE_OP_
#define _RULE_ENGINE_OP_
#include <rttr/registration>

#include "log/logger.hpp"

namespace rule_engine {

rttr::variant process_multiplication(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for *, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for *");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() * right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() * right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() * right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() * right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() * right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() * right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() * right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() * right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        return left.to_double() * right.to_double();
    return rttr::variant();
}

rttr::variant process_division(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for /, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for /");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() / right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() / right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() / right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() / right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() / right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() / right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() / right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() / right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        return left.to_double() / right.to_double();
    return rttr::variant();
}

rttr::variant process_mod(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for %, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for %");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() % right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() % right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() % right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() % right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() % right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() % right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() % right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() % right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        runtime_error("float number cannot be applied by operator %");
    return rttr::variant();
}

rttr::variant process_addition(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for +, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for +");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() + right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() + right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() + right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() + right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() + right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() + right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() + right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() + right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        return left.to_double() + right.to_double();
    return rttr::variant();
}

rttr::variant process_subtraction(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for -, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for -");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() - right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() - right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() - right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() - right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() - right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() - right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() - right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() - right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        return left.to_double() - right.to_double();
    return rttr::variant();
}

// TODO: tune and & or ops
rttr::variant process_and(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != rttr::type::get<bool>() || right.get_type() != rttr::type::get<bool>()) {
        error("oprand has to be boolean type in process_and");
    }

    if(left.to_bool() && right.to_bool()) return true;
    return false;
}

rttr::variant process_or(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != rttr::type::get<bool>() || right.get_type() != rttr::type::get<bool>()) {
        error("oprand has to be boolean type in process_and");
    }

    if(left.to_bool() || right.to_bool()) return true;
    return false;
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
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for &, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for &");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() & right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() & right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() & right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() & right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() & right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() & right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() & right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() & right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        runtime_error("float number cannot be applied by operator &");
    return rttr::variant();
}

rttr::variant process_bit_or(rttr::variant& left, rttr::variant& right) {
    if(!left.get_type().is_arithmetic() || !right.get_type().is_arithmetic()) {
        runtime_error("invalid oprand for |, must be arithmetic");
    } else if(left.get_type() != right.get_type()) {
        runtime_error("mismatched type for |");
    }
    auto t = left.get_type();
    if (t == rttr::type::get<int8_t>())
        return left.to_int8() | right.to_int8();
    else if (t == rttr::type::get<int16_t>())
        return left.to_int16() | right.to_int16();
    else if (t == rttr::type::get<int32_t>())
        return left.to_int32() | right.to_int32();
    else if (t == rttr::type::get<int64_t>())
        return left.to_int64() | right.to_int64();
    else if (t == rttr::type::get<uint8_t>())
        return left.to_uint8() | right.to_uint8();
    else if (t == rttr::type::get<uint16_t>())
        return left.to_uint16() | right.to_uint16();
    else if (t == rttr::type::get<uint32_t>())
        return left.to_uint32() | right.to_uint32();
    else if (t == rttr::type::get<uint64_t>())
        return left.to_uint64() | right.to_uint64();
    else if (t == rttr::type::get<float>() || t == rttr::type::get<double>())
        runtime_error("float number cannot be applied by operator |");
    return rttr::variant();
}

rttr::variant process_equal(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_equal");
    }
    
    return left == right;
}

rttr::variant process_not_equal(rttr::variant& left, rttr::variant& right) {
    if(left.get_type() != right.get_type()) {
        error("mismatched type in process_not_equal");
    }
    
    return left != right;
}

}
#endif