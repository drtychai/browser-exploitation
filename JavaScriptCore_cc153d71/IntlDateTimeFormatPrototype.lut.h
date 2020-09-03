// Automatically generated from JavaScriptCore/runtime/IntlDateTimeFormatPrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex dateTimeFormatPrototypeTableIndex[9] = {
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { 0, 8 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
};

static const struct HashTableValue dateTimeFormatPrototypeTableValues[4] = {
   { "format", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeGetterFormat), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "formatRange", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeFuncFormatRange), (intptr_t)(2) } },
   { "formatToParts", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeFuncFormatToParts), (intptr_t)(1) } },
   { "resolvedOptions", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeFuncResolvedOptions), (intptr_t)(0) } },
};

static const struct HashTable dateTimeFormatPrototypeTable =
    { 4, 7, true, nullptr, dateTimeFormatPrototypeTableValues, dateTimeFormatPrototypeTableIndex };

} // namespace JSC
