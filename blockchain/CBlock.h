#ifdef __C_BLOCK_INCLUDED__
#define __C_BLOCK_INCLUDED__
#include<string>
#include<openssl/sha.h>

namespace blockchain{
    class CBlock{
        private:
        unit8_t mHash[SHA256_DIGEST_LENGTH];
        unit8_t mPrevHash[SHA256_DIGEST_LENGTH];
        CBlock* mPrevHash;
        unit8_t mData;
        unit32_t mDataSize;
        time_t mCreatedTS;
        unit32_t mNounce;
        public:
        CBlock(CBlock* prevBlock);
        void calculateHash();
        unit8_t* getHash();
        





    }
}