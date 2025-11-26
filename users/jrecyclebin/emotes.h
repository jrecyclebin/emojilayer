#define IBUS_MACRO(z)              \
    {                              \
        SEND_STRING(SS_RCTL("U")); \
        SEND_STRING(z "\n");       \
    }
#define EMOTE_UH()           \
    {                        \
        IBUS_MACRO("1f914"); \
    }
#define EMOTE_FROG()         \
    {                        \
        IBUS_MACRO("208d");  \
        IBUS_MACRO("1d110"); \
        IBUS_MACRO("fe3f");  \
        IBUS_MACRO("1d110"); \
        IBUS_MACRO("208e");  \
    }
#define EMOTE_HI_WAVE()      \
    {                        \
        IBUS_MACRO("1f44b"); \
    }
#define EMOTE_CRIKEY()      \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("ff1b"); \
        IBUS_MACRO("ffe3"); \
        IBUS_MACRO("3c9");  \
        IBUS_MACRO("ffe3"); \
        IBUS_MACRO("29");   \
    }
#define EMOTE_DAMN()       \
    {                      \
        IBUS_MACRO("ca0"); \
        IBUS_MACRO("5f");  \
        IBUS_MACRO("ca0"); \
    }
#define EMOTE_TIGHT()       \
    {                       \
        IBUS_MACRO("d26");  \
        IBUS_MACRO("d4d");  \
        IBUS_MACRO("d26");  \
        IBUS_MACRO("d3f");  \
        IBUS_MACRO("28");   \
        IBUS_MACRO("3160"); \
        IBUS_MACRO("fe4f"); \
        IBUS_MACRO("3160"); \
        IBUS_MACRO("29");   \
        IBUS_MACRO("20");   \
    }
#define EMOTE_CLOWN()        \
    {                        \
        IBUS_MACRO("1f921"); \
    }
#define EMOTE_TADA()         \
    {                        \
        IBUS_MACRO("1f389"); \
    }
#define EMOTE_ZZZ()         \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("11c2"); \
        IBUS_MACRO("5f");   \
        IBUS_MACRO("11c2"); \
        IBUS_MACRO("7c");   \
        IBUS_MACRO("7c");   \
        IBUS_MACRO("7c");   \
        IBUS_MACRO("29");   \
    }
#define EMOTE_POINT_RIGHT()  \
    {                        \
        IBUS_MACRO("1f449"); \
    }
#define EMOTE_JOY()          \
    {                        \
        IBUS_MACRO("1f602"); \
    }
#define EMOTE_LOVE()         \
    {                        \
        IBUS_MACRO("1f970"); \
    }
#define EMOTE_KILLED()       \
    {                        \
        IBUS_MACRO("1f480"); \
    }
#define EMOTE_POINT_LEFT()   \
    {                        \
        IBUS_MACRO("1f448"); \
    }
#define EMOTE_QUIET()       \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("2022"); \
        IBUS_MACRO("301");  \
        IBUS_MACRO("32f");  \
        IBUS_MACRO("20");   \
        IBUS_MACRO("2083"); \
        IBUS_MACRO("20");   \
        IBUS_MACRO("2022"); \
        IBUS_MACRO("300");  \
        IBUS_MACRO("32f");  \
        IBUS_MACRO("29");   \
        IBUS_MACRO("20");   \
    }
#define EMOTE_FROG_AAH()     \
    {                        \
        IBUS_MACRO("208d");  \
        IBUS_MACRO("1d110"); \
        IBUS_MACRO("2a4c");  \
        IBUS_MACRO("1d110"); \
        IBUS_MACRO("208e");  \
    }
#define EMOTE_NO()          \
    {                       \
        IBUS_MACRO("270b"); \
        IBUS_MACRO("28");   \
        IBUS_MACRO("23d5"); \
        IBUS_MACRO("29");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("3c");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("6e");   \
        IBUS_MACRO("6f");   \
        IBUS_MACRO("2e");   \
    }
#define EMOTE_HAND_THUMB_DOWN() \
    {                           \
        IBUS_MACRO("1f44e");    \
    }
