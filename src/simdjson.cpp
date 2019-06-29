#include <map>
#include "simdjson/simdjson.h"

namespace SimdJson {
const std::map<int, const std::string> errorStrings = {
    {simdjson::SUCCESS, "No errors"},
    {simdjson::CAPACITY, "This ParsedJson can't support a document that big"},
    {simdjson::MEMALLOC, "Error allocating memory, we're most likely out of memory"},
    {simdjson::TAPE_ERROR, "Something went wrong while writing to the tape"},
    {simdjson::STRING_ERROR, "Problem while parsing a string"},
    {simdjson::T_ATOM_ERROR, "Problem while parsing an atom starting with the letter 't'"},
    {simdjson::F_ATOM_ERROR, "Problem while parsing an atom starting with the letter 'f'"},
    {simdjson::N_ATOM_ERROR, "Problem while parsing an atom starting with the letter 'n'"},
    {simdjson::NUMBER_ERROR, "Problem while parsing a number"},
    {simdjson::UTF8_ERROR, "The input is not valid UTF-8"},
    {simdjson::UNITIALIZED, "Unitialized"},
    {simdjson::EMPTY, "Empty"},
    {simdjson::UNESCAPED_CHARS, "Within strings, some characters must be escapted, we found unescapted characters"},
    {simdjson::UNEXPECTED_ERROR, "Unexpected error, consider reporting this problem as you may have found a bug in simdjson"},
};

const std::string& simdjson::errorMsg(const int errorCode) {
    return errorStrings.at(errorCode);
}
}
