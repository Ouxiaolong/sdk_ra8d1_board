#ifndef USB_PCDC_H_
#define USB_PCDC_H_

#include "board_cfg.h"

/*******************************************************************************************************************//**
 * @ingroup hal_entry
 * @{
 **********************************************************************************************************************/


#define KIT_INFO_PRIMARY_TEXT                "\r\n 1. KIT INFORMATION \r\n\r\n a) Kit name: \t\t\t\t"\
                                              ""KIT_NAME_MACRO""\
                                             "\r\n b) Kit ordering part number:\t\t"\
                                              ""KIT_PARTNUM_MACRO""\


#define LINE_CODING_LENGTH          (0x07U)
#define ADCTEMP_AS_C(a)             ((((float)(a)) * 0.196551f) - 277.439f)
#define ADCTEMP_AS_F(a)             ((((float)(a)) * 0.353793f) - 467.39f)
#define READ_BUF_SIZE               (8U)

void usb_pcdc_app(void *parameter);

/** @} */
#endif /* USB_PCDC_H_ */
