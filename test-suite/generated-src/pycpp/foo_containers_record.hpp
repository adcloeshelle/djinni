// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#pragma once

#include "foo_some_other_record.hpp"
#include <chrono>
#include <cstdint>
#include <experimental/optional>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

namespace testsuite {

struct FooContainersRecord final {
    std::experimental::optional<std::vector<int32_t>> optional_list_int;
    std::vector<int32_t> list_int;
    std::vector<std::vector<uint8_t>> list_binary;
    std::vector<std::experimental::optional<std::vector<uint8_t>>> list_optional_binary;
    std::vector<std::vector<std::string>> list_list_string;
    std::vector<FooSomeOtherRecord> list_record;
    std::experimental::optional<std::unordered_map<std::string, int32_t>> optional_map_string_int;
    std::unordered_map<std::string, int32_t> map_string_int;
    std::unordered_map<std::string, std::string> map_string_string;
    std::unordered_map<std::experimental::optional<std::string>, std::experimental::optional<std::string>> map_optional_string_optional_string;
    std::unordered_map<int8_t, std::vector<std::chrono::system_clock::time_point>> map_int_list_date;
    std::experimental::optional<std::unordered_set<std::string>> optional_set_string;
    std::unordered_set<std::string> set_string;
    std::unordered_set<std::experimental::optional<std::string>> set_optional_string;
    std::unordered_map<int8_t, std::unordered_set<std::string>> map_int_set_string;
    std::unordered_map<std::experimental::optional<int32_t>, std::unordered_set<std::string>> map_optional_int_set_string;

    FooContainersRecord(std::experimental::optional<std::vector<int32_t>> optional_list_int,
                        std::vector<int32_t> list_int,
                        std::vector<std::vector<uint8_t>> list_binary,
                        std::vector<std::experimental::optional<std::vector<uint8_t>>> list_optional_binary,
                        std::vector<std::vector<std::string>> list_list_string,
                        std::vector<FooSomeOtherRecord> list_record,
                        std::experimental::optional<std::unordered_map<std::string, int32_t>> optional_map_string_int,
                        std::unordered_map<std::string, int32_t> map_string_int,
                        std::unordered_map<std::string, std::string> map_string_string,
                        std::unordered_map<std::experimental::optional<std::string>, std::experimental::optional<std::string>> map_optional_string_optional_string,
                        std::unordered_map<int8_t, std::vector<std::chrono::system_clock::time_point>> map_int_list_date,
                        std::experimental::optional<std::unordered_set<std::string>> optional_set_string,
                        std::unordered_set<std::string> set_string,
                        std::unordered_set<std::experimental::optional<std::string>> set_optional_string,
                        std::unordered_map<int8_t, std::unordered_set<std::string>> map_int_set_string,
                        std::unordered_map<std::experimental::optional<int32_t>, std::unordered_set<std::string>> map_optional_int_set_string)
    : optional_list_int(std::move(optional_list_int))
    , list_int(std::move(list_int))
    , list_binary(std::move(list_binary))
    , list_optional_binary(std::move(list_optional_binary))
    , list_list_string(std::move(list_list_string))
    , list_record(std::move(list_record))
    , optional_map_string_int(std::move(optional_map_string_int))
    , map_string_int(std::move(map_string_int))
    , map_string_string(std::move(map_string_string))
    , map_optional_string_optional_string(std::move(map_optional_string_optional_string))
    , map_int_list_date(std::move(map_int_list_date))
    , optional_set_string(std::move(optional_set_string))
    , set_string(std::move(set_string))
    , set_optional_string(std::move(set_optional_string))
    , map_int_set_string(std::move(map_int_set_string))
    , map_optional_int_set_string(std::move(map_optional_int_set_string))
    {}
};

}  // namespace testsuite