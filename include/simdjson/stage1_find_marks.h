#ifndef SIMDJSON_STAGE1_FIND_MARKS_H
#define SIMDJSON_STAGE1_FIND_MARKS_H

#include "simdjson/parsedjson.h"
#include "simdjson/simdjson.h"

namespace simdjson {

template <Architecture T = Architecture::NATIVE>
int find_structural_bits(const uint8_t *buf, size_t len, simdjson::ParsedJson &pj, size_t offset = 0);

template <Architecture T = Architecture::NATIVE>
int find_structural_bits(const char *buf, size_t len, simdjson::ParsedJson &pj, size_t offset = 0) {
  return find_structural_bits((const uint8_t *)buf, len, pj, offset);
}

}; // namespace simdjson

#endif
