#pragma once

using namespace System;

namespace GarlicoinHashWrapper {

    public ref class HashFunctions
    {
    public:
        static array<Byte>^ SumLyra2REv2(array<Byte>^ input);
        static array<Byte>^ SumLyra2RE(array<Byte>^ input);
        static array<Byte>^ SumScryptN(array<Byte>^ input);
        static array<Byte>^ SumAllium(array<Byte>^ input);
    };
}
