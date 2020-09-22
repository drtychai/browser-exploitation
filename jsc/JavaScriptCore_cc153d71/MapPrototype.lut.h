// Automatically generated from JavaScriptCore/runtime/MapPrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex mapPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue mapPrototypeTableValues[1] = {
   { "forEach", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(mapPrototypeForEachCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable mapPrototypeTable =
    { 1, 1, false, nullptr, mapPrototypeTableValues, mapPrototypeTableIndex };

} // namespace JSC