#define EMOTE_HAND_THUMB_UP() \
    {                         \
        IBUS_MACRO("1f44d");  \
    }
#define EMOTE_JABSCO()       \
    {                        \
        IBUS_MACRO("1f574"); \
        IBUS_MACRO("fe0f");  \
    }
#define EMOTE_FROG_OOO()    \
    {                       \
        IBUS_MACRO("25d4"); \
        IBUS_MACRO("25cb"); \
        IBUS_MACRO("25d4"); \
    }
#define EMOTE_NINE()        \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("30ce"); \
        IBUS_MACRO("5f");   \
        IBUS_MACRO("3c");   \
        IBUS_MACRO("3002"); \
        IBUS_MACRO("29");   \
    }
#define EMOTE_BIRDIE()      \
    {                       \
        IBUS_MACRO("25d4"); \
        IBUS_MACRO("32f");  \
        IBUS_MACRO("25d4"); \
    }
#define EMOTE_MMM()          \
    {                        \
        IBUS_MACRO("1f60b"); \
    }
#define EMOTE_FIRE()         \
    {                        \
        IBUS_MACRO("1f525"); \
    }
#define EMOTE_DAFUQ()       \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("b208"); \
        IBUS_MACRO("5f");   \
        IBUS_MACRO("b208"); \
        IBUS_MACRO("29");   \
    }
#define EMOTE_NEUTRAL_FACE() \
    {                        \
        IBUS_MACRO("1f610"); \
    }
#define EMOTE_SMILE()        \
    {                        \
        IBUS_MACRO("1f60a"); \
    }
#define EMOTE_POOP()         \
    {                        \
        IBUS_MACRO("1f4a9"); \
    }
#define EMOTE_ATTN()        \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("2579"); \
        IBUS_MACRO("20");   \
        IBUS_MACRO("2d");   \
        IBUS_MACRO("2579"); \
        IBUS_MACRO("29");   \
        IBUS_MACRO("3f");   \
    }
#define EMOTE_EXIT()        \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("256f"); \
        IBUS_MACRO("b0");   \
        IBUS_MACRO("25a1"); \
        IBUS_MACRO("b0");   \
        IBUS_MACRO("ff09"); \
        IBUS_MACRO("256f"); \
        IBUS_MACRO("20");   \
    }
#define EMOTE_REDONK()      \
    {                       \
        IBUS_MACRO("252c"); \
        IBUS_MACRO("2534"); \
        IBUS_MACRO("252c"); \
        IBUS_MACRO("2534"); \
        IBUS_MACRO("2524"); \
        IBUS_MACRO("28");   \
        IBUS_MACRO("ff65"); \
        IBUS_MACRO("5f");   \
        IBUS_MACRO("251c"); \
        IBUS_MACRO("252c"); \
        IBUS_MACRO("2534"); \
        IBUS_MACRO("252c"); \
        IBUS_MACRO("2534"); \
    }
#define EMOTE_VICTORY()     \
    {                       \
        IBUS_MACRO("270c"); \
        IBUS_MACRO("fe0f"); \
    }
#define EMOTE_ERNIE()       \
    {                       \
        IBUS_MACRO("1555"); \
        IBUS_MACRO("28");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("141b"); \
        IBUS_MACRO("20");   \
        IBUS_MACRO("29");   \
        IBUS_MACRO("1557"); \
        IBUS_MACRO("20");   \
    }
#define EMOTE_WOWEE()       \
    {                       \
        IBUS_MACRO("2570"); \
        IBUS_MACRO("28");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("361");  \
        IBUS_MACRO("b0");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("35c");  \
        IBUS_MACRO("296");  \
        IBUS_MACRO("20");   \
        IBUS_MACRO("361");  \
        IBUS_MACRO("b0");   \
        IBUS_MACRO("20");   \
        IBUS_MACRO("29");   \
        IBUS_MACRO("3064"); \
        IBUS_MACRO("2500"); \
        IBUS_MACRO("2500"); \
        IBUS_MACRO("2606"); \
        IBUS_MACRO("2a");   \
        IBUS_MACRO("3a");   \
        IBUS_MACRO("30fb"); \
        IBUS_MACRO("ff9f"); \
        IBUS_MACRO("20");   \
    }
