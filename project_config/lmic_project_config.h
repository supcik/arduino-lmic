#if defined(ESP_PLATFORM)

#include "sdkconfig.h"

#if defined(CONFIG_LMIC_FREQ_USE_EU_868)
#define CFG_eu868 1
#elif defined(CONFIG_LMIC_FREQ_USE_US_915)
#define CFG_au915 1
#endif

#if defined(CONFIG_LMIC_USE_SX1276)
#define CFG_sx1276_radio 1
#elif defined(CONFIG_LMIC_USE_SX1272)
#define CFG_sx1272_radio 1
#endif

#if defined(CONFIG_LMIC_LORAWAN_VERSION_1_0_2)
#define LMIC_LORAWAN_SPEC_VERSION LMIC_LORAWAN_SPEC_VERSION_1_0_2
#endif

#else
// project-specific definitions
// #define CFG_eu868 1
#define CFG_us915 1
// #define CFG_au915 1
// #define CFG_as923 1
//  #define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP      /* for as923-JP; also define CFG_as923 */
// #define CFG_kr920 1
// #define CFG_in866 1
#define CFG_sx1276_radio 1
// #define LMIC_USE_INTERRUPTS

#endif