// 语言本身元符号编码
typedef enum meta_symbol_code {
    // float
    C_Float = 1,
    // double
    C_Double = 2,
    // char
    C_Char = 3,
    // short
    C_Short = 4,
    // int
    C_Int = 5,
    // unsigned
    C_Unsigned = 6,
    // pointer
    C_Pointer = 7,
    // void
    C_Void = 8,
    // struct
    C_Struct = 9,
    // union
    C_Union = 10,
    // function
    C_Function = 11,
    // array
    C_Array = 12,
    // enum
    C_Enum = 13,
    // long
    C_Long = 14,
    // const
    C_Const = 15,
    // volatile
    C_Volatile = 16,
    // identifier
    C_Identifier = 32,
    // floating constant，浮点数常量
    C_FloatConst = 34,
    // integer constant，整数常量
    C_IntegerConst = 35,
    // string constant，字符串常量
    C_StringConst = 36,
    // ++
    C_AutoIncrement = 39,
    // --
    C_AutoDecrement = 48,
    // ->，e.g. { struct s {int a;}; struct s obj = {0}; struct s *p = &obj; p->a; } 以上代码中，p->a的含义是，读取p指向的结构对象中的a字段；
    C_Struct_Derefence = 49,
    // &&
    C_AddAdd = 50,
    // ||
    C_OrOr = 51,
    // <=
    C_LessEqual = 52,
    // ==
    C_Equal = 53,
    // !=
    C_NotEqual = 54,
    // >=
    C_GreatEqual = 55,
    // >>
    C_RightShift = 56,
    // <<
    C_LeftShift = 57,
    // ...
    C_Ellipsis = 64,
    // sizeof
    C_Sizeof = 65,
    // auto
    C_Auto = 67,
    // break
    C_Break = 68,
    // case
    C_Case = 69,
    // continue
    C_Continue = 70,
    // default
    C_Default = 71,
    // do
    C_Do = 72,
    // else
    C_Else = 73,
    // extern
    C_Extern = 74,
    // for
    C_For = 75,
    // goto
    C_Goto = 76,
    // if
    C_If = 77,
    // register
    C_Register = 78,
    // return
    C_Return = 79,
    // signed
    C_Signed = 80,
    // static
    C_Static = 81,
    // switch
    C_Switch = 82,
    // typedef
    C_Typedef = 83,
    // while
    C_While = 84,
    // EOI
    C_EndOfInput = 127,
} E_MetaSymbolCode;



