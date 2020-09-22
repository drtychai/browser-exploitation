// Automatically generated from JavaScriptCore/wasm/js/JSWebAssembly.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex webAssemblyTableIndex[33] = {
    { -1, -1 },
    { -1, -1 },
    { 0, 32 },
    { -1, -1 },
    { -1, -1 },
    { 8, -1 },
    { 10, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { 6, -1 },
    { -1, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 9, -1 },
    { 1, -1 },
};

static const struct HashTableValue webAssemblyTableValues[11] = {
   { "CompileError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyCompileError), (intptr_t)(0) } },
   { "Global", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyGlobal), (intptr_t)(0) } },
   { "Instance", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyInstance), (intptr_t)(0) } },
   { "LinkError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyLinkError), (intptr_t)(0) } },
   { "Memory", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyMemory), (intptr_t)(0) } },
   { "Module", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyModule), (intptr_t)(0) } },
   { "RuntimeError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyRuntimeError), (intptr_t)(0) } },
   { "Table", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyTable), (intptr_t)(0) } },
   { "compile", static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyCompileFunc), (intptr_t)(1) } },
   { "instantiate", static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyInstantiateFunc), (intptr_t)(1) } },
   { "validate", static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyValidateFunc), (intptr_t)(1) } },
};

static const struct HashTable webAssemblyTable =
    { 11, 31, false, nullptr, webAssemblyTableValues, webAssemblyTableIndex };

} // namespace JSC
