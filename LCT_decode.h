#ifndef LCONSOLETEX_V1_DECODE
#define LCONSOLETEX_V1_DECODE

#include <stdint.h>
#include <stddef.h>

struct imageLCT_C {
    unsigned char* raw;
    size_t raw_size;
    uint32_t da;
    uint32_t de;
    int C;
};

#ifdef __cplusplus
extern "C" {
#endif

extern struct imageLCT;
extern imageLCT importLCT_data;
extern imageLCT_C dataCpp_C;

#ifdef __cplusplus
}
#endif

#endif // LCT Header