/*
xx(symbol,	value,	prec,	op,	optree,	kind,	string)
*/
yy(0,         0, 0,  0,    0,      0,      0)
xx(FLOAT,     1, 0,  0,    0,      CHAR,   "float")
xx(DOUBLE,    2, 0,  0,    0,      CHAR,   "double")
xx(CHAR,      3, 0,  0,    0,      CHAR,   "char")
xx(SHORT,     4, 0,  0,    0,      CHAR,   "short")
xx(INT,       5, 0,  0,    0,      CHAR,   "int")
xx(UNSIGNED,  6, 0,  0,    0,      CHAR,   "unsigned")
xx(POINTER,   7, 0,  0,    0,      0,      0)
xx(VOID,      8, 0,  0,    0,      CHAR,   "void")
xx(STRUCT,    9, 0,  0,    0,      CHAR,   "struct")
xx(UNION,    10, 0,  0,    0,      CHAR,   "union")
xx(FUNCTION, 11, 0,  0,    0,      0,      0)
xx(ARRAY,    12, 0,  0,    0,      0,      0)
xx(ENUM,     13, 0,  0,    0,      CHAR,   "enum")
xx(LONG,     14, 0,  0,    0,      CHAR,   "long")
xx(CONST,    15, 0,  0,    0,      CHAR,   "const")
xx(VOLATILE, 16, 0,  0,    0,      CHAR,   "volatile")
yy(0,        17,     0,      0,    0,      0,      0)
yy(0,        18,     0,      0,    0,      0,      0)
yy(0,        19,     0,      0,    0,      0,      0)
yy(0,        20,     0,      0,    0,      0,      0)
yy(0,        21,     0,      0,    0,      0,      0)
yy(0,        22,     0,      0,    0,      0,      0)
yy(0,        23,     0,      0,    0,      0,      0)
yy(0,        24,     0,      0,    0,      0,      0)
yy(0,        25,     0,      0,    0,      0,      0)
yy(0,        26,     0,      0,    0,      0,      0)
yy(0,        27,     0,      0,    0,      0,      0)
yy(0,        28,     0,      0,    0,      0,      0)
yy(0,        29,     0,      0,    0,      0,      0)
yy(0,        30,     0,      0,    0,      0,      0)
yy(0,        31,     0,      0,    0,      0,      0)
xx(ID,       32,     0,      0,    0,      ID,     "identifier")
yy(0,        33,     0,      0,    0,      ID,     "!")
xx(FCON,     34,     0,      0,    0,      ID,     "floating constant")
xx(ICON,     35,     0,      0,    0,      ID,     "integer constant")
xx(SCON,     36,     0,      0,    0,      ID,     "string constant")
yy(0,        37,     13,     MOD,  bittree,'%',    "%")
yy(0,        38,     8,      BAND, bittree,ID,     "&")
xx(INCR,     39,     0,      ADD,  addtree,ID,     "++")
yy(0,        40,     0,      0,    0,      ID,     "(")
yy(0,        41,     0,      0,    0,      ')',    ")")
yy(0,        42, 13, MUL,  multree,ID,     "*")
yy(0,        43, 12, ADD,  addtree,ID,     "+")
yy(0,        44, 1,  0,    0,      ',',    ",")
yy(0,        45, 12, SUB,  subtree,ID,     "-")
yy(0,        46, 0,  0,    0,      '.',    ".")
yy(0,        47, 13, DIV,  multree,'/',    "/")
xx(DECR,     48, 0,  SUB,  subtree,ID,     "--")
xx(DEREF,    49, 0,  0,    0,      DEREF,  "->")
xx(ANDAND,   50, 5,  AND,  andtree,ANDAND, "&&")
xx(OROR,     51, 4,  OR,   andtree,OROR,   "||")
xx(LEQ,      52, 10, LE,   cmptree,LEQ,    "<=")
xx(EQL,         53,     9,      EQ,     eqtree, EQL,    "==")
xx(NEQ,         54,     9,      NE,     eqtree, NEQ,    "!=")
xx(GEQ,         55,     10,     GE,     cmptree,GEQ,    ">=")
xx(RSHIFT,      56,     11,     RSH,    shtree, RSHIFT, ">>")
xx(LSHIFT,      57,     11,     LSH,    shtree, LSHIFT, "<<")
yy(0,           58,     0,      0,      0,      ':',    ":")
yy(0,           59,     0,      0,      0,      IF,     ";")
yy(0,           60,     10,     LT,     cmptree,'<',    "<")
yy(0,           61,     2,      ASGN,   asgntree,'=',   "=")
yy(0,           62,     10,     GT,     cmptree,'>',    ">")
yy(0,           63,     0,      0,      0,      '?',    "?")
xx(ELLIPSIS,    64,     0,      0,      0,      ELLIPSIS,"...")
xx(SIZEOF,      65,     0,      0,      0,      ID,     "sizeof")
yy(0,           66,     0,      0,      0,      0,      0)
xx(AUTO,        67,     0,      0,      0,      STATIC, "auto")
xx(BREAK,       68,     0,      0,      0,      IF,     "break")
xx(CASE,        69,     0,      0,      0,      IF,     "case")
xx(CONTINUE,    70,     0,      0,      0,      IF,     "continue")
xx(DEFAULT,     71,     0,      0,      0,      IF,     "default")
xx(DO,          72,     0,      0,      0,      IF,     "do")
xx(ELSE,        73,     0,      0,      0,      IF,     "else")
xx(EXTERN,      74,     0,      0,      0,      STATIC, "extern")
xx(FOR,         75,     0,      0,      0,      IF,     "for")
xx(GOTO,        76,     0,      0,      0,      IF,     "goto")
xx(IF,          77,     0,      0,      0,      IF,     "if")
xx(REGISTER,    78,     0,      0,      0,      STATIC, "register")
xx(RETURN,      79,     0,      0,      0,      IF,     "return")
xx(SIGNED,      80,     0,      0,      0,      CHAR,   "signed")
xx(STATIC,      81,     0,      0,      0,      STATIC, "static")
xx(SWITCH,      82,     0,      0,      0,      IF,     "switch")
xx(TYPEDEF,     83,     0,      0,      0,      STATIC, "typedef")
xx(WHILE,       84,     0,      0,      0,      IF,     "while")
yy(0,           85,     0,      0,      0,      0,      0)
yy(0,           86,     0,      0,      0,      0,      0)
yy(0,           87,     0,      0,      0,      0,      0)
yy(0,           88,     0,      0,      0,      0,      0)
yy(0,           89,     0,      0,      0,      0,      0)
yy(0,           90,     0,      0,      0,      0,      0)
yy(0,           91,     0,      0,      0,      '[',    "[")
yy(0,           92,     0,      0,      0,      0,      0)
yy(0,           93,     0,      0,      0,      ']',    "]")
yy(0,           94,     7,      BXOR,   bittree,'^',    "^")
yy(0,           95,     0,      0,      0,      0,      0)
yy(0,           96,     0,      0,      0,      0,      0)
yy(0,           97,     0,      0,      0,      0,      0)
yy(0,           98,     0,      0,      0,      0,      0)
yy(0,           99,     0,      0,      0,      0,      0)
yy(0,           100,    0,      0,      0,      0,      0)
yy(0,           101,    0,      0,      0,      0,      0)
yy(0,           102,    0,      0,      0,      0,      0)
yy(0,           103,    0,      0,      0,      0,      0)
yy(0,           104,    0,      0,      0,      0,      0)
yy(0,           105,    0,      0,      0,      0,      0)
yy(0,           106,    0,      0,      0,      0,      0)
yy(0,           107,    0,      0,      0,      0,      0)
yy(0,           108,    0,      0,      0,      0,      0)
yy(0,           109,    0,      0,      0,      0,      0)
yy(0,           110,    0,      0,      0,      0,      0)
yy(0,           111,    0,      0,      0,      0,      0)
yy(0,           112,    0,      0,      0,      0,      0)
yy(0,           113,    0,      0,      0,      0,      0)
yy(0,           114,    0,      0,      0,      0,      0)
yy(0,           115,    0,      0,      0,      0,      0)
yy(0,           116,    0,      0,      0,      0,      0)
yy(0,           117,    0,      0,      0,      0,      0)
yy(0,           118,    0,      0,      0,      0,      0)
yy(0,           119,    0,      0,      0,      0,      0)
yy(0,           120,    0,      0,      0,      0,      0)
yy(0,           121,    0,      0,      0,      0,      0)
yy(0,           122,    0,      0,      0,      0,      0)
yy(0,           123,    0,      0,      0,      IF,     "{")
yy(0,           124,    6,      BOR,    bittree,'|',    "|")
yy(0,           125,    0,      0,      0,      '}',    "}")
yy(0,           126,    0,      BCOM,   0,      ID,     "~")
xx(EOI,         127,    0,      0,      0,      EOI,    "end of input")
#undef xx
#undef yy
