// Automatically generated from JavaScriptCore/runtime/IntlLocalePrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex localePrototypeTableIndex[36] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, 35 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { 11, -1 },
    { 0, 32 },
    { -1, -1 },
    { 2, 33 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { 8, 34 },
    { 9, -1 },
    { 12, -1 },
};

static const struct HashTableValue localePrototypeTableValues[13] = {
   { "maximize", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeFuncMaximize), (intptr_t)(0) } },
   { "minimize", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeFuncMinimize), (intptr_t)(0) } },
   { "toString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeFuncToString), (intptr_t)(0) } },
   { "baseName", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterBaseName), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "calendar", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterCalendar), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "caseFirst", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterCaseFirst), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "collation", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterCollation), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "hourCycle", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterHourCycle), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "numeric", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterNumeric), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "numberingSystem", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterNumberingSystem), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "language", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterLanguage), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "script", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterScript), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "region", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlLocalePrototypeGetterRegion), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
};

static const struct HashTable localePrototypeTable =
    { 13, 31, true, nullptr, localePrototypeTableValues, localePrototypeTableIndex };

} // namespace JSC
