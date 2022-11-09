cmake_minimum_required(VERSION 3.5)

set(LMIC_SRCS
    "src/lmic/radio.c"
    "src/lmic/lmic_us915.c"
    "src/lmic/lmic.c"
    "src/lmic/lmic_in866.c"
    "src/lmic/lmic_kr920.c"
    "src/lmic/lmic_eu868.c"
    "src/lmic/lmic_compliance.c"
    "src/lmic/lmic_eu_like.c"
    "src/lmic/lmic_as923.c"
    "src/lmic/lmic_util.c"
    "src/lmic/oslmic.c"
    "src/lmic/lmic_us_like.c"
    "src/lmic/lmic_au915.c"
    "src/lmic/lmic_channelshuffle.c"
)

set(HAL_SRCS
    "src/hal/getpinmap_thisboard.cpp"
    "src/hal/getpinmap_heltec_lora32.cpp"
    "src/hal/hal.cpp"
    "src/hal/getpinmap_catena4551.cpp"
    "src/hal/getpinmap_catena4801.cpp"
    "src/hal/getpinmap_catena4630.cpp"
    "src/hal/getpinmap_catena4618.cpp"
    "src/hal/getpinmap_catena4802.cpp"
    "src/hal/getpinmap_disco_l072cs_lrwan1.cpp"
    "src/hal/getpinmap_ttgo_lora32_v2.1.cpp"
    "src/hal/getpinmap_featherm0lora.cpp"
    "src/hal/getpinmap_catena4420.cpp"
    "src/hal/getpinmap_catena4612.cpp"
    "src/hal/getpinmap_catena4611.cpp"
    "src/hal/getpinmap_catena4610.cpp"
    "src/hal/getpinmap_ttgo_lora32_v1.cpp"
    "src/hal/getpinmap_catena4617.cpp"
    "src/hal/getpinmap_feather32u4lora.cpp"
)

set(AES_SRCS
    "src/aes/lmic.c"
    "src/aes/ideetron/AES-128_V10.cpp"
    "src/aes/other.c"
)

set(srcs ${LMIC_SRCS} ${HAL_SRCS} ${AES_SRCS})

idf_component_register(
    SRCS ${srcs}
    INCLUDE_DIRS "src"
    REQUIRES arduino)

project(LMIC_LoraWAN)