#define EMOTE_YIKES()        \
    {                        \
        IBUS_MACRO("1f605"); \
    }
#define EMOTE_GOOD_GAME()   \
    {                       \
        IBUS_MACRO("d26");  \
        IBUS_MACRO("d4d");  \
        IBUS_MACRO("d26");  \
        IBUS_MACRO("d3f");  \
        IBUS_MACRO("28");   \
        IBUS_MACRO("ff61"); \
        IBUS_MACRO("2022"); \
        IBUS_MACRO("300");  \
        IBUS_MACRO("20");   \
        IBUS_MACRO("15dc"); \
        IBUS_MACRO("3c");   \
        IBUS_MACRO("29");   \
    }
#define EMOTE_HAND_CLAP()    \
    {                        \
        IBUS_MACRO("1f44f"); \
    }
#define EMOTE_FROG_SAD()    \
    {                       \
        IBUS_MACRO("28");   \
        IBUS_MACRO("b87");  \
        IBUS_MACRO("fe4f"); \
        IBUS_MACRO("b87");  \
        IBUS_MACRO("60");   \
        IBUS_MACRO("ff61"); \
        IBUS_MACRO("29");   \
    }

// Hiragana characters (3040-309F)
#define HIRAGANA_A()        \
    {                       \
        IBUS_MACRO("3042"); \
    }
#define HIRAGANA_I()        \
    {                       \
        IBUS_MACRO("3044"); \
    }
#define HIRAGANA_U()        \
    {                       \
        IBUS_MACRO("3046"); \
    }
#define HIRAGANA_E()        \
    {                       \
        IBUS_MACRO("3048"); \
    }
#define HIRAGANA_O()        \
    {                       \
        IBUS_MACRO("304a"); \
    }
#define HIRAGANA_KA()       \
    {                       \
        IBUS_MACRO("304b"); \
    }
#define HIRAGANA_GA()       \
    {                       \
        IBUS_MACRO("304c"); \
    }
#define HIRAGANA_KI()       \
    {                       \
        IBUS_MACRO("304d"); \
    }
#define HIRAGANA_GI()       \
    {                       \
        IBUS_MACRO("304e"); \
    }
#define HIRAGANA_KU()       \
    {                       \
        IBUS_MACRO("304f"); \
    }
#define HIRAGANA_GU()       \
    {                       \
        IBUS_MACRO("3050"); \
    }
#define HIRAGANA_KE()       \
    {                       \
        IBUS_MACRO("3051"); \
    }
#define HIRAGANA_GE()       \
    {                       \
        IBUS_MACRO("3052"); \
    }
#define HIRAGANA_KO()       \
    {                       \
        IBUS_MACRO("3053"); \
    }
#define HIRAGANA_GO()       \
    {                       \
        IBUS_MACRO("3054"); \
    }
#define HIRAGANA_SA()       \
    {                       \
        IBUS_MACRO("3055"); \
    }
#define HIRAGANA_ZA()       \
    {                       \
        IBUS_MACRO("3056"); \
    }
#define HIRAGANA_SHI()      \
    {                       \
        IBUS_MACRO("3057"); \
    }
#define HIRAGANA_JI()       \
    {                       \
        IBUS_MACRO("3058"); \
    }
#define HIRAGANA_SU()       \
    {                       \
        IBUS_MACRO("3059"); \
    }
#define HIRAGANA_ZU()       \
    {                       \
        IBUS_MACRO("305a"); \
    }
#define HIRAGANA_SE()       \
    {                       \
        IBUS_MACRO("305b"); \
    }
#define HIRAGANA_ZE()       \
    {                       \
        IBUS_MACRO("305c"); \
    }
#define HIRAGANA_SO()       \
    {                       \
        IBUS_MACRO("305d"); \
    }
#define HIRAGANA_ZO()       \
    {                       \
        IBUS_MACRO("305e"); \
    }
#define HIRAGANA_TA()       \
    {                       \
        IBUS_MACRO("305f"); \
    }
