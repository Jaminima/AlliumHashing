#include "GarlicoinHashWrapper.h"
#include "garlicoin-hash.cc"

using namespace System::Runtime::InteropServices;

namespace GarlicoinHashWrapper {

    array<Byte>^ HashFunctions::SumLyra2REv2(array<Byte>^ input) {
        pin_ptr<Byte> pinnedInput = &input[0];
        char* nativeInput = reinterpret_cast<char*>(pinnedInput);
        char output[32];
        lyra2re2_hash(nativeInput, output);
        array<Byte>^ result = gcnew array<Byte>(32);
        Marshal::Copy(IntPtr(output), result, 0, 32);
        return result;
    }

    array<Byte>^ HashFunctions::SumLyra2RE(array<Byte>^ input) {
        pin_ptr<Byte> pinnedInput = &input[0];
        char* nativeInput = reinterpret_cast<char*>(pinnedInput);
        char output[32];
        lyra2re_hash(nativeInput, output);
        array<Byte>^ result = gcnew array<Byte>(32);
        Marshal::Copy(IntPtr(output), result, 0, 32);
        return result;
    }

    array<Byte>^ HashFunctions::SumScryptN(array<Byte>^ input) {
        pin_ptr<Byte> pinnedInput = &input[0];
        char* nativeInput = reinterpret_cast<char*>(pinnedInput);
        char output[32];
        scrypt_N_R_1_256(nativeInput, output, 2048, 1, 80);
        array<Byte>^ result = gcnew array<Byte>(32);
        Marshal::Copy(IntPtr(output), result, 0, 32);
        return result;
    }

    array<Byte>^ HashFunctions::SumAllium(array<Byte>^ input) {
        pin_ptr<Byte> pinnedInput = &input[0];
        char* nativeInput = reinterpret_cast<char*>(pinnedInput);
        char output[32];
        allium_hash(nativeInput, output);
        array<Byte>^ result = gcnew array<Byte>(32);
        Marshal::Copy(IntPtr(output), result, 0, 32);
        return result;
    }
}
