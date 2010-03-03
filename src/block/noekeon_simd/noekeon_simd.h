/*
* Noekeon in SIMD
* (C) 2010 Jack Lloyd
*
* Distributed under the terms of the Botan license
*/

#ifndef BOTAN_NOEKEON_SIMD_H__
#define BOTAN_NOEKEON_SIMD_H__

#include <botan/noekeon.h>

namespace Botan {

/*
* Noekeon
*/
class BOTAN_DLL Noekeon_SIMD : public Noekeon
   {
   public:
      u32bit parallelism() const { return 8; }

      void encrypt_n(const byte in[], byte out[], u32bit blocks) const;
      void decrypt_n(const byte in[], byte out[], u32bit blocks) const;

      BlockCipher* clone() const { return new Noekeon_SIMD; }
   };

}

#endif