#define HIRAGANA_DA()       \
    {                       \
        IBUS_MACRO("3060"); \
    }
#define HIRAGANA_CHI()      \
    {                       \
        IBUS_MACRO("3061"); \
    }
#define HIRAGANA_DI()       \
    {                       \
        IBUS_MACRO("3062"); \
    }
#define HIRAGANA_TSU()      \
    {                       \
        IBUS_MACRO("3064"); \
    }
#define HIRAGANA_DZU()      \
    {                       \
        IBUS_MACRO("3065"); \
    }
#define HIRAGANA_SMALL_TSU() \
    {                        \
        IBUS_MACRO("3063");  \
    }
#define HIRAGANA_TE()       \
    {                       \
        IBUS_MACRO("3066"); \
    }
#define HIRAGANA_DE()       \
    {                       \
        IBUS_MACRO("3067"); \
    }
#define HIRAGANA_TO()       \
    {                       \
        IBUS_MACRO("3068"); \
    }
#define HIRAGANA_DO()       \
    {                       \
        IBUS_MACRO("3069"); \
    }
#define HIRAGANA_NA()       \
    {                       \
        IBUS_MACRO("306a"); \
    }
#define HIRAGANA_NI()       \
    {                       \
        IBUS_MACRO("306b"); \
    }
#define HIRAGANA_NU()       \
    {                       \
        IBUS_MACRO("306c"); \
    }
#define HIRAGANA_NE()       \
    {                       \
        IBUS_MACRO("306d"); \
    }
#define HIRAGANA_NO()       \
    {                       \
        IBUS_MACRO("306e"); \
    }
#define HIRAGANA_HA()       \
    {                       \
        IBUS_MACRO("306f"); \
    }
#define HIRAGANA_BA()       \
    {                       \
        IBUS_MACRO("3070"); \
    }
#define HIRAGANA_PA()       \
    {                       \
        IBUS_MACRO("3071"); \
    }
#define HIRAGANA_HI()       \
    {                       \
        IBUS_MACRO("3072"); \
    }
#define HIRAGANA_BI()       \
    {                       \
        IBUS_MACRO("3073"); \
    }
#define HIRAGANA_PI()       \
    {                       \
        IBUS_MACRO("3074"); \
    }
#define HIRAGANA_FU()       \
    {                       \
        IBUS_MACRO("3075"); \
    }
#define HIRAGANA_BU()       \
    {                       \
        IBUS_MACRO("3076"); \
    }
#define HIRAGANA_PU()       \
    {                       \
        IBUS_MACRO("3077"); \
    }
#define HIRAGANA_HE()       \
    {                       \
        IBUS_MACRO("3078"); \
    }
#define HIRAGANA_BE()       \
    {                       \
        IBUS_MACRO("3079"); \
    }
#define HIRAGANA_PE()       \
    {                       \
        IBUS_MACRO("307a"); \
    }
#define HIRAGANA_HO()       \
    {                       \
        IBUS_MACRO("307b"); \
    }
#define HIRAGANA_BO()       \
    {                       \
        IBUS_MACRO("307c"); \
    }
#define HIRAGANA_PO()       \
    {                       \
        IBUS_MACRO("307d"); \
    }
#define HIRAGANA_MA()       \
    {                       \
        IBUS_MACRO("307e"); \
    }
#define HIRAGANA_MI()       \
    {                       \
        IBUS_MACRO("307f"); \
    }
#define HIRAGANA_MU()       \
    {                       \
        IBUS_MACRO("3080"); \
    }
#define HIRAGANA_ME()       \
    {                       \
        IBUS_MACRO("3081"); \
    }
#define HIRAGANA_MO()       \
    {                       \
        IBUS_MACRO("3082"); \
    }
#define HIRAGANA_YA()       \
    {                       \
        IBUS_MACRO("3084"); \
    }
#define HIRAGANA_YU()       \
    {                       \
        IBUS_MACRO("3086"); \
    }
#define HIRAGANA_YO()       \
    {                       \
        IBUS_MACRO("3088"); \
    }
