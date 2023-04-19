#include <stdint.h>

uint16_t letobe16(uint16_t value)
{
    uint8_t *tmp = (uint8_t *) &value;
    return ((uint16_t) tmp[1] << 0)
         | ((uint16_t) tmp[0] << 8);
}
uint32_t letobe32(uint32_t value)
{
    uint8_t *tmp = (uint8_t *) &value;
    return ((uint32_t) tmp[3] << 0)
         | ((uint32_t) tmp[2] << 8)
         | ((uint32_t) tmp[1] << 16)
         | ((uint32_t) tmp[0] << 24);
}
uint64_t letobe64(uint64_t value)
{    
    uint8_t *tmp = (uint8_t *) &value;
    return ((uint64_t) tmp[7] << 0)
         | ((uint64_t) tmp[6] << 8)
         | ((uint64_t) tmp[5] << 16)
         | ((uint64_t) tmp[4] << 24)
         | ((uint64_t) tmp[3] << 32)
         | ((uint64_t) tmp[2] << 40)
         | ((uint64_t) tmp[1] << 48)
         | ((uint64_t) tmp[0] << 56);
}

uint16_t betole16(uint16_t value)
{
    return letobe16(value);
}
uint32_t betole32(uint32_t value)
{
    return letobe32(value);
}
uint64_t betole64(uint64_t value)
{
    return letobe64(value);
}