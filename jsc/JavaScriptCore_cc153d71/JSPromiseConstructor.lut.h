// Automatically generated from JavaScriptCore/runtime/JSPromiseConstructor.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex promiseConstructorTableIndex[18] = {
    { 2, -1 },
    { -1, -1 },
    { 0, 16 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, 17 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { 5, -1 },
};

static const struct HashTableValue promiseConstructorTableValues[6] = {
   { "resolve", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorResolveCodeGenerator), (intptr_t)1 } },
   { "reject", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorRejectCodeGenerator), (intptr_t)1 } },
   { "race", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorRaceCodeGenerator), (intptr_t)1 } },
   { "all", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorAllCodeGenerator), (intptr_t)1 } },
   { "allSettled", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorAllSettledCodeGenerator), (intptr_t)1 } },
   { "any", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorAnyCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable promiseConstructorTable =
    { 6, 15, false, nullptr, promiseConstructorTableValues, promiseConstructorTableIndex };

} // namespace JSC