#define HIRAGANA_SMALL_YA() \
    {                       \
        IBUS_MACRO("3083"); \
    }
#define HIRAGANA_SMALL_YU() \
    {                       \
        IBUS_MACRO("3085"); \
    }
#define HIRAGANA_SMALL_YO() \
    {                       \
        IBUS_MACRO("3087"); \
    }
#define HIRAGANA_RA()       \
    {                       \
        IBUS_MACRO("3089"); \
    }
#define HIRAGANA_RI()       \
    {                       \
        IBUS_MACRO("308a"); \
    }
#define HIRAGANA_RU()       \
    {                       \
        IBUS_MACRO("308b"); \
    }
#define HIRAGANA_RE()       \
    {                       \
        IBUS_MACRO("308c"); \
    }
#define HIRAGANA_RO()       \
    {                       \
        IBUS_MACRO("308d"); \
    }
#define HIRAGANA_WA()       \
    {                       \
        IBUS_MACRO("308f"); \
    }
#define HIRAGANA_WI()       \
    {                       \
        IBUS_MACRO("3090"); \
    }
#define HIRAGANA_WE()       \
    {                       \
        IBUS_MACRO("3091"); \
    }
#define HIRAGANA_WO()       \
    {                       \
        IBUS_MACRO("3092"); \
    }
#define HIRAGANA_N()        \
    {                       \
        IBUS_MACRO("3093"); \
    }
#define HIRAGANA_SMALL_A()  \
    {                       \
        IBUS_MACRO("3041"); \
    }
#define HIRAGANA_SMALL_I()  \
    {                       \
        IBUS_MACRO("3043"); \
    }
#define HIRAGANA_SMALL_U()  \
    {                       \
        IBUS_MACRO("3045"); \
    }
#define HIRAGANA_SMALL_E()  \
    {                       \
        IBUS_MACRO("3047"); \
    }
#define HIRAGANA_SMALL_O()  \
    {                       \
        IBUS_MACRO("3049"); \
    }
#define HIRAGANA_SMALL_KE() \
    {                       \
        IBUS_MACRO("3095"); \
    }
#define HIRAGANA_SMALL_WA() \
    {                       \
        IBUS_MACRO("308e"); \
    }

// Katakana characters (30A0-30FF)
#define KATAKANA_A()        \
    {                       \
        IBUS_MACRO("30a2"); \
    }
#define KATAKANA_I()        \
    {                       \
        IBUS_MACRO("30a4"); \
    }
#define KATAKANA_U()        \
    {                       \
        IBUS_MACRO("30a6"); \
    }
#define KATAKANA_E()        \
    {                       \
        IBUS_MACRO("30a8"); \
    }
#define KATAKANA_O()        \
    {                       \
        IBUS_MACRO("30aa"); \
    }
#define KATAKANA_KA()       \
    {                       \
        IBUS_MACRO("30ab"); \
    }
#define KATAKANA_GA()       \
    {                       \
        IBUS_MACRO("30ac"); \
    }
#define KATAKANA_KI()       \
    {                       \
        IBUS_MACRO("30ad"); \
    }
#define KATAKANA_GI()       \
    {                       \
        IBUS_MACRO("30ae"); \
    }
#define KATAKANA_KU()       \
    {                       \
        IBUS_MACRO("30af"); \
    }
#define KATAKANA_GU()       \
    {                       \
        IBUS_MACRO("30b0"); \
    }
#define KATAKANA_KE()       \
    {                       \
        IBUS_MACRO("30b1"); \
    }
#define KATAKANA_GE()       \
    {                       \
        IBUS_MACRO("30b2"); \
    }
#define KATAKANA_KO()       \
    {                       \
        IBUS_MACRO("30b3"); \
    }
#define KATAKANA_GO()       \
    {                       \
        IBUS_MACRO("30b4"); \
    }
#define KATAKANA_SA()       \
    {                       \
        IBUS_MACRO("30b5"); \
    }
#define KATAKANA_ZA()       \
    {                       \
        IBUS_MACRO("30b6"); \
    }
