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

#endif // UBXCHECK_H
