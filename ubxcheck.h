//
// Created by bronislav on 10/28/22.
//

#ifndef UBXCHECK_H
#define UBXCHECK_H


typedef enum
{
    UBXCheck_OK = 0,
    UBXCheck_WrongPreamble,
    UBXCheck_WrongLength,
    UBXCheck_WrongChecksum
} UBXCheckResult;

/**
 * The method checks valid of message.
 *
 * @param buf pointer to buffer with message.
 * @param len buffer length restriction (to prevent segfault).
 * @return check status.
 */
UBXCheckResult UBXCheckMessage(uint8_t *buf, uint16_t len);

#endif // UBXCHECK_H