#define KATAKANA_SHI()      \
    {                       \
        IBUS_MACRO("30b7"); \
    }
#define KATAKANA_JI()       \
    {                       \
        IBUS_MACRO("30b8"); \
    }
#define KATAKANA_SU()       \
    {                       \
        IBUS_MACRO("30b9"); \
    }
#define KATAKANA_ZU()       \
    {                       \
        IBUS_MACRO("30ba"); \
    }
#define KATAKANA_SE()       \
    {                       \
        IBUS_MACRO("30bb"); \
    }
#define KATAKANA_ZE()       \
    {                       \
        IBUS_MACRO("30bc"); \
    }
#define KATAKANA_SO()       \
    {                       \
        IBUS_MACRO("30bd"); \
    }
#define KATAKANA_ZO()       \
    {                       \
        IBUS_MACRO("30be"); \
    }
#define KATAKANA_TA()       \
    {                       \
        IBUS_MACRO("30bf"); \
    }
#define KATAKANA_DA()       \
    {                       \
        IBUS_MACRO("30c0"); \
    }
#define KATAKANA_CHI()      \
    {                       \
        IBUS_MACRO("30c1"); \
    }
#define KATAKANA_DI()       \
    {                       \
        IBUS_MACRO("30c2"); \
    }
#define KATAKANA_TSU()      \
    {                       \
        IBUS_MACRO("30c4"); \
    }
#define KATAKANA_DZU()      \
    {                       \
        IBUS_MACRO("30c5"); \
    }
#define KATAKANA_SMALL_TSU() \
    {                        \
        IBUS_MACRO("30c3");  \
    }
#define KATAKANA_TE()       \
    {                       \
        IBUS_MACRO("30c6"); \
    }
#define KATAKANA_DE()       \
    {                       \
        IBUS_MACRO("30c7"); \
    }
#define KATAKANA_TO()       \
    {                       \
        IBUS_MACRO("30c8"); \
    }
#define KATAKANA_DO()       \
    {                       \
        IBUS_MACRO("30c9"); \
    }
#define KATAKANA_NA()       \
    {                       \
        IBUS_MACRO("30ca"); \
    }
#define KATAKANA_NI()       \
    {                       \
        IBUS_MACRO("30cb"); \
    }
#define KATAKANA_NU()       \
    {                       \
        IBUS_MACRO("30cc"); \
    }
#define KATAKANA_NE()       \
    {                       \
        IBUS_MACRO("30cd"); \
    }
#define KATAKANA_NO()       \
    {                       \
        IBUS_MACRO("30ce"); \
    }
#define KATAKANA_HA()       \
    {                       \
        IBUS_MACRO("30cf"); \
    }
#define KATAKANA_BA()       \
    {                       \
        IBUS_MACRO("30d0"); \
    }
#define KATAKANA_PA()       \
    {                       \
        IBUS_MACRO("30d1"); \
    }
#define KATAKANA_HI()       \
    {                       \
        IBUS_MACRO("30d2"); \
    }
#define KATAKANA_BI()       \
    {                       \
        IBUS_MACRO("30d3"); \
    }
#define KATAKANA_PI()       \
    {                       \
        IBUS_MACRO("30d4"); \
    }
#define KATAKANA_FU()       \
    {                       \
        IBUS_MACRO("30d5"); \
    }
#define KATAKANA_BU()       \
    {                       \
        IBUS_MACRO("30d6"); \
    }
#define KATAKANA_PU()       \
    {                       \
        IBUS_MACRO("30d7"); \
    }
#define KATAKANA_HE()       \
    {                       \
        IBUS_MACRO("30d8"); \
    }
#define KATAKANA_BE()       \
    {                       \
        IBUS_MACRO("30d9"); \
    }
#define KATAKANA_PE()       \
    {                       \
        IBUS_MACRO("30da"); \
    }
#define KATAKANA_HO()       \
    {                       \
        IBUS_MACRO("30db"); \
    }
#define KATAKANA_BO()       \
    {                       \
        IBUS_MACRO("30dc"); \
    }
#define KATAKANA_PO()       \
    {                       \
        IBUS_MACRO("30dd"); \
    }
