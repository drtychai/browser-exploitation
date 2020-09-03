// Automatically generated from JavaScriptCore/runtime/IntlSegmenterPrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex segmenterPrototypeTableIndex[5] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 4 },
    { 1, -1 },
};

static const struct HashTableValue segmenterPrototypeTableValues[2] = {
   { "segment", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlSegmenterPrototypeFuncSegment), (intptr_t)(1) } },
   { "resolvedOptions", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlSegmenterPrototypeFuncResolvedOptions), (intptr_t)(0) } },
};

static const struct HashTable segmenterPrototypeTable =
    { 2, 3, false, nullptr, segmenterPrototypeTableValues, segmenterPrototypeTableIndex };

} // namespace JSC
