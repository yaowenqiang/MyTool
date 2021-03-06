#ifndef VSMSGDEFS_MACRO_H
#define VSMSGDEFS_MACRO_H

enum VSMSGDEFS_MACRO {
    VSRC_FCF_ELEMENTS_COMMAND_LINE = -101100,
    VSRC_FCF_ELEMENTS_STATUS_LINE = -101101,
    VSRC_FCF_ELEMENTS_SBCS_DBCS_SOURCE_WINDOWS = -101102,
    VSRC_FCF_ELEMENTS_HEX_SOURCE_WINDOWS = -101103,
    VSRC_FCF_ELEMENTS_UNICODE_SOURCE_WINDOWS = -101104,
    VSRC_FCF_ELEMENTS_FILE_MANAGER_WINDOWS = -101105,
    VSRC_FCF_ELEMENTS_PARAMETER_INFO = -101106,
    VSRC_FCF_ELEMENTS_PARAMETER_INFO_FIXED = -101107,
    VSRC_FCF_ELEMENTS_SELECTION_LIST = -101108,
    VSRC_FCF_ELEMENTS_MENU = -101109,
    VSRC_FCF_ELEMENTS_DIALOG = -101110,
    VSRC_FCF_ELEMENTS_MDI_CHILD_ICON = -101111,
    VSRC_FCF_ELEMENTS_MDI_CHILD_TITLE = -101112,
    VSRC_FCF_ELEMENTS_DIFF_EDITOR_WINDOWS = -101113,
    VSRC_FCF_ELEMENTS_MINIHTML_PROPORTIONAL = -101114,
    VSRC_FCF_ELEMENTS_MINIHTML_FIXED = -101115,
    VSRC_FCF_ELEMENTS_DOCUMENT_TABS = -101116,
    VSRC_CFG_COMMENT = -101120,
    VSRC_CFG_CURRENT_LINE = -101121,
    VSRC_CFG_CURSOR = -101122,
    VSRC_CFG_NOSAVE_LINE = -101123,
    VSRC_CFG_INSERTED_LINE = -101124,
    VSRC_CFG_KEYWORD = -101125,
    VSRC_CFG_LINE_NUMBER = -101126,
    VSRC_CFG_LINE_PREFIX_AREA = -101127,
    VSRC_CFG_MESSAGE = -101128,
    VSRC_CFG_MODIFIED_LINE = -101129,
    VSRC_CFG_NUMBER = -101130,
    VSRC_CFG_PREPROCESSOR = -101131,
    VSRC_CFG_SELECTED_CURRENT_LINE = -101132,
    VSRC_CFG_SELECTION = -101133,
    VSRC_CFG_STATUS = -101134,
    VSRC_CFG_STRING = -101135,
    VSRC_CFG_WINDOW_TEXT = -101136,
    VSRC_CFG_PUNCTUATION = -101137,
    VSRC_CFG_LIBRARY_SYMBOL = -101138,
    VSRC_CFG_OPERATOR = -101139,
    VSRC_CFG_USER_DEFINED_SYMBOL = -101140,
    VSRC_CFG_FUNCTION = -101141,
    VSRC_CFG_FILENAME = -101142,
    VSRC_CFG_HIGHLIGHT = -101143,
    VSRC_CFG_ATTRIBUTE = -101144,
    VSRC_CFG_UNKNOWN_XML_ELEMENT = -101145,
    VSRC_CFG_XHTML_ELEMENT_IN_XSL = -101146,
    VSRC_CFG_ACTIVE_TOOL_WINDOW_CAPTION = -101147,
    VSRC_CFG_INACTIVE_TOOL_WINDOW_CAPTION = -101148,
    VSRC_CFG_LINE_COMMENT = -101149,
    VSRC_CFG_UNABLE_TO_OPEN_SYSTEM_COLOR_SCHEME = -101150,
    VSRC_CFG_COLOR_SCHEME_MODIFIED = -101151,
    VSRC_CFG_NO_ACTIVE_SCHEME_TO_RENAME = -101152,
    VSRC_CFG_FILE_NOT_FOUND = -101153,
    VSRC_CFG_ERROR_READING_FILE = -101154,
    VSRC_CFG_CANNOT_FIND_USER_SCHEME = -101155,
    VSRC_CFG_INVALID_SCHEME_NAME = -101156,
    VSRC_CFG_SCHEME_ALREADY_EXISTS = -101157,
    VSRC_CFG_UNABLE_TO_SAVE = -101158,
    VSRC_CFG_NO_ACTIVE_SCHEME_TO_REMOVE = -101159,
    VSRC_CFG_UNABLE_TO_REMOVE = -101160,
    VSRC_CFG_CANNOT_REMOVE_SYSTEM_SCHEMES = -101161,
    VSRC_CFG_REMOVE_SCHEME_CONFIRMATION = -101162,
    VSRC_CFG_RENAME_SCHEME = -101163,
    VSRC_CFG_RENAME_TO = -101164,
    VSRC_CFG_RGB_VALUES_RANGE_WARNING = -101165,
    VSRC_CFG_INVALID_COLOR = -101166,
    VSRC_CFG_SPECIFY_COLOR_SCHEME_NAME = -101167,
    VSRC_CFG_INVALID_COLOR_SCHEME_NAME = -101168,
    VSRC_CFG_CANNOT_OVERWRITE_SYSTEM_SCHEME = -101169,
    VSRC_CFG_OVERWRITE_SCHEME_CONFIRMATION = -101170,
    VSRC_CFG_COLOR_SCHEME_INCOMPATIBLE = -101171,
    VSRC_CFG_DOCUMENTATION_COMMENT = -101172,
    VSRC_CFG_DOCUMENTATION_KEYWORD = -101173,
    VSRC_CFG_DOCUMENTATION_PUNCTUATION = -101174,
    VSRC_CFG_DOCUMENTATION_ATTRIBUTE = -101175,
    VSRC_CFG_DOCUMENTATION_ATTR_VALUE = -101176,
    VSRC_CFG_IDENTIFIER = -101177,
    VSRC_CFG_FLOATING_NUMBER = -101178,
    VSRC_CFG_HEX_NUMBER = -101179,
    VSRC_CFG_SINGLE_QUOTED_STRING = -101180,
    VSRC_CFG_BACKQUOTED_STRING = -101181,
    VSRC_CFG_UNTERMINATED_STRING = -101182,
    VSRC_CFG_INACTIVE_CODE = -101183,
    VSRC_CFG_INACTIVE_KEYWORD = -101184,
    VSRC_CFG_IMAGINARY_SPACE = -101185,
    VSRC_CFG_INACTIVE_COMMENT = -101186,
    VSRC_CFG_ERROR = -101187,
    VSRC_FF_OTHER = -101200,
    VSRC_FF_KEYWORD = -101201,
    VSRC_FF_NUMBER = -101202,
    VSRC_FF_STRING = -101203,
    VSRC_FF_COMMENT = -101204,
    VSRC_FF_PREPROCESSING = -101205,
    VSRC_FF_LINE_NUMBER = -101206,
    VSRC_FF_SYMBOL1 = -101207,
    VSRC_FF_SYMBOL2 = -101208,
    VSRC_FF_SYMBOL3 = -101209,
    VSRC_FF_SYMBOL4 = -101210,
    VSRC_FF_FUNCTION = -101211,
    VSRC_FF_ATTRIBUTE = -101212,
    VSRC_FF_NOT = -101220,
    VSRC_FF_CHOOSE_DIRECTORY = -101221,
    VSRC_FF_CURDIR_IS = -101222,
    VSRC_FF_OF_SELECTED = -101223,
    VSRC_FF_CANNOT_GENERATE_MACRO = -101225,
    VSRC_FF_NO_FILES_SELECTED = -101226,
    VSRC_FF_COULD_NOT_OPEN_WORKSPACE_FILE = -101227,
    VSRC_FF_INVALID_SWITCH = -101228,
    VSRC_FF_FILE_NOT_FOUND = -101229,
    VSRC_FF_NO_FILES_SELECTED_READ_ONLY = -101230,
    VSRC_FF_FOLLOWING_LINES_SKIPPED = -101231,
    VSRC_FC_INVALID_FONT_SIZE = -101250,
    VSRC_FC_TERMINAL_FONT_SIZE = -101251,
    VSRC_FC_INVALID_FONT_NAME = -101252,
    VSRC_FC_CHILD_WINDOWS_NOT_UPDATED = -101253,
    VSRC_FC_MUST_EXIT_AND_RESTART = -101254,
    VSRC_FC_CHANGE_FONT_IN_ALL_WINDOWS = -101255,
    VSRC_CHARSET_WESTERN = -101275,
    VSRC_CHARSET_DEFAULT = -101276,
    VSRC_CHARSET_SYMBOL = -101277,
    VSRC_CHARSET_SHIFTJIS = -101278,
    VSRC_CHARSET_HANGEUL = -101279,
    VSRC_CHARSET_GB2312 = -101280,
    VSRC_CHARSET_CHINESEBIG5 = -101281,
    VSRC_CHARSET_OEMDOS = -101282,
    VSRC_CHARSET_JOHAB = -101283,
    VSRC_CHARSET_HEBREW = -101284,
    VSRC_CHARSET_ARABIC = -101285,
    VSRC_CHARSET_GREEK = -101286,
    VSRC_CHARSET_TURKISH = -101287,
    VSRC_CHARSET_THAI = -101288,
    VSRC_CHARSET_CENTRALEUROPEAN = -101289,
    VSRC_CHARSET_CYRILLIC = -101290,
    VSRC_CHARSET_MAC = -101291,
    VSRC_CHARSET_BALTIC = -101292,
    VSRC_CHARSET_VIETNAMESE = -101293,
    VSRC_UPCHECK_INTERVAL_1DAY = -101325,
    VSRC_UPCHECK_INTERVAL_1WEEK = -101326,
    VSRC_UPCHECK_INTERVAL_NEVER = -101327,
    VSRC_UPCHECK_INTERVAL_CUSTOM = -101328,
    VSRC_ABOUT_WEBSITE = -101340,
    VSRC_ABOUT_SUPPORT_PHONE = -101341,
    VSRC_CAPTION_SERIAL_NUMBER = -101343,
    VSRC_CAPTION_LICENSED_PACKAGES = -101344,
    VSRC_CAPTION_WEBSITE = -101345,
    VSRC_CAPTION_SUPPORT_PHONE = -101346,
    VSRC_CAPTION_SUPPORT_EMAIL = -101347,
    VSRC_CAPTION_EXPIRATION_DATE = -101348,
    VSRC_CAPTION_EMULATION = -101348,
    VSRC_CAPTION_INSTALLATION_DIRECTORY = -101349,
    VSRC_CAPTION_CONFIGURATION_DIRECTORY = -101350,
    VSRC_CAPTION_CONFIGURATION_DRIVE_USAGE = -101351,
    VSRC_CAPTION_SPILL_FILE = -101352,
    VSRC_CAPTION_SPILL_FILE_DIRECTORY_DRIVE_USAGE = -101353,
    VSRC_CAPTION_BUILD_DATE = -101354,
    VSRC_CAPTION_OPERATING_SYSTEM = -101355,
    VSRC_CAPTION_OPERATING_SYSTEM_VERSION = -101356,
    VSRC_CAPTION_VERSION = -101357,
    VSRC_CAPTION_KERNEL_LEVEL = -101358,
    VSRC_CAPTION_BUILD_VERSION = -101359,
    VSRC_CAPTION_XSERVER_VENDOR = -101360,
    VSRC_CAPTION_MEMORY_LOAD = -101361,
    VSRC_CAPTION_PHYSICAL_MEMORY_USAGE = -101362,
    VSRC_CAPTION_PAGE_FILE_USAGE = -101363,
    VSRC_CAPTION_VIRTUAL_MEMORY_USAGE = -101364,
    VSRC_CAPTION_DIRECTORY = -101365,
    VSRC_CAPTION_FLEXLM_SERIAL_NUMBER = -101366,
    VSRC_CFG_SPECIALCHARS = -101367,
    VSRC_CFG_CURRENT_LINE_BOX = -101368,
    VSRC_CFG_VERTICAL_COL_LINE = -101369,
    VSRC_CFG_MARGINS_COL_LINE = -101370,
    VSRC_CFG_TRUNCATION_COL_LINE = -101371,
    VSRC_CFG_PREFIX_AREA_LINE = -101372,
    VSRC_CFG_BLOCK_MATCHING = -101373,
    VSRC_PUSHED_BOOKMARK_NAME = -101374,
    VSRC_CFG_INC_SEARCH_CURRENT = -101375,
    VSRC_CFG_INC_SEARCH_MATCH = -101376,
    VSRC_CFG_HEX_MODE_COLOR = -101377,
    VSRC_DYNAMIC_SURROUND_MESSAGE = -101378,
    VSRC_DYNAMIC_SURROUND_NO_MORE_UP = -101379,
    VSRC_DYNAMIC_SURROUND_NO_MORE_DOWN = -101380,
    VSRC_CAPTION_NOFUSERS = -101381,
    VSRC_CFG_SYMBOL_HIGHLIGHT = -101382,
    VSRC_CAPTION_LICENSE_EXPIRATION = -101383,
    VSRC_CAPTION_LICENSE_TO = -101384,
    VSRC_CFG_MODIFIED_FILE_TAB = -101385,
    VSRC_CAPTION_LICENSE_FILE = -101386,
    VSRC_CAPTION_MEMORY = -101387,
    VSRC_CFG_MODIFIED_ITEM = -101388,
    VSRC_CAPTION_CURRENT_PROJECT_TYPE = -101389,
    VSRC_CAPTION_CURRENT_LANGUAGE = -101390,
    VSRC_CAPTION_SCREEN_RESOLUTION = -101391,
    VSRC_CAPTION_SHELL_INFO = -101392,
    VSRC_CAPTION_PROCESSOR_ARCH = -101393,
    VSRC_CAPTION_LICENSE_SERVER = -101394,
    VSRC_CAPTION_LICENSE_BORROW_EXPIRATION = -101395,
    VSRC_COLOR_CATEGORY_EDITOR_CURSOR = -101400,
    VSRC_COLOR_CATEGORY_EDITOR_TEXT = -101401,
    VSRC_COLOR_CATEGORY_MISC = -101402,
    VSRC_COLOR_CATEGORY_DIFF = -101403,
    VSRC_COLOR_CATEGORY_HIGHLIGHTS = -101404,
    VSRC_COLOR_CATEGORY_XML = -101405,
    VSRC_COLOR_CATEGORY_EDITOR_COLUMNS = -101406,
    VSRC_COLOR_CATEGORY_COMMENTS = -101407,
    VSRC_COLOR_CATEGORY_STRINGS = -101408,
    VSRC_COLOR_CATEGORY_NUMBERS = -101409,
    VSRC_CFG_SELECTION_DESCRIPTION = -101410,
    VSRC_CFG_WINDOW_TEXT_DESCRIPTION = -101411,
    VSRC_CFG_CURRENT_LINE_DESCRIPTION = -101412,
    VSRC_CFG_SELECTED_CURRENT_LINE_DESCRIPTION = -101413,
    VSRC_CFG_MESSAGE_DESCRIPTION = -101414,
    VSRC_CFG_STATUS_DESCRIPTION = -101415,
    VSRC_CFG_CURSOR_DESCRIPTION = -101416,
    VSRC_CFG_MODIFIED_LINE_DESCRIPTION = -101417,
    VSRC_CFG_INSERTED_LINE_DESCRIPTION = -101418,
    VSRC_CFG_KEYWORD_DESCRIPTION = -101419,
    VSRC_CFG_LINE_NUMBER_DESCRIPTION = -101420,
    VSRC_CFG_NUMBER_DESCRIPTION = -101421,
    VSRC_CFG_STRING_DESCRIPTION = -101422,
    VSRC_CFG_COMMENT_DESCRIPTION = -101423,
    VSRC_CFG_PREPROCESSOR_DESCRIPTION = -101424,
    VSRC_CFG_PUNCTUATION_DESCRIPTION = -101425,
    VSRC_CFG_LIBRARY_SYMBOL_DESCRIPTION = -101426,
    VSRC_CFG_OPERATOR_DESCRIPTION = -101427,
    VSRC_CFG_USER_DEFINED_SYMBOL_DESCRIPTION = -101428,
    VSRC_CFG_NOSAVE_LINE_DESCRIPTION = -101429,
    VSRC_CFG_FUNCTION_DESCRIPTION = -101430,
    VSRC_CFG_LINE_PREFIX_AREA_DESCRIPTION = -101431,
    VSRC_CFG_FILENAME_DESCRIPTION = -101432,
    VSRC_CFG_HIGHLIGHT_DESCRIPTION = -101433,
    VSRC_CFG_ATTRIBUTE_DESCRIPTION = -101434,
    VSRC_CFG_UNKNOWN_XML_ELEMENT_DESCRIPTION = -101435,
    VSRC_CFG_XHTML_ELEMENT_IN_XSL_DESCRIPTION = -101436,
    VSRC_CFG_SPECIALCHARS_DESCRIPTION = -101437,
    VSRC_CFG_CURRENT_LINE_BOX_DESCRIPTION = -101438,
    VSRC_CFG_VERTICAL_COL_LINE_DESCRIPTION = -101439,
    VSRC_CFG_MARGINS_COL_LINE_DESCRIPTION = -101440,
    VSRC_CFG_TRUNCATION_COL_LINE_DESCRIPTION = -101441,
    VSRC_CFG_PREFIX_AREA_LINE_DESCRIPTION = -101442,
    VSRC_CFG_BLOCK_MATCHING_DESCRIPTION = -101443,
    VSRC_CFG_INC_SEARCH_CURRENT_DESCRIPTION = -101444,
    VSRC_CFG_INC_SEARCH_MATCH_DESCRIPTION = -101445,
    VSRC_CFG_HEX_MODE_COLOR_DESCRIPTION = -101446,
    VSRC_CFG_SYMBOL_HIGHLIGHT_DESCRIPTION = -101447,
    VSRC_CFG_LINE_COMMENT_DESCRIPTION = -101449,
    VSRC_CFG_DOC_COMMENT_DESCRIPTION = -101450,
    VSRC_CFG_DOCUMENTATION_KEYWORD_DESCRIPTION = -101451,
    VSRC_CFG_DOCUMENTATION_PUNCTUATION_DESCRIPTION = -101452,
    VSRC_CFG_DOCUMENTATION_ATTRIBUTE_DESCRIPTION = -101453,
    VSRC_CFG_DOCUMENTATION_ATTR_VALUE_DESCRIPTION = -101454,
    VSRC_CFG_FLOATING_NUMBER_DESCRIPTION = -101455,
    VSRC_CFG_HEX_NUMBER_DESCRIPTION = -101456,
    VSRC_CFG_SINGLE_QUOTED_STRING_DESCRIPTION = -101457,
    VSRC_CFG_BACKQUOTED_STRING_DESCRIPTION = -101458,
    VSRC_CFG_UNTERMINATED_STRING_DESCRIPTION = -101459,
    VSRC_CFG_IDENTIFIER_DESCRIPTION = -101460,
    VSRC_CFG_INACTIVE_CODE_DESCRIPTION = -101461,
    VSRC_CFG_INACTIVE_KEYWORD_DESCRIPTION = -101462,
    VSRC_CFG_IMAGINARY_SPACE_DESCRIPTION = -101463,
    VSRC_CFG_INACTIVE_COMMENT_DESCRIPTION = -101464,
    VSRC_CFG_MODIFIED_ITEM_DESCRIPTION = -101465,
    VSRC_CFG_NAVHINT = -101466,
    VSRC_CFG_NAVHINT_DESCRIPTION = -101467,
    VSRC_CFG_XML_CHARACTER_REF = -101468,
    VSRC_CFG_XML_CHARACTER_REF_DESCRIPTION = -101469,
    VSRC_CFG_TAG_FILES_LOADING = -101470,
    VSRC_CFG_TAG_FILES_NONE = -101471,
    VSRC_CFG_TAG_FILES_COUNT = -101472,
    VSRC_CFG_ERROR_DESCRIPTION = -101473,
    VSRC_CODEHELP_TITLE_LOCALS = -101475,
    VSRC_CODEHELP_TITLE_MEMBERS = -101476,
    VSRC_CODEHELP_TITLE_IMPORTS = -101477,
    VSRC_CODEHELP_TITLE_STATICS = -101478,
    VSRC_CODEHELP_TITLE_BUFFER = -101479,
    VSRC_CODEHELP_TITLE_GLOBALS = -101480,
    VSRC_CODEHELP_TITLE_PACKAGES = -101481,
    VSRC_CODEHELP_TITLE_CLASSES = -101482,
    VSRC_CODEHELP_TITLE_PROPS = -101483,
    VSRC_CODEHELP_TITLE_BUILTINS = -101484,
    VSRC_CODEHELP_TITLE_PARAMS = -101485,
    VSRC_CODEHELP_TITLE_CONTROLS = -101486,
    VSRC_CODEHELP_TITLE_KEYWORDS = -101487,
    VSRC_CODEHELP_TITLE_FUNCTIONS = -101488,
    VSRC_CODEHELP_TITLE_PROCEDURES = -101489,
    VSRC_CODEHELP_TITLE_VARIABLES = -101490,
    VSRC_CODEHELP_TITLE_DEFINES = -101491,
    VSRC_CODEHELP_TITLE_EXPRS = -101492,
    VSRC_CFG_SEARCH_RESULT_TRUNCATED = -101493,
    VSRC_CFG_SEARCH_RESULT_TRUNCATED_DESCRIPTION = -101494,
    VSRC_COLOR_CATEGORY_MARKDOWN = -101495,
    VSRC_CFG_MARKDOWN_HEADER = -101496,
    VSRC_CFG_MARKDOWN_HEADER_DESCRIPTION = -101497,
    VSRC_CFG_MARKDOWN_CODE = -101498,
    VSRC_CFG_MARKDOWN_CODE_DESCRIPTION = -101499,
    VSRC_CFG_MARKDOWN_BLOCKQUOTE = -101500,
    VSRC_CFG_MARKDOWN_BLOCKQUOTE_DESCRIPTION = -101501,
    VSRC_CFG_MARKDOWN_LINK = -101502,
    VSRC_CFG_MARKDOWN_LINK_DESCRIPTION = -101503,
    VSRC_CFG_DOCUMENT_TAB_ACTIVE = -101504,
    VSRC_CFG_DOCUMENT_TAB_ACTIVE_DESCRIPTION = -101505,
    VSRC_CFG_DOCUMENT_TAB_MODIFIED = -101506,
    VSRC_CFG_DOCUMENT_TAB_MODIFIED_DESCRIPTION = -101507,
    VSRC_CFG_DOCUMENT_TAB_SELECTED = -101508,
    VSRC_CFG_DOCUMENT_TAB_SELECTED_DESCRIPTION = -101509,
    VSRC_CFG_DOCUMENT_TAB_UNSELECTED = -101510,
    VSRC_CFG_DOCUMENT_TAB_UNSELECTED_DESCRIPTION = -101511,
};

#endif