#define KATAKANA_MA()       \
    {                       \
        IBUS_MACRO("30de"); \
    }
#define KATAKANA_MI()       \
    {                       \
        IBUS_MACRO("30df"); \
    }
#define KATAKANA_MU()       \
    {                       \
        IBUS_MACRO("30e0"); \
    }
#define KATAKANA_ME()       \
    {                       \
        IBUS_MACRO("30e1"); \
    }
#define KATAKANA_MO()       \
    {                       \
        IBUS_MACRO("30e2"); \
    }
#define KATAKANA_YA()       \
    {                       \
        IBUS_MACRO("30e4"); \
    }
#define KATAKANA_YU()       \
    {                       \
        IBUS_MACRO("30e6"); \
    }
#define KATAKANA_YO()       \
    {                       \
        IBUS_MACRO("30e8"); \
    }
#define KATAKANA_SMALL_YA() \
    {                       \
        IBUS_MACRO("30e3"); \
    }
#define KATAKANA_SMALL_YU() \
    {                       \
        IBUS_MACRO("30e5"); \
    }
#define KATAKANA_SMALL_YO() \
    {                       \
        IBUS_MACRO("30e7"); \
    }
#define KATAKANA_RA()       \
    {                       \
        IBUS_MACRO("30e9"); \
    }
#define KATAKANA_RI()       \
    {                       \
        IBUS_MACRO("30ea"); \
    }
#define KATAKANA_RU()       \
    {                       \
        IBUS_MACRO("30eb"); \
    }
#define KATAKANA_RE()       \
    {                       \
        IBUS_MACRO("30ec"); \
    }
#define KATAKANA_RO()       \
    {                       \
        IBUS_MACRO("30ed"); \
    }
#define KATAKANA_WA()       \
    {                       \
        IBUS_MACRO("30ef"); \
    }
#define KATAKANA_WI()       \
    {                       \
        IBUS_MACRO("30f0"); \
    }
#define KATAKANA_WE()       \
    {                       \
        IBUS_MACRO("30f1"); \
    }
#define KATAKANA_WO()       \
    {                       \
        IBUS_MACRO("30f2"); \
    }
#define KATAKANA_N()        \
    {                       \
        IBUS_MACRO("30f3"); \
    }
#define KATAKANA_SMALL_A()  \
    {                       \
        IBUS_MACRO("30a1"); \
    }
#define KATAKANA_SMALL_I()  \
    {                       \
        IBUS_MACRO("30a3"); \
    }
#define KATAKANA_SMALL_U()  \
    {                       \
        IBUS_MACRO("30a5"); \
    }
#define KATAKANA_SMALL_E()  \
    {                       \
        IBUS_MACRO("30a7"); \
    }
#define KATAKANA_SMALL_O()  \
    {                       \
        IBUS_MACRO("30a9"); \
    }
#define KATAKANA_SMALL_KE() \
    {                       \
        IBUS_MACRO("30f6"); \
    }
#define KATAKANA_SMALL_WA() \
    {                       \
        IBUS_MACRO("30ee"); \
    }
#define KATAKANA_VU()       \
    {                       \
        IBUS_MACRO("30f4"); \
    }
#define KATAKANA_VA()       \
    {                       \
        IBUS_MACRO("30f7"); \
    }
#define KATAKANA_VI()       \
    {                       \
        IBUS_MACRO("30f8"); \
    }
#define KATAKANA_VE()       \
    {                       \
        IBUS_MACRO("30f9"); \
    }
#define KATAKANA_VO()       \
    {                       \
        IBUS_MACRO("30fa"); \
    }

#define EMOTE(name)                  \
    case EMOJI_##name:               \
        if (record->event.pressed) { \
            EMOTE_##name();          \
        }                            \
        return false

#define JP(name)                     \
    case JPH_##name:                 \
        if (record->event.pressed) { \
            if (get_mods() & MOD_MASK_SHIFT) { \
                KATAKANA_##name();   \
            } else {                 \
                HIRAGANA_##name();   \
            }                        \
        }                            \
        return false
