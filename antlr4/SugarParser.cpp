
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2


#include "SugarListener.h"
#include "SugarVisitor.h"

#include "SugarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SugarParserStaticData final {
  SugarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SugarParserStaticData(const SugarParserStaticData&) = delete;
  SugarParserStaticData(SugarParserStaticData&&) = delete;
  SugarParserStaticData& operator=(const SugarParserStaticData&) = delete;
  SugarParserStaticData& operator=(SugarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sugarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SugarParserStaticData> sugarParserStaticData = nullptr;

void sugarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sugarParserStaticData != nullptr) {
    return;
  }
#else
  assert(sugarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SugarParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "block", "declaration", "function_declaration", 
      "class_init", "var_declaration", "list_declaration", "class_inheritance_list", 
      "class_declaration", "assignment", "basic_assignment", "default_assignment", 
      "return_statement", "break_statement", "continue_statement", "expression", 
      "pipeline_expression", "elvis_expression", "boolean_or_expression", 
      "boolean_and_expression", "comparison_expression", "multi_comparison_item", 
      "multi_comparison_or_expression", "multi_comparison_and_expression", 
      "multi_comparison_object_access", "multi_comparison_optional_object_access", 
      "multi_comparison_expression", "additive_expression", "multiplicative_expression", 
      "exponentiation_expression", "unary_expression", "post_fix_expression", 
      "object_access_chain", "optional_object_access_chain", "primary_expression", 
      "terminal_expression", "switch_expression", "case_list", "list_access", 
      "list_pushback", "list_insertion", "list_removal", "list_at_access", 
      "if_expression", "loop_expression", "while_loop", "for_loop", "parameter_list", 
      "class_member_segment", "class_constructor", "class_operator_override", 
      "class_overrideable_operator", "variable_type", "function_call", "argument_list", 
      "user_defined_type", "comparison_symbol", "formatted_string", "and_logic_operator", 
      "or_logic_operator"
    },
    std::vector<std::string>{
      "", "'f'", "'++'", "'--'", "'!'", "'^'", "'*'", "'/'", "'%'", "'+'", 
      "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'->'", "'&&'", 
      "'and'", "'||'", "'or'", "'='", "'\\u003F='", "'\\u003F:'", "'<<'", 
      "'@'", "'.'", "'\\u003F.'", "'=>'", "'|>'", "';'", "'('", "')'", "'{'", 
      "'}'", "'['", "']'", "'return'", "'break'", "'continue'", "'#'", "'if'", 
      "'else'", "'while'", "'for'", "','", "'class'", "'public'", "'protected'", 
      "'private'", "'int'", "'dec'", "'string'", "'bool'", "'true'", "'false'", 
      "'any'", "'switch'", "'case'", "'default'", "':'", "'$'"
    },
    std::vector<std::string>{
      "", "", "INCREMENT", "DECREMENT", "NOT", "POW", "MUL", "DIV", "MOD", 
      "PLUS", "MINUS", "DEQUAL", "NEQUAL", "LESS", "LESSEQUAL", "GREATER", 
      "GREATEREQUAL", "MULTI_CMP_ARROW", "AND", "WORD_AND", "OR", "WORD_OR", 
      "EQUAL", "DEFAULT_ASSIGN", "ELVIS", "PUSHBACK", "AT", "ACCESS", "OPT_ACCESS", 
      "ARROW", "PIPE", "SEMICOLON", "LPAREN", "RPAREN", "LCURL", "RCURL", 
      "LBRACK", "RBRACK", "RETURN", "BREAK", "CONTINUE", "LISTDECL", "IF", 
      "ELSE", "WHILE", "FOR", "COMMA", "CLASS", "PUBLIC", "PROTECTED", "PRIVATE", 
      "INTTYPE", "DECIMALTYPE", "STRINGTYPE", "BOOLTYPE", "BOOL_TRUE", "BOOL_FALSE", 
      "ANYTYPE", "SWITCH", "CASE", "DEFAULT", "COLON", "LAST_ASSIGNED", 
      "INTEGER", "DECIMAL", "VAR", "STRING", "WS", "COMMENT", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,69,591,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,1,0,1,0,1,0,5,0,126,8,0,10,
  	0,12,0,129,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,140,8,1,1,1,1,
  	1,1,1,1,1,3,1,146,8,1,3,1,148,8,1,1,2,1,2,5,2,152,8,2,10,2,12,2,155,9,
  	2,1,2,1,2,1,3,1,3,3,3,161,8,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,169,8,4,1,5,
  	1,5,1,5,1,5,1,5,3,5,176,8,5,1,6,1,6,3,6,180,8,6,1,6,1,6,1,7,1,7,4,7,186,
  	8,7,11,7,12,7,187,1,7,1,7,4,7,192,8,7,11,7,12,7,193,3,7,196,8,7,1,8,1,
  	8,1,8,1,8,5,8,202,8,8,10,8,12,8,205,9,8,1,8,1,8,1,9,1,9,1,9,3,9,212,8,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,221,8,9,10,9,12,9,224,9,9,1,9,1,9,1,
  	10,1,10,3,10,230,8,10,1,10,1,10,1,11,1,11,3,11,236,8,11,1,11,1,11,1,12,
  	1,12,3,12,242,8,12,1,12,1,12,1,13,1,13,3,13,248,8,13,1,14,1,14,1,15,1,
  	15,1,16,1,16,1,17,1,17,1,17,5,17,259,8,17,10,17,12,17,262,9,17,1,18,1,
  	18,1,18,3,18,267,8,18,1,19,1,19,1,19,1,19,5,19,273,8,19,10,19,12,19,276,
  	9,19,1,20,1,20,1,20,1,20,5,20,282,8,20,10,20,12,20,285,9,20,1,21,1,21,
  	1,21,1,21,5,21,291,8,21,10,21,12,21,294,9,21,1,21,3,21,297,8,21,1,22,
  	1,22,3,22,301,8,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,309,8,23,10,23,
  	12,23,312,9,23,1,24,1,24,1,24,1,24,1,24,5,24,319,8,24,10,24,12,24,322,
  	9,24,1,24,1,24,1,24,1,24,3,24,328,8,24,1,25,1,25,1,25,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,4,27,344,8,27,11,27,12,27,345,
  	1,27,1,27,1,28,1,28,1,28,5,28,353,8,28,10,28,12,28,356,9,28,1,29,1,29,
  	1,29,5,29,361,8,29,10,29,12,29,364,9,29,1,30,1,30,1,30,5,30,369,8,30,
  	10,30,12,30,372,9,30,1,31,3,31,375,8,31,1,31,1,31,1,32,1,32,3,32,381,
  	8,32,1,32,3,32,384,8,32,1,33,1,33,1,33,5,33,389,8,33,10,33,12,33,392,
  	9,33,1,34,1,34,1,34,5,34,397,8,34,10,34,12,34,400,9,34,1,35,1,35,1,35,
  	1,35,1,35,1,35,1,35,1,35,1,35,3,35,411,8,35,1,36,1,36,1,37,1,37,1,37,
  	1,37,1,37,1,37,1,37,1,37,3,37,423,8,37,1,37,1,37,1,38,1,38,1,38,1,38,
  	3,38,431,8,38,4,38,433,8,38,11,38,12,38,434,1,39,1,39,1,39,1,40,1,40,
  	1,40,1,40,1,41,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,43,1,43,4,43,
  	455,8,43,11,43,12,43,456,1,44,1,44,1,44,1,44,1,44,5,44,464,8,44,10,44,
  	12,44,467,9,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,1,44,5,44,478,
  	8,44,10,44,12,44,481,9,44,1,44,1,44,3,44,485,8,44,1,45,1,45,3,45,489,
  	8,45,1,46,1,46,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,47,1,47,
  	1,47,1,47,1,47,1,48,1,48,1,48,1,48,3,48,511,8,48,1,48,1,48,1,48,1,48,
  	1,48,3,48,518,8,48,5,48,520,8,48,10,48,12,48,523,9,48,3,48,525,8,48,1,
  	49,1,49,1,49,1,49,1,49,1,49,1,49,1,49,1,49,1,49,5,49,537,8,49,10,49,12,
  	49,540,9,49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,
  	51,1,51,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,3,53,563,8,53,1,54,1,
  	54,1,54,1,54,1,54,1,55,1,55,1,55,5,55,573,8,55,10,55,12,55,576,9,55,3,
  	55,578,8,55,1,56,1,56,1,57,1,57,1,58,1,58,1,58,1,59,1,59,1,60,1,60,1,
  	60,0,0,61,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,
  	90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,0,9,1,0,9,
  	10,1,0,6,8,2,0,4,4,10,10,1,0,2,3,2,0,55,56,62,66,5,0,2,3,6,16,18,18,20,
  	20,22,22,1,0,11,16,1,0,20,21,1,0,18,19,609,0,127,1,0,0,0,2,147,1,0,0,
  	0,4,149,1,0,0,0,6,160,1,0,0,0,8,162,1,0,0,0,10,170,1,0,0,0,12,179,1,0,
  	0,0,14,183,1,0,0,0,16,197,1,0,0,0,18,208,1,0,0,0,20,229,1,0,0,0,22,235,
  	1,0,0,0,24,241,1,0,0,0,26,245,1,0,0,0,28,249,1,0,0,0,30,251,1,0,0,0,32,
  	253,1,0,0,0,34,255,1,0,0,0,36,263,1,0,0,0,38,268,1,0,0,0,40,277,1,0,0,
  	0,42,296,1,0,0,0,44,300,1,0,0,0,46,304,1,0,0,0,48,327,1,0,0,0,50,329,
  	1,0,0,0,52,332,1,0,0,0,54,335,1,0,0,0,56,349,1,0,0,0,58,357,1,0,0,0,60,
  	365,1,0,0,0,62,374,1,0,0,0,64,380,1,0,0,0,66,385,1,0,0,0,68,393,1,0,0,
  	0,70,410,1,0,0,0,72,412,1,0,0,0,74,414,1,0,0,0,76,432,1,0,0,0,78,436,
  	1,0,0,0,80,439,1,0,0,0,82,443,1,0,0,0,84,448,1,0,0,0,86,454,1,0,0,0,88,
  	458,1,0,0,0,90,488,1,0,0,0,92,490,1,0,0,0,94,496,1,0,0,0,96,524,1,0,0,
  	0,98,526,1,0,0,0,100,543,1,0,0,0,102,548,1,0,0,0,104,554,1,0,0,0,106,
  	562,1,0,0,0,108,564,1,0,0,0,110,577,1,0,0,0,112,579,1,0,0,0,114,581,1,
  	0,0,0,116,583,1,0,0,0,118,586,1,0,0,0,120,588,1,0,0,0,122,126,3,18,9,
  	0,123,126,3,8,4,0,124,126,3,2,1,0,125,122,1,0,0,0,125,123,1,0,0,0,125,
  	124,1,0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,1,1,0,
  	0,0,129,127,1,0,0,0,130,140,3,6,3,0,131,140,3,32,16,0,132,140,3,20,10,
  	0,133,140,3,26,13,0,134,140,3,28,14,0,135,140,3,30,15,0,136,140,3,80,
  	40,0,137,140,3,82,41,0,138,140,3,84,42,0,139,130,1,0,0,0,139,131,1,0,
  	0,0,139,132,1,0,0,0,139,133,1,0,0,0,139,134,1,0,0,0,139,135,1,0,0,0,139,
  	136,1,0,0,0,139,137,1,0,0,0,139,138,1,0,0,0,140,141,1,0,0,0,141,142,5,
  	31,0,0,142,148,1,0,0,0,143,146,3,88,44,0,144,146,3,90,45,0,145,143,1,
  	0,0,0,145,144,1,0,0,0,146,148,1,0,0,0,147,139,1,0,0,0,147,145,1,0,0,0,
  	148,3,1,0,0,0,149,153,5,34,0,0,150,152,3,2,1,0,151,150,1,0,0,0,152,155,
  	1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,153,1,0,0,
  	0,156,157,5,35,0,0,157,5,1,0,0,0,158,161,3,10,5,0,159,161,3,8,4,0,160,
  	158,1,0,0,0,160,159,1,0,0,0,161,7,1,0,0,0,162,168,3,12,6,0,163,164,5,
  	32,0,0,164,165,3,96,48,0,165,166,5,33,0,0,166,167,3,4,2,0,167,169,1,0,
  	0,0,168,163,1,0,0,0,168,169,1,0,0,0,169,9,1,0,0,0,170,175,3,12,6,0,171,
  	172,5,32,0,0,172,173,3,110,55,0,173,174,5,33,0,0,174,176,1,0,0,0,175,
  	171,1,0,0,0,175,176,1,0,0,0,176,11,1,0,0,0,177,180,3,106,53,0,178,180,
  	3,14,7,0,179,177,1,0,0,0,179,178,1,0,0,0,180,181,1,0,0,0,181,182,5,65,
  	0,0,182,13,1,0,0,0,183,195,3,106,53,0,184,186,5,41,0,0,185,184,1,0,0,
  	0,186,187,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,196,1,0,0,0,189,
  	190,5,41,0,0,190,192,5,63,0,0,191,189,1,0,0,0,192,193,1,0,0,0,193,191,
  	1,0,0,0,193,194,1,0,0,0,194,196,1,0,0,0,195,185,1,0,0,0,195,191,1,0,0,
  	0,196,15,1,0,0,0,197,198,5,32,0,0,198,203,3,112,56,0,199,200,5,46,0,0,
  	200,202,3,112,56,0,201,199,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,
  	204,1,0,0,0,204,206,1,0,0,0,205,203,1,0,0,0,206,207,5,33,0,0,207,17,1,
  	0,0,0,208,209,5,47,0,0,209,211,3,112,56,0,210,212,3,16,8,0,211,210,1,
  	0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,213,222,5,34,0,0,214,215,5,48,0,
  	0,215,221,3,98,49,0,216,217,5,49,0,0,217,221,3,98,49,0,218,219,5,50,0,
  	0,219,221,3,98,49,0,220,214,1,0,0,0,220,216,1,0,0,0,220,218,1,0,0,0,221,
  	224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,222,1,
  	0,0,0,225,226,5,35,0,0,226,19,1,0,0,0,227,230,3,22,11,0,228,230,3,24,
  	12,0,229,227,1,0,0,0,229,228,1,0,0,0,230,231,1,0,0,0,231,232,3,32,16,
  	0,232,21,1,0,0,0,233,236,3,6,3,0,234,236,5,65,0,0,235,233,1,0,0,0,235,
  	234,1,0,0,0,236,237,1,0,0,0,237,238,5,22,0,0,238,23,1,0,0,0,239,242,3,
  	6,3,0,240,242,5,65,0,0,241,239,1,0,0,0,241,240,1,0,0,0,242,243,1,0,0,
  	0,243,244,5,23,0,0,244,25,1,0,0,0,245,247,5,38,0,0,246,248,3,32,16,0,
  	247,246,1,0,0,0,247,248,1,0,0,0,248,27,1,0,0,0,249,250,5,39,0,0,250,29,
  	1,0,0,0,251,252,5,40,0,0,252,31,1,0,0,0,253,254,3,34,17,0,254,33,1,0,
  	0,0,255,260,3,36,18,0,256,257,5,30,0,0,257,259,3,36,18,0,258,256,1,0,
  	0,0,259,262,1,0,0,0,260,258,1,0,0,0,260,261,1,0,0,0,261,35,1,0,0,0,262,
  	260,1,0,0,0,263,266,3,38,19,0,264,265,5,24,0,0,265,267,3,38,19,0,266,
  	264,1,0,0,0,266,267,1,0,0,0,267,37,1,0,0,0,268,274,3,40,20,0,269,270,
  	3,120,60,0,270,271,3,40,20,0,271,273,1,0,0,0,272,269,1,0,0,0,273,276,
  	1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,39,1,0,0,0,276,274,1,0,0,
  	0,277,283,3,42,21,0,278,279,3,118,59,0,279,280,3,42,21,0,280,282,1,0,
  	0,0,281,278,1,0,0,0,282,285,1,0,0,0,283,281,1,0,0,0,283,284,1,0,0,0,284,
  	41,1,0,0,0,285,283,1,0,0,0,286,292,3,56,28,0,287,288,3,114,57,0,288,289,
  	3,56,28,0,289,291,1,0,0,0,290,287,1,0,0,0,291,294,1,0,0,0,292,290,1,0,
  	0,0,292,293,1,0,0,0,293,297,1,0,0,0,294,292,1,0,0,0,295,297,3,54,27,0,
  	296,286,1,0,0,0,296,295,1,0,0,0,297,43,1,0,0,0,298,301,3,50,25,0,299,
  	301,3,52,26,0,300,298,1,0,0,0,300,299,1,0,0,0,300,301,1,0,0,0,301,302,
  	1,0,0,0,302,303,3,46,23,0,303,45,1,0,0,0,304,310,3,48,24,0,305,306,3,
  	120,60,0,306,307,3,48,24,0,307,309,1,0,0,0,308,305,1,0,0,0,309,312,1,
  	0,0,0,310,308,1,0,0,0,310,311,1,0,0,0,311,47,1,0,0,0,312,310,1,0,0,0,
  	313,314,3,114,57,0,314,320,3,38,19,0,315,316,3,118,59,0,316,317,3,44,
  	22,0,317,319,1,0,0,0,318,315,1,0,0,0,319,322,1,0,0,0,320,318,1,0,0,0,
  	320,321,1,0,0,0,321,328,1,0,0,0,322,320,1,0,0,0,323,324,5,32,0,0,324,
  	325,3,44,22,0,325,326,5,33,0,0,326,328,1,0,0,0,327,313,1,0,0,0,327,323,
  	1,0,0,0,328,49,1,0,0,0,329,330,5,27,0,0,330,331,3,66,33,0,331,51,1,0,
  	0,0,332,333,5,28,0,0,333,334,3,68,34,0,334,53,1,0,0,0,335,336,3,56,28,
  	0,336,337,5,17,0,0,337,343,5,36,0,0,338,344,3,44,22,0,339,340,5,32,0,
  	0,340,341,3,44,22,0,341,342,5,33,0,0,342,344,1,0,0,0,343,338,1,0,0,0,
  	343,339,1,0,0,0,344,345,1,0,0,0,345,343,1,0,0,0,345,346,1,0,0,0,346,347,
  	1,0,0,0,347,348,5,37,0,0,348,55,1,0,0,0,349,354,3,58,29,0,350,351,7,0,
  	0,0,351,353,3,58,29,0,352,350,1,0,0,0,353,356,1,0,0,0,354,352,1,0,0,0,
  	354,355,1,0,0,0,355,57,1,0,0,0,356,354,1,0,0,0,357,362,3,60,30,0,358,
  	359,7,1,0,0,359,361,3,60,30,0,360,358,1,0,0,0,361,364,1,0,0,0,362,360,
  	1,0,0,0,362,363,1,0,0,0,363,59,1,0,0,0,364,362,1,0,0,0,365,370,3,62,31,
  	0,366,367,5,5,0,0,367,369,3,62,31,0,368,366,1,0,0,0,369,372,1,0,0,0,370,
  	368,1,0,0,0,370,371,1,0,0,0,371,61,1,0,0,0,372,370,1,0,0,0,373,375,7,
  	2,0,0,374,373,1,0,0,0,374,375,1,0,0,0,375,376,1,0,0,0,376,377,3,64,32,
  	0,377,63,1,0,0,0,378,381,3,66,33,0,379,381,3,68,34,0,380,378,1,0,0,0,
  	380,379,1,0,0,0,381,383,1,0,0,0,382,384,7,3,0,0,383,382,1,0,0,0,383,384,
  	1,0,0,0,384,65,1,0,0,0,385,390,3,70,35,0,386,387,5,27,0,0,387,389,3,70,
  	35,0,388,386,1,0,0,0,389,392,1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,
  	391,67,1,0,0,0,392,390,1,0,0,0,393,398,3,70,35,0,394,395,5,28,0,0,395,
  	397,3,70,35,0,396,394,1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,
  	1,0,0,0,399,69,1,0,0,0,400,398,1,0,0,0,401,411,3,108,54,0,402,403,5,32,
  	0,0,403,404,3,32,16,0,404,405,5,33,0,0,405,411,1,0,0,0,406,411,3,116,
  	58,0,407,411,3,78,39,0,408,411,3,74,37,0,409,411,3,72,36,0,410,401,1,
  	0,0,0,410,402,1,0,0,0,410,406,1,0,0,0,410,407,1,0,0,0,410,408,1,0,0,0,
  	410,409,1,0,0,0,411,71,1,0,0,0,412,413,7,4,0,0,413,73,1,0,0,0,414,415,
  	5,58,0,0,415,416,5,32,0,0,416,417,3,32,16,0,417,418,5,33,0,0,418,419,
  	5,34,0,0,419,422,3,76,38,0,420,421,5,60,0,0,421,423,3,4,2,0,422,420,1,
  	0,0,0,422,423,1,0,0,0,423,424,1,0,0,0,424,425,5,35,0,0,425,75,1,0,0,0,
  	426,427,5,59,0,0,427,428,3,32,16,0,428,430,3,4,2,0,429,431,5,29,0,0,430,
  	429,1,0,0,0,430,431,1,0,0,0,431,433,1,0,0,0,432,426,1,0,0,0,433,434,1,
  	0,0,0,434,432,1,0,0,0,434,435,1,0,0,0,435,77,1,0,0,0,436,437,5,65,0,0,
  	437,438,3,86,43,0,438,79,1,0,0,0,439,440,5,65,0,0,440,441,5,25,0,0,441,
  	442,3,32,16,0,442,81,1,0,0,0,443,444,5,65,0,0,444,445,5,25,0,0,445,446,
  	3,32,16,0,446,447,3,86,43,0,447,83,1,0,0,0,448,449,5,65,0,0,449,450,5,
  	4,0,0,450,451,3,86,43,0,451,85,1,0,0,0,452,453,5,26,0,0,453,455,3,32,
  	16,0,454,452,1,0,0,0,455,456,1,0,0,0,456,454,1,0,0,0,456,457,1,0,0,0,
  	457,87,1,0,0,0,458,459,5,42,0,0,459,465,5,32,0,0,460,461,3,20,10,0,461,
  	462,5,46,0,0,462,464,1,0,0,0,463,460,1,0,0,0,464,467,1,0,0,0,465,463,
  	1,0,0,0,465,466,1,0,0,0,466,468,1,0,0,0,467,465,1,0,0,0,468,469,3,32,
  	16,0,469,470,5,33,0,0,470,479,3,4,2,0,471,472,5,43,0,0,472,473,5,32,0,
  	0,473,474,3,32,16,0,474,475,5,33,0,0,475,476,3,4,2,0,476,478,1,0,0,0,
  	477,471,1,0,0,0,478,481,1,0,0,0,479,477,1,0,0,0,479,480,1,0,0,0,480,484,
  	1,0,0,0,481,479,1,0,0,0,482,483,5,43,0,0,483,485,3,4,2,0,484,482,1,0,
  	0,0,484,485,1,0,0,0,485,89,1,0,0,0,486,489,3,92,46,0,487,489,3,94,47,
  	0,488,486,1,0,0,0,488,487,1,0,0,0,489,91,1,0,0,0,490,491,5,44,0,0,491,
  	492,5,32,0,0,492,493,3,32,16,0,493,494,5,33,0,0,494,495,3,4,2,0,495,93,
  	1,0,0,0,496,497,5,45,0,0,497,498,5,32,0,0,498,499,3,20,10,0,499,500,5,
  	31,0,0,500,501,3,32,16,0,501,502,5,31,0,0,502,503,3,32,16,0,503,504,5,
  	33,0,0,504,505,3,4,2,0,505,95,1,0,0,0,506,507,3,106,53,0,507,510,5,65,
  	0,0,508,509,5,22,0,0,509,511,3,72,36,0,510,508,1,0,0,0,510,511,1,0,0,
  	0,511,521,1,0,0,0,512,513,5,46,0,0,513,514,3,106,53,0,514,517,5,65,0,
  	0,515,516,5,22,0,0,516,518,3,72,36,0,517,515,1,0,0,0,517,518,1,0,0,0,
  	518,520,1,0,0,0,519,512,1,0,0,0,520,523,1,0,0,0,521,519,1,0,0,0,521,522,
  	1,0,0,0,522,525,1,0,0,0,523,521,1,0,0,0,524,506,1,0,0,0,524,525,1,0,0,
  	0,525,97,1,0,0,0,526,538,5,34,0,0,527,537,3,100,50,0,528,537,3,102,51,
  	0,529,537,3,8,4,0,530,531,3,12,6,0,531,532,5,31,0,0,532,537,1,0,0,0,533,
  	534,3,20,10,0,534,535,5,31,0,0,535,537,1,0,0,0,536,527,1,0,0,0,536,528,
  	1,0,0,0,536,529,1,0,0,0,536,530,1,0,0,0,536,533,1,0,0,0,537,540,1,0,0,
  	0,538,536,1,0,0,0,538,539,1,0,0,0,539,541,1,0,0,0,540,538,1,0,0,0,541,
  	542,5,35,0,0,542,99,1,0,0,0,543,544,5,32,0,0,544,545,3,96,48,0,545,546,
  	5,33,0,0,546,547,3,4,2,0,547,101,1,0,0,0,548,549,3,104,52,0,549,550,5,
  	32,0,0,550,551,3,96,48,0,551,552,5,33,0,0,552,553,3,4,2,0,553,103,1,0,
  	0,0,554,555,7,5,0,0,555,105,1,0,0,0,556,563,5,54,0,0,557,563,5,51,0,0,
  	558,563,5,52,0,0,559,563,5,53,0,0,560,563,5,57,0,0,561,563,3,112,56,0,
  	562,556,1,0,0,0,562,557,1,0,0,0,562,558,1,0,0,0,562,559,1,0,0,0,562,560,
  	1,0,0,0,562,561,1,0,0,0,563,107,1,0,0,0,564,565,5,65,0,0,565,566,5,32,
  	0,0,566,567,3,110,55,0,567,568,5,33,0,0,568,109,1,0,0,0,569,574,3,32,
  	16,0,570,571,5,46,0,0,571,573,3,32,16,0,572,570,1,0,0,0,573,576,1,0,0,
  	0,574,572,1,0,0,0,574,575,1,0,0,0,575,578,1,0,0,0,576,574,1,0,0,0,577,
  	569,1,0,0,0,577,578,1,0,0,0,578,111,1,0,0,0,579,580,5,65,0,0,580,113,
  	1,0,0,0,581,582,7,6,0,0,582,115,1,0,0,0,583,584,5,1,0,0,584,585,5,66,
  	0,0,585,117,1,0,0,0,586,587,7,7,0,0,587,119,1,0,0,0,588,589,7,8,0,0,589,
  	121,1,0,0,0,59,125,127,139,145,147,153,160,168,175,179,187,193,195,203,
  	211,220,222,229,235,241,247,260,266,274,283,292,296,300,310,320,327,343,
  	345,354,362,370,374,380,383,390,398,410,422,430,434,456,465,479,484,488,
  	510,517,521,524,536,538,562,574,577
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sugarParserStaticData = std::move(staticData);
}

}

SugarParser::SugarParser(TokenStream *input) : SugarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SugarParser::SugarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SugarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sugarParserStaticData->atn, sugarParserStaticData->decisionToDFA, sugarParserStaticData->sharedContextCache, options);
}

SugarParser::~SugarParser() {
  delete _interpreter;
}

const atn::ATN& SugarParser::getATN() const {
  return *sugarParserStaticData->atn;
}

std::string SugarParser::getGrammarFileName() const {
  return "Sugar.g4";
}

const std::vector<std::string>& SugarParser::getRuleNames() const {
  return sugarParserStaticData->ruleNames;
}

const dfa::Vocabulary& SugarParser::getVocabulary() const {
  return sugarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SugarParser::getSerializedATN() const {
  return sugarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

SugarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Class_declarationContext *> SugarParser::ProgramContext::class_declaration() {
  return getRuleContexts<SugarParser::Class_declarationContext>();
}

SugarParser::Class_declarationContext* SugarParser::ProgramContext::class_declaration(size_t i) {
  return getRuleContext<SugarParser::Class_declarationContext>(i);
}

std::vector<SugarParser::Function_declarationContext *> SugarParser::ProgramContext::function_declaration() {
  return getRuleContexts<SugarParser::Function_declarationContext>();
}

SugarParser::Function_declarationContext* SugarParser::ProgramContext::function_declaration(size_t i) {
  return getRuleContext<SugarParser::Function_declarationContext>(i);
}

std::vector<SugarParser::StatementContext *> SugarParser::ProgramContext::statement() {
  return getRuleContexts<SugarParser::StatementContext>();
}

SugarParser::StatementContext* SugarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<SugarParser::StatementContext>(i);
}


size_t SugarParser::ProgramContext::getRuleIndex() const {
  return SugarParser::RuleProgram;
}

void SugarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void SugarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any SugarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::ProgramContext* SugarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SugarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -4037277225404333038) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 7) != 0)) {
      setState(125);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(122);
        class_declaration();
        break;
      }

      case 2: {
        setState(123);
        function_declaration();
        break;
      }

      case 3: {
        setState(124);
        statement();
        break;
      }

      default:
        break;
      }
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SugarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::StatementContext::SEMICOLON() {
  return getToken(SugarParser::SEMICOLON, 0);
}

SugarParser::DeclarationContext* SugarParser::StatementContext::declaration() {
  return getRuleContext<SugarParser::DeclarationContext>(0);
}

SugarParser::ExpressionContext* SugarParser::StatementContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

SugarParser::AssignmentContext* SugarParser::StatementContext::assignment() {
  return getRuleContext<SugarParser::AssignmentContext>(0);
}

SugarParser::Return_statementContext* SugarParser::StatementContext::return_statement() {
  return getRuleContext<SugarParser::Return_statementContext>(0);
}

SugarParser::Break_statementContext* SugarParser::StatementContext::break_statement() {
  return getRuleContext<SugarParser::Break_statementContext>(0);
}

SugarParser::Continue_statementContext* SugarParser::StatementContext::continue_statement() {
  return getRuleContext<SugarParser::Continue_statementContext>(0);
}

SugarParser::List_pushbackContext* SugarParser::StatementContext::list_pushback() {
  return getRuleContext<SugarParser::List_pushbackContext>(0);
}

SugarParser::List_insertionContext* SugarParser::StatementContext::list_insertion() {
  return getRuleContext<SugarParser::List_insertionContext>(0);
}

SugarParser::List_removalContext* SugarParser::StatementContext::list_removal() {
  return getRuleContext<SugarParser::List_removalContext>(0);
}

SugarParser::If_expressionContext* SugarParser::StatementContext::if_expression() {
  return getRuleContext<SugarParser::If_expressionContext>(0);
}

SugarParser::Loop_expressionContext* SugarParser::StatementContext::loop_expression() {
  return getRuleContext<SugarParser::Loop_expressionContext>(0);
}


size_t SugarParser::StatementContext::getRuleIndex() const {
  return SugarParser::RuleStatement;
}

void SugarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SugarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any SugarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::StatementContext* SugarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SugarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SugarParser::T__0:
      case SugarParser::NOT:
      case SugarParser::MINUS:
      case SugarParser::LPAREN:
      case SugarParser::RETURN:
      case SugarParser::BREAK:
      case SugarParser::CONTINUE:
      case SugarParser::INTTYPE:
      case SugarParser::DECIMALTYPE:
      case SugarParser::STRINGTYPE:
      case SugarParser::BOOLTYPE:
      case SugarParser::BOOL_TRUE:
      case SugarParser::BOOL_FALSE:
      case SugarParser::ANYTYPE:
      case SugarParser::SWITCH:
      case SugarParser::LAST_ASSIGNED:
      case SugarParser::INTEGER:
      case SugarParser::DECIMAL:
      case SugarParser::VAR:
      case SugarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(139);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          setState(130);
          declaration();
          break;
        }

        case 2: {
          setState(131);
          expression();
          break;
        }

        case 3: {
          setState(132);
          assignment();
          break;
        }

        case 4: {
          setState(133);
          return_statement();
          break;
        }

        case 5: {
          setState(134);
          break_statement();
          break;
        }

        case 6: {
          setState(135);
          continue_statement();
          break;
        }

        case 7: {
          setState(136);
          list_pushback();
          break;
        }

        case 8: {
          setState(137);
          list_insertion();
          break;
        }

        case 9: {
          setState(138);
          list_removal();
          break;
        }

        default:
          break;
        }
        setState(141);
        match(SugarParser::SEMICOLON);
        break;
      }

      case SugarParser::IF:
      case SugarParser::WHILE:
      case SugarParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(145);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SugarParser::IF: {
            setState(143);
            if_expression();
            break;
          }

          case SugarParser::WHILE:
          case SugarParser::FOR: {
            setState(144);
            loop_expression();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SugarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::BlockContext::LCURL() {
  return getToken(SugarParser::LCURL, 0);
}

tree::TerminalNode* SugarParser::BlockContext::RCURL() {
  return getToken(SugarParser::RCURL, 0);
}

std::vector<SugarParser::StatementContext *> SugarParser::BlockContext::statement() {
  return getRuleContexts<SugarParser::StatementContext>();
}

SugarParser::StatementContext* SugarParser::BlockContext::statement(size_t i) {
  return getRuleContext<SugarParser::StatementContext>(i);
}


size_t SugarParser::BlockContext::getRuleIndex() const {
  return SugarParser::RuleBlock;
}

void SugarParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SugarParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any SugarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::BlockContext* SugarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, SugarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(SugarParser::LCURL);
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -4037417962892688366) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 7) != 0)) {
      setState(150);
      statement();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(156);
    match(SugarParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

SugarParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Class_initContext* SugarParser::DeclarationContext::class_init() {
  return getRuleContext<SugarParser::Class_initContext>(0);
}

SugarParser::Function_declarationContext* SugarParser::DeclarationContext::function_declaration() {
  return getRuleContext<SugarParser::Function_declarationContext>(0);
}


size_t SugarParser::DeclarationContext::getRuleIndex() const {
  return SugarParser::RuleDeclaration;
}

void SugarParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void SugarParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any SugarParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::DeclarationContext* SugarParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, SugarParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(158);
      class_init();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(159);
      function_declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declarationContext ------------------------------------------------------------------

SugarParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Var_declarationContext* SugarParser::Function_declarationContext::var_declaration() {
  return getRuleContext<SugarParser::Var_declarationContext>(0);
}

tree::TerminalNode* SugarParser::Function_declarationContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::Parameter_listContext* SugarParser::Function_declarationContext::parameter_list() {
  return getRuleContext<SugarParser::Parameter_listContext>(0);
}

tree::TerminalNode* SugarParser::Function_declarationContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::BlockContext* SugarParser::Function_declarationContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::Function_declarationContext::getRuleIndex() const {
  return SugarParser::RuleFunction_declaration;
}

void SugarParser::Function_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declaration(this);
}

void SugarParser::Function_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declaration(this);
}


std::any SugarParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Function_declarationContext* SugarParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, SugarParser::RuleFunction_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    var_declaration();
    setState(168);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(163);
      match(SugarParser::LPAREN);
      setState(164);
      parameter_list();
      setState(165);
      match(SugarParser::RPAREN);
      setState(166);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_initContext ------------------------------------------------------------------

SugarParser::Class_initContext::Class_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Var_declarationContext* SugarParser::Class_initContext::var_declaration() {
  return getRuleContext<SugarParser::Var_declarationContext>(0);
}

tree::TerminalNode* SugarParser::Class_initContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::Argument_listContext* SugarParser::Class_initContext::argument_list() {
  return getRuleContext<SugarParser::Argument_listContext>(0);
}

tree::TerminalNode* SugarParser::Class_initContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}


size_t SugarParser::Class_initContext::getRuleIndex() const {
  return SugarParser::RuleClass_init;
}

void SugarParser::Class_initContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_init(this);
}

void SugarParser::Class_initContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_init(this);
}


std::any SugarParser::Class_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_init(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_initContext* SugarParser::class_init() {
  Class_initContext *_localctx = _tracker.createInstance<Class_initContext>(_ctx, getState());
  enterRule(_localctx, 10, SugarParser::RuleClass_init);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    var_declaration();
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SugarParser::LPAREN) {
      setState(171);
      match(SugarParser::LPAREN);
      setState(172);
      argument_list();
      setState(173);
      match(SugarParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

SugarParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Var_declarationContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

SugarParser::Variable_typeContext* SugarParser::Var_declarationContext::variable_type() {
  return getRuleContext<SugarParser::Variable_typeContext>(0);
}

SugarParser::List_declarationContext* SugarParser::Var_declarationContext::list_declaration() {
  return getRuleContext<SugarParser::List_declarationContext>(0);
}


size_t SugarParser::Var_declarationContext::getRuleIndex() const {
  return SugarParser::RuleVar_declaration;
}

void SugarParser::Var_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declaration(this);
}

void SugarParser::Var_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declaration(this);
}


std::any SugarParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Var_declarationContext* SugarParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 12, SugarParser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(177);
      variable_type();
      break;
    }

    case 2: {
      setState(178);
      list_declaration();
      break;
    }

    default:
      break;
    }
    setState(181);
    match(SugarParser::VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_declarationContext ------------------------------------------------------------------

SugarParser::List_declarationContext::List_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Variable_typeContext* SugarParser::List_declarationContext::variable_type() {
  return getRuleContext<SugarParser::Variable_typeContext>(0);
}

std::vector<tree::TerminalNode *> SugarParser::List_declarationContext::LISTDECL() {
  return getTokens(SugarParser::LISTDECL);
}

tree::TerminalNode* SugarParser::List_declarationContext::LISTDECL(size_t i) {
  return getToken(SugarParser::LISTDECL, i);
}

std::vector<tree::TerminalNode *> SugarParser::List_declarationContext::INTEGER() {
  return getTokens(SugarParser::INTEGER);
}

tree::TerminalNode* SugarParser::List_declarationContext::INTEGER(size_t i) {
  return getToken(SugarParser::INTEGER, i);
}


size_t SugarParser::List_declarationContext::getRuleIndex() const {
  return SugarParser::RuleList_declaration;
}

void SugarParser::List_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_declaration(this);
}

void SugarParser::List_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_declaration(this);
}


std::any SugarParser::List_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_declaration(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_declarationContext* SugarParser::list_declaration() {
  List_declarationContext *_localctx = _tracker.createInstance<List_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, SugarParser::RuleList_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    variable_type();
    setState(195);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(185); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(184);
        match(SugarParser::LISTDECL);
        setState(187); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SugarParser::LISTDECL);
      break;
    }

    case 2: {
      setState(191); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(189);
        match(SugarParser::LISTDECL);
        setState(190);
        match(SugarParser::INTEGER);
        setState(193); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SugarParser::LISTDECL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_inheritance_listContext ------------------------------------------------------------------

SugarParser::Class_inheritance_listContext::Class_inheritance_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Class_inheritance_listContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

std::vector<SugarParser::User_defined_typeContext *> SugarParser::Class_inheritance_listContext::user_defined_type() {
  return getRuleContexts<SugarParser::User_defined_typeContext>();
}

SugarParser::User_defined_typeContext* SugarParser::Class_inheritance_listContext::user_defined_type(size_t i) {
  return getRuleContext<SugarParser::User_defined_typeContext>(i);
}

tree::TerminalNode* SugarParser::Class_inheritance_listContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> SugarParser::Class_inheritance_listContext::COMMA() {
  return getTokens(SugarParser::COMMA);
}

tree::TerminalNode* SugarParser::Class_inheritance_listContext::COMMA(size_t i) {
  return getToken(SugarParser::COMMA, i);
}


size_t SugarParser::Class_inheritance_listContext::getRuleIndex() const {
  return SugarParser::RuleClass_inheritance_list;
}

void SugarParser::Class_inheritance_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_inheritance_list(this);
}

void SugarParser::Class_inheritance_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_inheritance_list(this);
}


std::any SugarParser::Class_inheritance_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_inheritance_list(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_inheritance_listContext* SugarParser::class_inheritance_list() {
  Class_inheritance_listContext *_localctx = _tracker.createInstance<Class_inheritance_listContext>(_ctx, getState());
  enterRule(_localctx, 16, SugarParser::RuleClass_inheritance_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(SugarParser::LPAREN);
    setState(198);
    user_defined_type();
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SugarParser::COMMA) {
      setState(199);
      match(SugarParser::COMMA);
      setState(200);
      user_defined_type();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    match(SugarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_declarationContext ------------------------------------------------------------------

SugarParser::Class_declarationContext::Class_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Class_declarationContext::CLASS() {
  return getToken(SugarParser::CLASS, 0);
}

SugarParser::User_defined_typeContext* SugarParser::Class_declarationContext::user_defined_type() {
  return getRuleContext<SugarParser::User_defined_typeContext>(0);
}

tree::TerminalNode* SugarParser::Class_declarationContext::LCURL() {
  return getToken(SugarParser::LCURL, 0);
}

tree::TerminalNode* SugarParser::Class_declarationContext::RCURL() {
  return getToken(SugarParser::RCURL, 0);
}

SugarParser::Class_inheritance_listContext* SugarParser::Class_declarationContext::class_inheritance_list() {
  return getRuleContext<SugarParser::Class_inheritance_listContext>(0);
}

std::vector<tree::TerminalNode *> SugarParser::Class_declarationContext::PUBLIC() {
  return getTokens(SugarParser::PUBLIC);
}

tree::TerminalNode* SugarParser::Class_declarationContext::PUBLIC(size_t i) {
  return getToken(SugarParser::PUBLIC, i);
}

std::vector<SugarParser::Class_member_segmentContext *> SugarParser::Class_declarationContext::class_member_segment() {
  return getRuleContexts<SugarParser::Class_member_segmentContext>();
}

SugarParser::Class_member_segmentContext* SugarParser::Class_declarationContext::class_member_segment(size_t i) {
  return getRuleContext<SugarParser::Class_member_segmentContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Class_declarationContext::PROTECTED() {
  return getTokens(SugarParser::PROTECTED);
}

tree::TerminalNode* SugarParser::Class_declarationContext::PROTECTED(size_t i) {
  return getToken(SugarParser::PROTECTED, i);
}

std::vector<tree::TerminalNode *> SugarParser::Class_declarationContext::PRIVATE() {
  return getTokens(SugarParser::PRIVATE);
}

tree::TerminalNode* SugarParser::Class_declarationContext::PRIVATE(size_t i) {
  return getToken(SugarParser::PRIVATE, i);
}


size_t SugarParser::Class_declarationContext::getRuleIndex() const {
  return SugarParser::RuleClass_declaration;
}

void SugarParser::Class_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_declaration(this);
}

void SugarParser::Class_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_declaration(this);
}


std::any SugarParser::Class_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_declaration(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_declarationContext* SugarParser::class_declaration() {
  Class_declarationContext *_localctx = _tracker.createInstance<Class_declarationContext>(_ctx, getState());
  enterRule(_localctx, 18, SugarParser::RuleClass_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(SugarParser::CLASS);
    setState(209);
    user_defined_type();
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SugarParser::LPAREN) {
      setState(210);
      class_inheritance_list();
    }
    setState(213);
    match(SugarParser::LCURL);
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1970324836974592) != 0)) {
      setState(220);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SugarParser::PUBLIC: {
          setState(214);
          match(SugarParser::PUBLIC);
          setState(215);
          class_member_segment();
          break;
        }

        case SugarParser::PROTECTED: {
          setState(216);
          match(SugarParser::PROTECTED);
          setState(217);
          class_member_segment();
          break;
        }

        case SugarParser::PRIVATE: {
          setState(218);
          match(SugarParser::PRIVATE);
          setState(219);
          class_member_segment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(225);
    match(SugarParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

SugarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::ExpressionContext* SugarParser::AssignmentContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

SugarParser::Basic_assignmentContext* SugarParser::AssignmentContext::basic_assignment() {
  return getRuleContext<SugarParser::Basic_assignmentContext>(0);
}

SugarParser::Default_assignmentContext* SugarParser::AssignmentContext::default_assignment() {
  return getRuleContext<SugarParser::Default_assignmentContext>(0);
}


size_t SugarParser::AssignmentContext::getRuleIndex() const {
  return SugarParser::RuleAssignment;
}

void SugarParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void SugarParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any SugarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::AssignmentContext* SugarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 20, SugarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(227);
      basic_assignment();
      break;
    }

    case 2: {
      setState(228);
      default_assignment();
      break;
    }

    default:
      break;
    }
    setState(231);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_assignmentContext ------------------------------------------------------------------

SugarParser::Basic_assignmentContext::Basic_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Basic_assignmentContext::EQUAL() {
  return getToken(SugarParser::EQUAL, 0);
}

SugarParser::DeclarationContext* SugarParser::Basic_assignmentContext::declaration() {
  return getRuleContext<SugarParser::DeclarationContext>(0);
}

tree::TerminalNode* SugarParser::Basic_assignmentContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}


size_t SugarParser::Basic_assignmentContext::getRuleIndex() const {
  return SugarParser::RuleBasic_assignment;
}

void SugarParser::Basic_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasic_assignment(this);
}

void SugarParser::Basic_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasic_assignment(this);
}


std::any SugarParser::Basic_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitBasic_assignment(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Basic_assignmentContext* SugarParser::basic_assignment() {
  Basic_assignmentContext *_localctx = _tracker.createInstance<Basic_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 22, SugarParser::RuleBasic_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(233);
      declaration();
      break;
    }

    case 2: {
      setState(234);
      match(SugarParser::VAR);
      break;
    }

    default:
      break;
    }
    setState(237);
    match(SugarParser::EQUAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_assignmentContext ------------------------------------------------------------------

SugarParser::Default_assignmentContext::Default_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Default_assignmentContext::DEFAULT_ASSIGN() {
  return getToken(SugarParser::DEFAULT_ASSIGN, 0);
}

SugarParser::DeclarationContext* SugarParser::Default_assignmentContext::declaration() {
  return getRuleContext<SugarParser::DeclarationContext>(0);
}

tree::TerminalNode* SugarParser::Default_assignmentContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}


size_t SugarParser::Default_assignmentContext::getRuleIndex() const {
  return SugarParser::RuleDefault_assignment;
}

void SugarParser::Default_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_assignment(this);
}

void SugarParser::Default_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_assignment(this);
}


std::any SugarParser::Default_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitDefault_assignment(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Default_assignmentContext* SugarParser::default_assignment() {
  Default_assignmentContext *_localctx = _tracker.createInstance<Default_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 24, SugarParser::RuleDefault_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(239);
      declaration();
      break;
    }

    case 2: {
      setState(240);
      match(SugarParser::VAR);
      break;
    }

    default:
      break;
    }
    setState(243);
    match(SugarParser::DEFAULT_ASSIGN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

SugarParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Return_statementContext::RETURN() {
  return getToken(SugarParser::RETURN, 0);
}

SugarParser::ExpressionContext* SugarParser::Return_statementContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}


size_t SugarParser::Return_statementContext::getRuleIndex() const {
  return SugarParser::RuleReturn_statement;
}

void SugarParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void SugarParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


std::any SugarParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Return_statementContext* SugarParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, SugarParser::RuleReturn_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(SugarParser::RETURN);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -4215369246923815918) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 7) != 0)) {
      setState(246);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_statementContext ------------------------------------------------------------------

SugarParser::Break_statementContext::Break_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Break_statementContext::BREAK() {
  return getToken(SugarParser::BREAK, 0);
}


size_t SugarParser::Break_statementContext::getRuleIndex() const {
  return SugarParser::RuleBreak_statement;
}

void SugarParser::Break_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_statement(this);
}

void SugarParser::Break_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_statement(this);
}


std::any SugarParser::Break_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitBreak_statement(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Break_statementContext* SugarParser::break_statement() {
  Break_statementContext *_localctx = _tracker.createInstance<Break_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, SugarParser::RuleBreak_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(SugarParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_statementContext ------------------------------------------------------------------

SugarParser::Continue_statementContext::Continue_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Continue_statementContext::CONTINUE() {
  return getToken(SugarParser::CONTINUE, 0);
}


size_t SugarParser::Continue_statementContext::getRuleIndex() const {
  return SugarParser::RuleContinue_statement;
}

void SugarParser::Continue_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue_statement(this);
}

void SugarParser::Continue_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue_statement(this);
}


std::any SugarParser::Continue_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitContinue_statement(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Continue_statementContext* SugarParser::continue_statement() {
  Continue_statementContext *_localctx = _tracker.createInstance<Continue_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, SugarParser::RuleContinue_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(SugarParser::CONTINUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SugarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Pipeline_expressionContext* SugarParser::ExpressionContext::pipeline_expression() {
  return getRuleContext<SugarParser::Pipeline_expressionContext>(0);
}


size_t SugarParser::ExpressionContext::getRuleIndex() const {
  return SugarParser::RuleExpression;
}

void SugarParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SugarParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any SugarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::ExpressionContext* SugarParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, SugarParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    pipeline_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pipeline_expressionContext ------------------------------------------------------------------

SugarParser::Pipeline_expressionContext::Pipeline_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Elvis_expressionContext *> SugarParser::Pipeline_expressionContext::elvis_expression() {
  return getRuleContexts<SugarParser::Elvis_expressionContext>();
}

SugarParser::Elvis_expressionContext* SugarParser::Pipeline_expressionContext::elvis_expression(size_t i) {
  return getRuleContext<SugarParser::Elvis_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Pipeline_expressionContext::PIPE() {
  return getTokens(SugarParser::PIPE);
}

tree::TerminalNode* SugarParser::Pipeline_expressionContext::PIPE(size_t i) {
  return getToken(SugarParser::PIPE, i);
}


size_t SugarParser::Pipeline_expressionContext::getRuleIndex() const {
  return SugarParser::RulePipeline_expression;
}

void SugarParser::Pipeline_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPipeline_expression(this);
}

void SugarParser::Pipeline_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPipeline_expression(this);
}


std::any SugarParser::Pipeline_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitPipeline_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Pipeline_expressionContext* SugarParser::pipeline_expression() {
  Pipeline_expressionContext *_localctx = _tracker.createInstance<Pipeline_expressionContext>(_ctx, getState());
  enterRule(_localctx, 34, SugarParser::RulePipeline_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(255);
    elvis_expression();
    setState(260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(256);
        match(SugarParser::PIPE);
        setState(257);
        elvis_expression(); 
      }
      setState(262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elvis_expressionContext ------------------------------------------------------------------

SugarParser::Elvis_expressionContext::Elvis_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Boolean_or_expressionContext *> SugarParser::Elvis_expressionContext::boolean_or_expression() {
  return getRuleContexts<SugarParser::Boolean_or_expressionContext>();
}

SugarParser::Boolean_or_expressionContext* SugarParser::Elvis_expressionContext::boolean_or_expression(size_t i) {
  return getRuleContext<SugarParser::Boolean_or_expressionContext>(i);
}

tree::TerminalNode* SugarParser::Elvis_expressionContext::ELVIS() {
  return getToken(SugarParser::ELVIS, 0);
}


size_t SugarParser::Elvis_expressionContext::getRuleIndex() const {
  return SugarParser::RuleElvis_expression;
}

void SugarParser::Elvis_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElvis_expression(this);
}

void SugarParser::Elvis_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElvis_expression(this);
}


std::any SugarParser::Elvis_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitElvis_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Elvis_expressionContext* SugarParser::elvis_expression() {
  Elvis_expressionContext *_localctx = _tracker.createInstance<Elvis_expressionContext>(_ctx, getState());
  enterRule(_localctx, 36, SugarParser::RuleElvis_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    boolean_or_expression();
    setState(266);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(264);
      match(SugarParser::ELVIS);
      setState(265);
      boolean_or_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_or_expressionContext ------------------------------------------------------------------

SugarParser::Boolean_or_expressionContext::Boolean_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Boolean_and_expressionContext *> SugarParser::Boolean_or_expressionContext::boolean_and_expression() {
  return getRuleContexts<SugarParser::Boolean_and_expressionContext>();
}

SugarParser::Boolean_and_expressionContext* SugarParser::Boolean_or_expressionContext::boolean_and_expression(size_t i) {
  return getRuleContext<SugarParser::Boolean_and_expressionContext>(i);
}

std::vector<SugarParser::Or_logic_operatorContext *> SugarParser::Boolean_or_expressionContext::or_logic_operator() {
  return getRuleContexts<SugarParser::Or_logic_operatorContext>();
}

SugarParser::Or_logic_operatorContext* SugarParser::Boolean_or_expressionContext::or_logic_operator(size_t i) {
  return getRuleContext<SugarParser::Or_logic_operatorContext>(i);
}


size_t SugarParser::Boolean_or_expressionContext::getRuleIndex() const {
  return SugarParser::RuleBoolean_or_expression;
}

void SugarParser::Boolean_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_or_expression(this);
}

void SugarParser::Boolean_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_or_expression(this);
}


std::any SugarParser::Boolean_or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitBoolean_or_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Boolean_or_expressionContext* SugarParser::boolean_or_expression() {
  Boolean_or_expressionContext *_localctx = _tracker.createInstance<Boolean_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, SugarParser::RuleBoolean_or_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(268);
    boolean_and_expression();
    setState(274);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(269);
        or_logic_operator();
        setState(270);
        boolean_and_expression(); 
      }
      setState(276);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_and_expressionContext ------------------------------------------------------------------

SugarParser::Boolean_and_expressionContext::Boolean_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Comparison_expressionContext *> SugarParser::Boolean_and_expressionContext::comparison_expression() {
  return getRuleContexts<SugarParser::Comparison_expressionContext>();
}

SugarParser::Comparison_expressionContext* SugarParser::Boolean_and_expressionContext::comparison_expression(size_t i) {
  return getRuleContext<SugarParser::Comparison_expressionContext>(i);
}

std::vector<SugarParser::And_logic_operatorContext *> SugarParser::Boolean_and_expressionContext::and_logic_operator() {
  return getRuleContexts<SugarParser::And_logic_operatorContext>();
}

SugarParser::And_logic_operatorContext* SugarParser::Boolean_and_expressionContext::and_logic_operator(size_t i) {
  return getRuleContext<SugarParser::And_logic_operatorContext>(i);
}


size_t SugarParser::Boolean_and_expressionContext::getRuleIndex() const {
  return SugarParser::RuleBoolean_and_expression;
}

void SugarParser::Boolean_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_and_expression(this);
}

void SugarParser::Boolean_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_and_expression(this);
}


std::any SugarParser::Boolean_and_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitBoolean_and_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Boolean_and_expressionContext* SugarParser::boolean_and_expression() {
  Boolean_and_expressionContext *_localctx = _tracker.createInstance<Boolean_and_expressionContext>(_ctx, getState());
  enterRule(_localctx, 40, SugarParser::RuleBoolean_and_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(277);
    comparison_expression();
    setState(283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(278);
        and_logic_operator();
        setState(279);
        comparison_expression(); 
      }
      setState(285);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_expressionContext ------------------------------------------------------------------

SugarParser::Comparison_expressionContext::Comparison_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Additive_expressionContext *> SugarParser::Comparison_expressionContext::additive_expression() {
  return getRuleContexts<SugarParser::Additive_expressionContext>();
}

SugarParser::Additive_expressionContext* SugarParser::Comparison_expressionContext::additive_expression(size_t i) {
  return getRuleContext<SugarParser::Additive_expressionContext>(i);
}

std::vector<SugarParser::Comparison_symbolContext *> SugarParser::Comparison_expressionContext::comparison_symbol() {
  return getRuleContexts<SugarParser::Comparison_symbolContext>();
}

SugarParser::Comparison_symbolContext* SugarParser::Comparison_expressionContext::comparison_symbol(size_t i) {
  return getRuleContext<SugarParser::Comparison_symbolContext>(i);
}

SugarParser::Multi_comparison_expressionContext* SugarParser::Comparison_expressionContext::multi_comparison_expression() {
  return getRuleContext<SugarParser::Multi_comparison_expressionContext>(0);
}


size_t SugarParser::Comparison_expressionContext::getRuleIndex() const {
  return SugarParser::RuleComparison_expression;
}

void SugarParser::Comparison_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_expression(this);
}

void SugarParser::Comparison_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_expression(this);
}


std::any SugarParser::Comparison_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitComparison_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Comparison_expressionContext* SugarParser::comparison_expression() {
  Comparison_expressionContext *_localctx = _tracker.createInstance<Comparison_expressionContext>(_ctx, getState());
  enterRule(_localctx, 42, SugarParser::RuleComparison_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(286);
      additive_expression();
      setState(292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(287);
          comparison_symbol();
          setState(288);
          additive_expression(); 
        }
        setState(294);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(295);
      multi_comparison_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_itemContext ------------------------------------------------------------------

SugarParser::Multi_comparison_itemContext::Multi_comparison_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Multi_comparison_or_expressionContext* SugarParser::Multi_comparison_itemContext::multi_comparison_or_expression() {
  return getRuleContext<SugarParser::Multi_comparison_or_expressionContext>(0);
}

SugarParser::Multi_comparison_object_accessContext* SugarParser::Multi_comparison_itemContext::multi_comparison_object_access() {
  return getRuleContext<SugarParser::Multi_comparison_object_accessContext>(0);
}

SugarParser::Multi_comparison_optional_object_accessContext* SugarParser::Multi_comparison_itemContext::multi_comparison_optional_object_access() {
  return getRuleContext<SugarParser::Multi_comparison_optional_object_accessContext>(0);
}


size_t SugarParser::Multi_comparison_itemContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_item;
}

void SugarParser::Multi_comparison_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_item(this);
}

void SugarParser::Multi_comparison_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_item(this);
}


std::any SugarParser::Multi_comparison_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_item(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_itemContext* SugarParser::multi_comparison_item() {
  Multi_comparison_itemContext *_localctx = _tracker.createInstance<Multi_comparison_itemContext>(_ctx, getState());
  enterRule(_localctx, 44, SugarParser::RuleMulti_comparison_item);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SugarParser::ACCESS: {
        setState(298);
        multi_comparison_object_access();
        break;
      }

      case SugarParser::OPT_ACCESS: {
        setState(299);
        multi_comparison_optional_object_access();
        break;
      }

      case SugarParser::DEQUAL:
      case SugarParser::NEQUAL:
      case SugarParser::LESS:
      case SugarParser::LESSEQUAL:
      case SugarParser::GREATER:
      case SugarParser::GREATEREQUAL:
      case SugarParser::LPAREN: {
        break;
      }

    default:
      break;
    }
    setState(302);
    multi_comparison_or_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_or_expressionContext ------------------------------------------------------------------

SugarParser::Multi_comparison_or_expressionContext::Multi_comparison_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Multi_comparison_and_expressionContext *> SugarParser::Multi_comparison_or_expressionContext::multi_comparison_and_expression() {
  return getRuleContexts<SugarParser::Multi_comparison_and_expressionContext>();
}

SugarParser::Multi_comparison_and_expressionContext* SugarParser::Multi_comparison_or_expressionContext::multi_comparison_and_expression(size_t i) {
  return getRuleContext<SugarParser::Multi_comparison_and_expressionContext>(i);
}

std::vector<SugarParser::Or_logic_operatorContext *> SugarParser::Multi_comparison_or_expressionContext::or_logic_operator() {
  return getRuleContexts<SugarParser::Or_logic_operatorContext>();
}

SugarParser::Or_logic_operatorContext* SugarParser::Multi_comparison_or_expressionContext::or_logic_operator(size_t i) {
  return getRuleContext<SugarParser::Or_logic_operatorContext>(i);
}


size_t SugarParser::Multi_comparison_or_expressionContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_or_expression;
}

void SugarParser::Multi_comparison_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_or_expression(this);
}

void SugarParser::Multi_comparison_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_or_expression(this);
}


std::any SugarParser::Multi_comparison_or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_or_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_or_expressionContext* SugarParser::multi_comparison_or_expression() {
  Multi_comparison_or_expressionContext *_localctx = _tracker.createInstance<Multi_comparison_or_expressionContext>(_ctx, getState());
  enterRule(_localctx, 46, SugarParser::RuleMulti_comparison_or_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(304);
    multi_comparison_and_expression();
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(305);
        or_logic_operator();
        setState(306);
        multi_comparison_and_expression(); 
      }
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_and_expressionContext ------------------------------------------------------------------

SugarParser::Multi_comparison_and_expressionContext::Multi_comparison_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Comparison_symbolContext* SugarParser::Multi_comparison_and_expressionContext::comparison_symbol() {
  return getRuleContext<SugarParser::Comparison_symbolContext>(0);
}

SugarParser::Boolean_or_expressionContext* SugarParser::Multi_comparison_and_expressionContext::boolean_or_expression() {
  return getRuleContext<SugarParser::Boolean_or_expressionContext>(0);
}

std::vector<SugarParser::And_logic_operatorContext *> SugarParser::Multi_comparison_and_expressionContext::and_logic_operator() {
  return getRuleContexts<SugarParser::And_logic_operatorContext>();
}

SugarParser::And_logic_operatorContext* SugarParser::Multi_comparison_and_expressionContext::and_logic_operator(size_t i) {
  return getRuleContext<SugarParser::And_logic_operatorContext>(i);
}

std::vector<SugarParser::Multi_comparison_itemContext *> SugarParser::Multi_comparison_and_expressionContext::multi_comparison_item() {
  return getRuleContexts<SugarParser::Multi_comparison_itemContext>();
}

SugarParser::Multi_comparison_itemContext* SugarParser::Multi_comparison_and_expressionContext::multi_comparison_item(size_t i) {
  return getRuleContext<SugarParser::Multi_comparison_itemContext>(i);
}

tree::TerminalNode* SugarParser::Multi_comparison_and_expressionContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

tree::TerminalNode* SugarParser::Multi_comparison_and_expressionContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}


size_t SugarParser::Multi_comparison_and_expressionContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_and_expression;
}

void SugarParser::Multi_comparison_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_and_expression(this);
}

void SugarParser::Multi_comparison_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_and_expression(this);
}


std::any SugarParser::Multi_comparison_and_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_and_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_and_expressionContext* SugarParser::multi_comparison_and_expression() {
  Multi_comparison_and_expressionContext *_localctx = _tracker.createInstance<Multi_comparison_and_expressionContext>(_ctx, getState());
  enterRule(_localctx, 48, SugarParser::RuleMulti_comparison_and_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SugarParser::DEQUAL:
      case SugarParser::NEQUAL:
      case SugarParser::LESS:
      case SugarParser::LESSEQUAL:
      case SugarParser::GREATER:
      case SugarParser::GREATEREQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(313);
        comparison_symbol();
        setState(314);
        boolean_or_expression();
        setState(320);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(315);
            and_logic_operator();
            setState(316);
            multi_comparison_item(); 
          }
          setState(322);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
        }
        break;
      }

      case SugarParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(323);
        match(SugarParser::LPAREN);
        setState(324);
        multi_comparison_item();
        setState(325);
        match(SugarParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_object_accessContext ------------------------------------------------------------------

SugarParser::Multi_comparison_object_accessContext::Multi_comparison_object_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Multi_comparison_object_accessContext::ACCESS() {
  return getToken(SugarParser::ACCESS, 0);
}

SugarParser::Object_access_chainContext* SugarParser::Multi_comparison_object_accessContext::object_access_chain() {
  return getRuleContext<SugarParser::Object_access_chainContext>(0);
}


size_t SugarParser::Multi_comparison_object_accessContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_object_access;
}

void SugarParser::Multi_comparison_object_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_object_access(this);
}

void SugarParser::Multi_comparison_object_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_object_access(this);
}


std::any SugarParser::Multi_comparison_object_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_object_access(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_object_accessContext* SugarParser::multi_comparison_object_access() {
  Multi_comparison_object_accessContext *_localctx = _tracker.createInstance<Multi_comparison_object_accessContext>(_ctx, getState());
  enterRule(_localctx, 50, SugarParser::RuleMulti_comparison_object_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(SugarParser::ACCESS);
    setState(330);
    object_access_chain();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_optional_object_accessContext ------------------------------------------------------------------

SugarParser::Multi_comparison_optional_object_accessContext::Multi_comparison_optional_object_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Multi_comparison_optional_object_accessContext::OPT_ACCESS() {
  return getToken(SugarParser::OPT_ACCESS, 0);
}

SugarParser::Optional_object_access_chainContext* SugarParser::Multi_comparison_optional_object_accessContext::optional_object_access_chain() {
  return getRuleContext<SugarParser::Optional_object_access_chainContext>(0);
}


size_t SugarParser::Multi_comparison_optional_object_accessContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_optional_object_access;
}

void SugarParser::Multi_comparison_optional_object_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_optional_object_access(this);
}

void SugarParser::Multi_comparison_optional_object_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_optional_object_access(this);
}


std::any SugarParser::Multi_comparison_optional_object_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_optional_object_access(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_optional_object_accessContext* SugarParser::multi_comparison_optional_object_access() {
  Multi_comparison_optional_object_accessContext *_localctx = _tracker.createInstance<Multi_comparison_optional_object_accessContext>(_ctx, getState());
  enterRule(_localctx, 52, SugarParser::RuleMulti_comparison_optional_object_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(SugarParser::OPT_ACCESS);
    setState(333);
    optional_object_access_chain();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multi_comparison_expressionContext ------------------------------------------------------------------

SugarParser::Multi_comparison_expressionContext::Multi_comparison_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Additive_expressionContext* SugarParser::Multi_comparison_expressionContext::additive_expression() {
  return getRuleContext<SugarParser::Additive_expressionContext>(0);
}

tree::TerminalNode* SugarParser::Multi_comparison_expressionContext::MULTI_CMP_ARROW() {
  return getToken(SugarParser::MULTI_CMP_ARROW, 0);
}

tree::TerminalNode* SugarParser::Multi_comparison_expressionContext::LBRACK() {
  return getToken(SugarParser::LBRACK, 0);
}

tree::TerminalNode* SugarParser::Multi_comparison_expressionContext::RBRACK() {
  return getToken(SugarParser::RBRACK, 0);
}

std::vector<SugarParser::Multi_comparison_itemContext *> SugarParser::Multi_comparison_expressionContext::multi_comparison_item() {
  return getRuleContexts<SugarParser::Multi_comparison_itemContext>();
}

SugarParser::Multi_comparison_itemContext* SugarParser::Multi_comparison_expressionContext::multi_comparison_item(size_t i) {
  return getRuleContext<SugarParser::Multi_comparison_itemContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Multi_comparison_expressionContext::LPAREN() {
  return getTokens(SugarParser::LPAREN);
}

tree::TerminalNode* SugarParser::Multi_comparison_expressionContext::LPAREN(size_t i) {
  return getToken(SugarParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> SugarParser::Multi_comparison_expressionContext::RPAREN() {
  return getTokens(SugarParser::RPAREN);
}

tree::TerminalNode* SugarParser::Multi_comparison_expressionContext::RPAREN(size_t i) {
  return getToken(SugarParser::RPAREN, i);
}


size_t SugarParser::Multi_comparison_expressionContext::getRuleIndex() const {
  return SugarParser::RuleMulti_comparison_expression;
}

void SugarParser::Multi_comparison_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulti_comparison_expression(this);
}

void SugarParser::Multi_comparison_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulti_comparison_expression(this);
}


std::any SugarParser::Multi_comparison_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMulti_comparison_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multi_comparison_expressionContext* SugarParser::multi_comparison_expression() {
  Multi_comparison_expressionContext *_localctx = _tracker.createInstance<Multi_comparison_expressionContext>(_ctx, getState());
  enterRule(_localctx, 54, SugarParser::RuleMulti_comparison_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    additive_expression();
    setState(336);
    match(SugarParser::MULTI_CMP_ARROW);
    setState(337);
    match(SugarParser::LBRACK);
    setState(343); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(343);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(338);
        multi_comparison_item();
        break;
      }

      case 2: {
        setState(339);
        match(SugarParser::LPAREN);
        setState(340);
        multi_comparison_item();
        setState(341);
        match(SugarParser::RPAREN);
        break;
      }

      default:
        break;
      }
      setState(345); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4697749504) != 0));
    setState(347);
    match(SugarParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

SugarParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Multiplicative_expressionContext *> SugarParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContexts<SugarParser::Multiplicative_expressionContext>();
}

SugarParser::Multiplicative_expressionContext* SugarParser::Additive_expressionContext::multiplicative_expression(size_t i) {
  return getRuleContext<SugarParser::Multiplicative_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Additive_expressionContext::PLUS() {
  return getTokens(SugarParser::PLUS);
}

tree::TerminalNode* SugarParser::Additive_expressionContext::PLUS(size_t i) {
  return getToken(SugarParser::PLUS, i);
}

std::vector<tree::TerminalNode *> SugarParser::Additive_expressionContext::MINUS() {
  return getTokens(SugarParser::MINUS);
}

tree::TerminalNode* SugarParser::Additive_expressionContext::MINUS(size_t i) {
  return getToken(SugarParser::MINUS, i);
}


size_t SugarParser::Additive_expressionContext::getRuleIndex() const {
  return SugarParser::RuleAdditive_expression;
}

void SugarParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void SugarParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}


std::any SugarParser::Additive_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitAdditive_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Additive_expressionContext* SugarParser::additive_expression() {
  Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, getState());
  enterRule(_localctx, 56, SugarParser::RuleAdditive_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(349);
    multiplicative_expression();
    setState(354);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(350);
        _la = _input->LA(1);
        if (!(_la == SugarParser::PLUS

        || _la == SugarParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(351);
        multiplicative_expression(); 
      }
      setState(356);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

SugarParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Exponentiation_expressionContext *> SugarParser::Multiplicative_expressionContext::exponentiation_expression() {
  return getRuleContexts<SugarParser::Exponentiation_expressionContext>();
}

SugarParser::Exponentiation_expressionContext* SugarParser::Multiplicative_expressionContext::exponentiation_expression(size_t i) {
  return getRuleContext<SugarParser::Exponentiation_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Multiplicative_expressionContext::MUL() {
  return getTokens(SugarParser::MUL);
}

tree::TerminalNode* SugarParser::Multiplicative_expressionContext::MUL(size_t i) {
  return getToken(SugarParser::MUL, i);
}

std::vector<tree::TerminalNode *> SugarParser::Multiplicative_expressionContext::DIV() {
  return getTokens(SugarParser::DIV);
}

tree::TerminalNode* SugarParser::Multiplicative_expressionContext::DIV(size_t i) {
  return getToken(SugarParser::DIV, i);
}

std::vector<tree::TerminalNode *> SugarParser::Multiplicative_expressionContext::MOD() {
  return getTokens(SugarParser::MOD);
}

tree::TerminalNode* SugarParser::Multiplicative_expressionContext::MOD(size_t i) {
  return getToken(SugarParser::MOD, i);
}


size_t SugarParser::Multiplicative_expressionContext::getRuleIndex() const {
  return SugarParser::RuleMultiplicative_expression;
}

void SugarParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void SugarParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}


std::any SugarParser::Multiplicative_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Multiplicative_expressionContext* SugarParser::multiplicative_expression() {
  Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, getState());
  enterRule(_localctx, 58, SugarParser::RuleMultiplicative_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(357);
    exponentiation_expression();
    setState(362);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(358);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 448) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(359);
        exponentiation_expression(); 
      }
      setState(364);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exponentiation_expressionContext ------------------------------------------------------------------

SugarParser::Exponentiation_expressionContext::Exponentiation_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Unary_expressionContext *> SugarParser::Exponentiation_expressionContext::unary_expression() {
  return getRuleContexts<SugarParser::Unary_expressionContext>();
}

SugarParser::Unary_expressionContext* SugarParser::Exponentiation_expressionContext::unary_expression(size_t i) {
  return getRuleContext<SugarParser::Unary_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Exponentiation_expressionContext::POW() {
  return getTokens(SugarParser::POW);
}

tree::TerminalNode* SugarParser::Exponentiation_expressionContext::POW(size_t i) {
  return getToken(SugarParser::POW, i);
}


size_t SugarParser::Exponentiation_expressionContext::getRuleIndex() const {
  return SugarParser::RuleExponentiation_expression;
}

void SugarParser::Exponentiation_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExponentiation_expression(this);
}

void SugarParser::Exponentiation_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExponentiation_expression(this);
}


std::any SugarParser::Exponentiation_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitExponentiation_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Exponentiation_expressionContext* SugarParser::exponentiation_expression() {
  Exponentiation_expressionContext *_localctx = _tracker.createInstance<Exponentiation_expressionContext>(_ctx, getState());
  enterRule(_localctx, 60, SugarParser::RuleExponentiation_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(365);
    unary_expression();
    setState(370);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(366);
        match(SugarParser::POW);
        setState(367);
        unary_expression(); 
      }
      setState(372);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

SugarParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Post_fix_expressionContext* SugarParser::Unary_expressionContext::post_fix_expression() {
  return getRuleContext<SugarParser::Post_fix_expressionContext>(0);
}

tree::TerminalNode* SugarParser::Unary_expressionContext::NOT() {
  return getToken(SugarParser::NOT, 0);
}

tree::TerminalNode* SugarParser::Unary_expressionContext::MINUS() {
  return getToken(SugarParser::MINUS, 0);
}


size_t SugarParser::Unary_expressionContext::getRuleIndex() const {
  return SugarParser::RuleUnary_expression;
}

void SugarParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void SugarParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}


std::any SugarParser::Unary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitUnary_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Unary_expressionContext* SugarParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 62, SugarParser::RuleUnary_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SugarParser::NOT

    || _la == SugarParser::MINUS) {
      setState(373);
      _la = _input->LA(1);
      if (!(_la == SugarParser::NOT

      || _la == SugarParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(376);
    post_fix_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Post_fix_expressionContext ------------------------------------------------------------------

SugarParser::Post_fix_expressionContext::Post_fix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Object_access_chainContext* SugarParser::Post_fix_expressionContext::object_access_chain() {
  return getRuleContext<SugarParser::Object_access_chainContext>(0);
}

SugarParser::Optional_object_access_chainContext* SugarParser::Post_fix_expressionContext::optional_object_access_chain() {
  return getRuleContext<SugarParser::Optional_object_access_chainContext>(0);
}

tree::TerminalNode* SugarParser::Post_fix_expressionContext::INCREMENT() {
  return getToken(SugarParser::INCREMENT, 0);
}

tree::TerminalNode* SugarParser::Post_fix_expressionContext::DECREMENT() {
  return getToken(SugarParser::DECREMENT, 0);
}


size_t SugarParser::Post_fix_expressionContext::getRuleIndex() const {
  return SugarParser::RulePost_fix_expression;
}

void SugarParser::Post_fix_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPost_fix_expression(this);
}

void SugarParser::Post_fix_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPost_fix_expression(this);
}


std::any SugarParser::Post_fix_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitPost_fix_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Post_fix_expressionContext* SugarParser::post_fix_expression() {
  Post_fix_expressionContext *_localctx = _tracker.createInstance<Post_fix_expressionContext>(_ctx, getState());
  enterRule(_localctx, 64, SugarParser::RulePost_fix_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(378);
      object_access_chain();
      break;
    }

    case 2: {
      setState(379);
      optional_object_access_chain();
      break;
    }

    default:
      break;
    }
    setState(383);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(382);
      _la = _input->LA(1);
      if (!(_la == SugarParser::INCREMENT

      || _la == SugarParser::DECREMENT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_access_chainContext ------------------------------------------------------------------

SugarParser::Object_access_chainContext::Object_access_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Primary_expressionContext *> SugarParser::Object_access_chainContext::primary_expression() {
  return getRuleContexts<SugarParser::Primary_expressionContext>();
}

SugarParser::Primary_expressionContext* SugarParser::Object_access_chainContext::primary_expression(size_t i) {
  return getRuleContext<SugarParser::Primary_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Object_access_chainContext::ACCESS() {
  return getTokens(SugarParser::ACCESS);
}

tree::TerminalNode* SugarParser::Object_access_chainContext::ACCESS(size_t i) {
  return getToken(SugarParser::ACCESS, i);
}


size_t SugarParser::Object_access_chainContext::getRuleIndex() const {
  return SugarParser::RuleObject_access_chain;
}

void SugarParser::Object_access_chainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_access_chain(this);
}

void SugarParser::Object_access_chainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_access_chain(this);
}


std::any SugarParser::Object_access_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitObject_access_chain(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Object_access_chainContext* SugarParser::object_access_chain() {
  Object_access_chainContext *_localctx = _tracker.createInstance<Object_access_chainContext>(_ctx, getState());
  enterRule(_localctx, 66, SugarParser::RuleObject_access_chain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(385);
    primary_expression();
    setState(390);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(386);
        match(SugarParser::ACCESS);
        setState(387);
        primary_expression(); 
      }
      setState(392);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Optional_object_access_chainContext ------------------------------------------------------------------

SugarParser::Optional_object_access_chainContext::Optional_object_access_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Primary_expressionContext *> SugarParser::Optional_object_access_chainContext::primary_expression() {
  return getRuleContexts<SugarParser::Primary_expressionContext>();
}

SugarParser::Primary_expressionContext* SugarParser::Optional_object_access_chainContext::primary_expression(size_t i) {
  return getRuleContext<SugarParser::Primary_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Optional_object_access_chainContext::OPT_ACCESS() {
  return getTokens(SugarParser::OPT_ACCESS);
}

tree::TerminalNode* SugarParser::Optional_object_access_chainContext::OPT_ACCESS(size_t i) {
  return getToken(SugarParser::OPT_ACCESS, i);
}


size_t SugarParser::Optional_object_access_chainContext::getRuleIndex() const {
  return SugarParser::RuleOptional_object_access_chain;
}

void SugarParser::Optional_object_access_chainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptional_object_access_chain(this);
}

void SugarParser::Optional_object_access_chainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptional_object_access_chain(this);
}


std::any SugarParser::Optional_object_access_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitOptional_object_access_chain(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Optional_object_access_chainContext* SugarParser::optional_object_access_chain() {
  Optional_object_access_chainContext *_localctx = _tracker.createInstance<Optional_object_access_chainContext>(_ctx, getState());
  enterRule(_localctx, 68, SugarParser::RuleOptional_object_access_chain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(393);
    primary_expression();
    setState(398);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(394);
        match(SugarParser::OPT_ACCESS);
        setState(395);
        primary_expression(); 
      }
      setState(400);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

SugarParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Function_callContext* SugarParser::Primary_expressionContext::function_call() {
  return getRuleContext<SugarParser::Function_callContext>(0);
}

tree::TerminalNode* SugarParser::Primary_expressionContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::ExpressionContext* SugarParser::Primary_expressionContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

tree::TerminalNode* SugarParser::Primary_expressionContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::Formatted_stringContext* SugarParser::Primary_expressionContext::formatted_string() {
  return getRuleContext<SugarParser::Formatted_stringContext>(0);
}

SugarParser::List_accessContext* SugarParser::Primary_expressionContext::list_access() {
  return getRuleContext<SugarParser::List_accessContext>(0);
}

SugarParser::Switch_expressionContext* SugarParser::Primary_expressionContext::switch_expression() {
  return getRuleContext<SugarParser::Switch_expressionContext>(0);
}

SugarParser::Terminal_expressionContext* SugarParser::Primary_expressionContext::terminal_expression() {
  return getRuleContext<SugarParser::Terminal_expressionContext>(0);
}


size_t SugarParser::Primary_expressionContext::getRuleIndex() const {
  return SugarParser::RulePrimary_expression;
}

void SugarParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void SugarParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}


std::any SugarParser::Primary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitPrimary_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Primary_expressionContext* SugarParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 70, SugarParser::RulePrimary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(401);
      function_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(402);
      match(SugarParser::LPAREN);
      setState(403);
      expression();
      setState(404);
      match(SugarParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(406);
      formatted_string();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(407);
      list_access();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(408);
      switch_expression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(409);
      terminal_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Terminal_expressionContext ------------------------------------------------------------------

SugarParser::Terminal_expressionContext::Terminal_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::LAST_ASSIGNED() {
  return getToken(SugarParser::LAST_ASSIGNED, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::INTEGER() {
  return getToken(SugarParser::INTEGER, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::DECIMAL() {
  return getToken(SugarParser::DECIMAL, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::STRING() {
  return getToken(SugarParser::STRING, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::BOOL_FALSE() {
  return getToken(SugarParser::BOOL_FALSE, 0);
}

tree::TerminalNode* SugarParser::Terminal_expressionContext::BOOL_TRUE() {
  return getToken(SugarParser::BOOL_TRUE, 0);
}


size_t SugarParser::Terminal_expressionContext::getRuleIndex() const {
  return SugarParser::RuleTerminal_expression;
}

void SugarParser::Terminal_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminal_expression(this);
}

void SugarParser::Terminal_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminal_expression(this);
}


std::any SugarParser::Terminal_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitTerminal_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Terminal_expressionContext* SugarParser::terminal_expression() {
  Terminal_expressionContext *_localctx = _tracker.createInstance<Terminal_expressionContext>(_ctx, getState());
  enterRule(_localctx, 72, SugarParser::RuleTerminal_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    _la = _input->LA(1);
    if (!(((((_la - 55) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 55)) & 3971) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_expressionContext ------------------------------------------------------------------

SugarParser::Switch_expressionContext::Switch_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Switch_expressionContext::SWITCH() {
  return getToken(SugarParser::SWITCH, 0);
}

tree::TerminalNode* SugarParser::Switch_expressionContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::ExpressionContext* SugarParser::Switch_expressionContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

tree::TerminalNode* SugarParser::Switch_expressionContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

tree::TerminalNode* SugarParser::Switch_expressionContext::LCURL() {
  return getToken(SugarParser::LCURL, 0);
}

SugarParser::Case_listContext* SugarParser::Switch_expressionContext::case_list() {
  return getRuleContext<SugarParser::Case_listContext>(0);
}

tree::TerminalNode* SugarParser::Switch_expressionContext::RCURL() {
  return getToken(SugarParser::RCURL, 0);
}

tree::TerminalNode* SugarParser::Switch_expressionContext::DEFAULT() {
  return getToken(SugarParser::DEFAULT, 0);
}

SugarParser::BlockContext* SugarParser::Switch_expressionContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::Switch_expressionContext::getRuleIndex() const {
  return SugarParser::RuleSwitch_expression;
}

void SugarParser::Switch_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_expression(this);
}

void SugarParser::Switch_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_expression(this);
}


std::any SugarParser::Switch_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitSwitch_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Switch_expressionContext* SugarParser::switch_expression() {
  Switch_expressionContext *_localctx = _tracker.createInstance<Switch_expressionContext>(_ctx, getState());
  enterRule(_localctx, 74, SugarParser::RuleSwitch_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(SugarParser::SWITCH);
    setState(415);
    match(SugarParser::LPAREN);
    setState(416);
    expression();
    setState(417);
    match(SugarParser::RPAREN);
    setState(418);
    match(SugarParser::LCURL);
    setState(419);
    case_list();
    setState(422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SugarParser::DEFAULT) {
      setState(420);
      match(SugarParser::DEFAULT);
      setState(421);
      block();
    }
    setState(424);
    match(SugarParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_listContext ------------------------------------------------------------------

SugarParser::Case_listContext::Case_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SugarParser::Case_listContext::CASE() {
  return getTokens(SugarParser::CASE);
}

tree::TerminalNode* SugarParser::Case_listContext::CASE(size_t i) {
  return getToken(SugarParser::CASE, i);
}

std::vector<SugarParser::ExpressionContext *> SugarParser::Case_listContext::expression() {
  return getRuleContexts<SugarParser::ExpressionContext>();
}

SugarParser::ExpressionContext* SugarParser::Case_listContext::expression(size_t i) {
  return getRuleContext<SugarParser::ExpressionContext>(i);
}

std::vector<SugarParser::BlockContext *> SugarParser::Case_listContext::block() {
  return getRuleContexts<SugarParser::BlockContext>();
}

SugarParser::BlockContext* SugarParser::Case_listContext::block(size_t i) {
  return getRuleContext<SugarParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Case_listContext::ARROW() {
  return getTokens(SugarParser::ARROW);
}

tree::TerminalNode* SugarParser::Case_listContext::ARROW(size_t i) {
  return getToken(SugarParser::ARROW, i);
}


size_t SugarParser::Case_listContext::getRuleIndex() const {
  return SugarParser::RuleCase_list;
}

void SugarParser::Case_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_list(this);
}

void SugarParser::Case_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_list(this);
}


std::any SugarParser::Case_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitCase_list(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Case_listContext* SugarParser::case_list() {
  Case_listContext *_localctx = _tracker.createInstance<Case_listContext>(_ctx, getState());
  enterRule(_localctx, 76, SugarParser::RuleCase_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(426);
      match(SugarParser::CASE);
      setState(427);
      expression();
      setState(428);
      block();
      setState(430);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SugarParser::ARROW) {
        setState(429);
        match(SugarParser::ARROW);
      }
      setState(434); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SugarParser::CASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_accessContext ------------------------------------------------------------------

SugarParser::List_accessContext::List_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::List_accessContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

SugarParser::List_at_accessContext* SugarParser::List_accessContext::list_at_access() {
  return getRuleContext<SugarParser::List_at_accessContext>(0);
}


size_t SugarParser::List_accessContext::getRuleIndex() const {
  return SugarParser::RuleList_access;
}

void SugarParser::List_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_access(this);
}

void SugarParser::List_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_access(this);
}


std::any SugarParser::List_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_access(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_accessContext* SugarParser::list_access() {
  List_accessContext *_localctx = _tracker.createInstance<List_accessContext>(_ctx, getState());
  enterRule(_localctx, 78, SugarParser::RuleList_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(SugarParser::VAR);
    setState(437);
    list_at_access();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_pushbackContext ------------------------------------------------------------------

SugarParser::List_pushbackContext::List_pushbackContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::List_pushbackContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

tree::TerminalNode* SugarParser::List_pushbackContext::PUSHBACK() {
  return getToken(SugarParser::PUSHBACK, 0);
}

SugarParser::ExpressionContext* SugarParser::List_pushbackContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}


size_t SugarParser::List_pushbackContext::getRuleIndex() const {
  return SugarParser::RuleList_pushback;
}

void SugarParser::List_pushbackContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_pushback(this);
}

void SugarParser::List_pushbackContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_pushback(this);
}


std::any SugarParser::List_pushbackContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_pushback(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_pushbackContext* SugarParser::list_pushback() {
  List_pushbackContext *_localctx = _tracker.createInstance<List_pushbackContext>(_ctx, getState());
  enterRule(_localctx, 80, SugarParser::RuleList_pushback);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(SugarParser::VAR);
    setState(440);
    match(SugarParser::PUSHBACK);
    setState(441);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_insertionContext ------------------------------------------------------------------

SugarParser::List_insertionContext::List_insertionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::List_insertionContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

tree::TerminalNode* SugarParser::List_insertionContext::PUSHBACK() {
  return getToken(SugarParser::PUSHBACK, 0);
}

SugarParser::ExpressionContext* SugarParser::List_insertionContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

SugarParser::List_at_accessContext* SugarParser::List_insertionContext::list_at_access() {
  return getRuleContext<SugarParser::List_at_accessContext>(0);
}


size_t SugarParser::List_insertionContext::getRuleIndex() const {
  return SugarParser::RuleList_insertion;
}

void SugarParser::List_insertionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_insertion(this);
}

void SugarParser::List_insertionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_insertion(this);
}


std::any SugarParser::List_insertionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_insertion(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_insertionContext* SugarParser::list_insertion() {
  List_insertionContext *_localctx = _tracker.createInstance<List_insertionContext>(_ctx, getState());
  enterRule(_localctx, 82, SugarParser::RuleList_insertion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(SugarParser::VAR);
    setState(444);
    match(SugarParser::PUSHBACK);
    setState(445);
    expression();
    setState(446);
    list_at_access();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_removalContext ------------------------------------------------------------------

SugarParser::List_removalContext::List_removalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::List_removalContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

tree::TerminalNode* SugarParser::List_removalContext::NOT() {
  return getToken(SugarParser::NOT, 0);
}

SugarParser::List_at_accessContext* SugarParser::List_removalContext::list_at_access() {
  return getRuleContext<SugarParser::List_at_accessContext>(0);
}


size_t SugarParser::List_removalContext::getRuleIndex() const {
  return SugarParser::RuleList_removal;
}

void SugarParser::List_removalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_removal(this);
}

void SugarParser::List_removalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_removal(this);
}


std::any SugarParser::List_removalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_removal(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_removalContext* SugarParser::list_removal() {
  List_removalContext *_localctx = _tracker.createInstance<List_removalContext>(_ctx, getState());
  enterRule(_localctx, 84, SugarParser::RuleList_removal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(SugarParser::VAR);
    setState(449);
    match(SugarParser::NOT);
    setState(450);
    list_at_access();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_at_accessContext ------------------------------------------------------------------

SugarParser::List_at_accessContext::List_at_accessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SugarParser::List_at_accessContext::AT() {
  return getTokens(SugarParser::AT);
}

tree::TerminalNode* SugarParser::List_at_accessContext::AT(size_t i) {
  return getToken(SugarParser::AT, i);
}

std::vector<SugarParser::ExpressionContext *> SugarParser::List_at_accessContext::expression() {
  return getRuleContexts<SugarParser::ExpressionContext>();
}

SugarParser::ExpressionContext* SugarParser::List_at_accessContext::expression(size_t i) {
  return getRuleContext<SugarParser::ExpressionContext>(i);
}


size_t SugarParser::List_at_accessContext::getRuleIndex() const {
  return SugarParser::RuleList_at_access;
}

void SugarParser::List_at_accessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_at_access(this);
}

void SugarParser::List_at_accessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_at_access(this);
}


std::any SugarParser::List_at_accessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitList_at_access(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::List_at_accessContext* SugarParser::list_at_access() {
  List_at_accessContext *_localctx = _tracker.createInstance<List_at_accessContext>(_ctx, getState());
  enterRule(_localctx, 86, SugarParser::RuleList_at_access);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(454); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(452);
              match(SugarParser::AT);
              setState(453);
              expression();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(456); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_expressionContext ------------------------------------------------------------------

SugarParser::If_expressionContext::If_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::If_expressionContext::IF() {
  return getToken(SugarParser::IF, 0);
}

std::vector<tree::TerminalNode *> SugarParser::If_expressionContext::LPAREN() {
  return getTokens(SugarParser::LPAREN);
}

tree::TerminalNode* SugarParser::If_expressionContext::LPAREN(size_t i) {
  return getToken(SugarParser::LPAREN, i);
}

std::vector<SugarParser::ExpressionContext *> SugarParser::If_expressionContext::expression() {
  return getRuleContexts<SugarParser::ExpressionContext>();
}

SugarParser::ExpressionContext* SugarParser::If_expressionContext::expression(size_t i) {
  return getRuleContext<SugarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::If_expressionContext::RPAREN() {
  return getTokens(SugarParser::RPAREN);
}

tree::TerminalNode* SugarParser::If_expressionContext::RPAREN(size_t i) {
  return getToken(SugarParser::RPAREN, i);
}

std::vector<SugarParser::BlockContext *> SugarParser::If_expressionContext::block() {
  return getRuleContexts<SugarParser::BlockContext>();
}

SugarParser::BlockContext* SugarParser::If_expressionContext::block(size_t i) {
  return getRuleContext<SugarParser::BlockContext>(i);
}

std::vector<SugarParser::AssignmentContext *> SugarParser::If_expressionContext::assignment() {
  return getRuleContexts<SugarParser::AssignmentContext>();
}

SugarParser::AssignmentContext* SugarParser::If_expressionContext::assignment(size_t i) {
  return getRuleContext<SugarParser::AssignmentContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::If_expressionContext::COMMA() {
  return getTokens(SugarParser::COMMA);
}

tree::TerminalNode* SugarParser::If_expressionContext::COMMA(size_t i) {
  return getToken(SugarParser::COMMA, i);
}

std::vector<tree::TerminalNode *> SugarParser::If_expressionContext::ELSE() {
  return getTokens(SugarParser::ELSE);
}

tree::TerminalNode* SugarParser::If_expressionContext::ELSE(size_t i) {
  return getToken(SugarParser::ELSE, i);
}


size_t SugarParser::If_expressionContext::getRuleIndex() const {
  return SugarParser::RuleIf_expression;
}

void SugarParser::If_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_expression(this);
}

void SugarParser::If_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_expression(this);
}


std::any SugarParser::If_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitIf_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::If_expressionContext* SugarParser::if_expression() {
  If_expressionContext *_localctx = _tracker.createInstance<If_expressionContext>(_ctx, getState());
  enterRule(_localctx, 88, SugarParser::RuleIf_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(SugarParser::IF);
    setState(459);
    match(SugarParser::LPAREN);
    setState(465);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(460);
        assignment();
        setState(461);
        match(SugarParser::COMMA); 
      }
      setState(467);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(468);
    expression();
    setState(469);
    match(SugarParser::RPAREN);
    setState(470);
    block();
    setState(479);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(471);
        match(SugarParser::ELSE);
        setState(472);
        match(SugarParser::LPAREN);
        setState(473);
        expression();
        setState(474);
        match(SugarParser::RPAREN);
        setState(475);
        block(); 
      }
      setState(481);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SugarParser::ELSE) {
      setState(482);
      match(SugarParser::ELSE);
      setState(483);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_expressionContext ------------------------------------------------------------------

SugarParser::Loop_expressionContext::Loop_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::While_loopContext* SugarParser::Loop_expressionContext::while_loop() {
  return getRuleContext<SugarParser::While_loopContext>(0);
}

SugarParser::For_loopContext* SugarParser::Loop_expressionContext::for_loop() {
  return getRuleContext<SugarParser::For_loopContext>(0);
}


size_t SugarParser::Loop_expressionContext::getRuleIndex() const {
  return SugarParser::RuleLoop_expression;
}

void SugarParser::Loop_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop_expression(this);
}

void SugarParser::Loop_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop_expression(this);
}


std::any SugarParser::Loop_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitLoop_expression(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Loop_expressionContext* SugarParser::loop_expression() {
  Loop_expressionContext *_localctx = _tracker.createInstance<Loop_expressionContext>(_ctx, getState());
  enterRule(_localctx, 90, SugarParser::RuleLoop_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(488);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SugarParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(486);
        while_loop();
        break;
      }

      case SugarParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(487);
        for_loop();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

SugarParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::While_loopContext::WHILE() {
  return getToken(SugarParser::WHILE, 0);
}

tree::TerminalNode* SugarParser::While_loopContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::ExpressionContext* SugarParser::While_loopContext::expression() {
  return getRuleContext<SugarParser::ExpressionContext>(0);
}

tree::TerminalNode* SugarParser::While_loopContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::BlockContext* SugarParser::While_loopContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::While_loopContext::getRuleIndex() const {
  return SugarParser::RuleWhile_loop;
}

void SugarParser::While_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop(this);
}

void SugarParser::While_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop(this);
}


std::any SugarParser::While_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitWhile_loop(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::While_loopContext* SugarParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 92, SugarParser::RuleWhile_loop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(SugarParser::WHILE);
    setState(491);
    match(SugarParser::LPAREN);
    setState(492);
    expression();
    setState(493);
    match(SugarParser::RPAREN);
    setState(494);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_loopContext ------------------------------------------------------------------

SugarParser::For_loopContext::For_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::For_loopContext::FOR() {
  return getToken(SugarParser::FOR, 0);
}

tree::TerminalNode* SugarParser::For_loopContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::AssignmentContext* SugarParser::For_loopContext::assignment() {
  return getRuleContext<SugarParser::AssignmentContext>(0);
}

std::vector<tree::TerminalNode *> SugarParser::For_loopContext::SEMICOLON() {
  return getTokens(SugarParser::SEMICOLON);
}

tree::TerminalNode* SugarParser::For_loopContext::SEMICOLON(size_t i) {
  return getToken(SugarParser::SEMICOLON, i);
}

std::vector<SugarParser::ExpressionContext *> SugarParser::For_loopContext::expression() {
  return getRuleContexts<SugarParser::ExpressionContext>();
}

SugarParser::ExpressionContext* SugarParser::For_loopContext::expression(size_t i) {
  return getRuleContext<SugarParser::ExpressionContext>(i);
}

tree::TerminalNode* SugarParser::For_loopContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::BlockContext* SugarParser::For_loopContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::For_loopContext::getRuleIndex() const {
  return SugarParser::RuleFor_loop;
}

void SugarParser::For_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_loop(this);
}

void SugarParser::For_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_loop(this);
}


std::any SugarParser::For_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitFor_loop(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::For_loopContext* SugarParser::for_loop() {
  For_loopContext *_localctx = _tracker.createInstance<For_loopContext>(_ctx, getState());
  enterRule(_localctx, 94, SugarParser::RuleFor_loop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(SugarParser::FOR);
    setState(497);
    match(SugarParser::LPAREN);
    setState(498);
    assignment();
    setState(499);
    match(SugarParser::SEMICOLON);
    setState(500);
    expression();
    setState(501);
    match(SugarParser::SEMICOLON);
    setState(502);
    expression();
    setState(503);
    match(SugarParser::RPAREN);
    setState(504);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

SugarParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::Variable_typeContext *> SugarParser::Parameter_listContext::variable_type() {
  return getRuleContexts<SugarParser::Variable_typeContext>();
}

SugarParser::Variable_typeContext* SugarParser::Parameter_listContext::variable_type(size_t i) {
  return getRuleContext<SugarParser::Variable_typeContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Parameter_listContext::VAR() {
  return getTokens(SugarParser::VAR);
}

tree::TerminalNode* SugarParser::Parameter_listContext::VAR(size_t i) {
  return getToken(SugarParser::VAR, i);
}

std::vector<tree::TerminalNode *> SugarParser::Parameter_listContext::EQUAL() {
  return getTokens(SugarParser::EQUAL);
}

tree::TerminalNode* SugarParser::Parameter_listContext::EQUAL(size_t i) {
  return getToken(SugarParser::EQUAL, i);
}

std::vector<SugarParser::Terminal_expressionContext *> SugarParser::Parameter_listContext::terminal_expression() {
  return getRuleContexts<SugarParser::Terminal_expressionContext>();
}

SugarParser::Terminal_expressionContext* SugarParser::Parameter_listContext::terminal_expression(size_t i) {
  return getRuleContext<SugarParser::Terminal_expressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Parameter_listContext::COMMA() {
  return getTokens(SugarParser::COMMA);
}

tree::TerminalNode* SugarParser::Parameter_listContext::COMMA(size_t i) {
  return getToken(SugarParser::COMMA, i);
}


size_t SugarParser::Parameter_listContext::getRuleIndex() const {
  return SugarParser::RuleParameter_list;
}

void SugarParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void SugarParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


std::any SugarParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Parameter_listContext* SugarParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 96, SugarParser::RuleParameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(524);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 51) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 51)) & 16463) != 0)) {
      setState(506);
      variable_type();
      setState(507);
      match(SugarParser::VAR);
      setState(510);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SugarParser::EQUAL) {
        setState(508);
        match(SugarParser::EQUAL);
        setState(509);
        terminal_expression();
      }
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SugarParser::COMMA) {
        setState(512);
        match(SugarParser::COMMA);
        setState(513);
        variable_type();
        setState(514);
        match(SugarParser::VAR);
        setState(517);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SugarParser::EQUAL) {
          setState(515);
          match(SugarParser::EQUAL);
          setState(516);
          terminal_expression();
        }
        setState(523);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_member_segmentContext ------------------------------------------------------------------

SugarParser::Class_member_segmentContext::Class_member_segmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Class_member_segmentContext::LCURL() {
  return getToken(SugarParser::LCURL, 0);
}

tree::TerminalNode* SugarParser::Class_member_segmentContext::RCURL() {
  return getToken(SugarParser::RCURL, 0);
}

std::vector<SugarParser::Class_constructorContext *> SugarParser::Class_member_segmentContext::class_constructor() {
  return getRuleContexts<SugarParser::Class_constructorContext>();
}

SugarParser::Class_constructorContext* SugarParser::Class_member_segmentContext::class_constructor(size_t i) {
  return getRuleContext<SugarParser::Class_constructorContext>(i);
}

std::vector<SugarParser::Class_operator_overrideContext *> SugarParser::Class_member_segmentContext::class_operator_override() {
  return getRuleContexts<SugarParser::Class_operator_overrideContext>();
}

SugarParser::Class_operator_overrideContext* SugarParser::Class_member_segmentContext::class_operator_override(size_t i) {
  return getRuleContext<SugarParser::Class_operator_overrideContext>(i);
}

std::vector<SugarParser::Function_declarationContext *> SugarParser::Class_member_segmentContext::function_declaration() {
  return getRuleContexts<SugarParser::Function_declarationContext>();
}

SugarParser::Function_declarationContext* SugarParser::Class_member_segmentContext::function_declaration(size_t i) {
  return getRuleContext<SugarParser::Function_declarationContext>(i);
}

std::vector<SugarParser::Var_declarationContext *> SugarParser::Class_member_segmentContext::var_declaration() {
  return getRuleContexts<SugarParser::Var_declarationContext>();
}

SugarParser::Var_declarationContext* SugarParser::Class_member_segmentContext::var_declaration(size_t i) {
  return getRuleContext<SugarParser::Var_declarationContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Class_member_segmentContext::SEMICOLON() {
  return getTokens(SugarParser::SEMICOLON);
}

tree::TerminalNode* SugarParser::Class_member_segmentContext::SEMICOLON(size_t i) {
  return getToken(SugarParser::SEMICOLON, i);
}

std::vector<SugarParser::AssignmentContext *> SugarParser::Class_member_segmentContext::assignment() {
  return getRuleContexts<SugarParser::AssignmentContext>();
}

SugarParser::AssignmentContext* SugarParser::Class_member_segmentContext::assignment(size_t i) {
  return getRuleContext<SugarParser::AssignmentContext>(i);
}


size_t SugarParser::Class_member_segmentContext::getRuleIndex() const {
  return SugarParser::RuleClass_member_segment;
}

void SugarParser::Class_member_segmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_member_segment(this);
}

void SugarParser::Class_member_segmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_member_segment(this);
}


std::any SugarParser::Class_member_segmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_member_segment(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_member_segmentContext* SugarParser::class_member_segment() {
  Class_member_segmentContext *_localctx = _tracker.createInstance<Class_member_segmentContext>(_ctx, getState());
  enterRule(_localctx, 98, SugarParser::RuleClass_member_segment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    match(SugarParser::LCURL);
    setState(538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 2) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 2)) & -9178898989459341325) != 0)) {
      setState(536);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
      case 1: {
        setState(527);
        class_constructor();
        break;
      }

      case 2: {
        setState(528);
        class_operator_override();
        break;
      }

      case 3: {
        setState(529);
        function_declaration();
        break;
      }

      case 4: {
        setState(530);
        var_declaration();
        setState(531);
        match(SugarParser::SEMICOLON);
        break;
      }

      case 5: {
        setState(533);
        assignment();
        setState(534);
        match(SugarParser::SEMICOLON);
        break;
      }

      default:
        break;
      }
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(541);
    match(SugarParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_constructorContext ------------------------------------------------------------------

SugarParser::Class_constructorContext::Class_constructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Class_constructorContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::Parameter_listContext* SugarParser::Class_constructorContext::parameter_list() {
  return getRuleContext<SugarParser::Parameter_listContext>(0);
}

tree::TerminalNode* SugarParser::Class_constructorContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::BlockContext* SugarParser::Class_constructorContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::Class_constructorContext::getRuleIndex() const {
  return SugarParser::RuleClass_constructor;
}

void SugarParser::Class_constructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_constructor(this);
}

void SugarParser::Class_constructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_constructor(this);
}


std::any SugarParser::Class_constructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_constructor(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_constructorContext* SugarParser::class_constructor() {
  Class_constructorContext *_localctx = _tracker.createInstance<Class_constructorContext>(_ctx, getState());
  enterRule(_localctx, 100, SugarParser::RuleClass_constructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    match(SugarParser::LPAREN);
    setState(544);
    parameter_list();
    setState(545);
    match(SugarParser::RPAREN);
    setState(546);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_operator_overrideContext ------------------------------------------------------------------

SugarParser::Class_operator_overrideContext::Class_operator_overrideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SugarParser::Class_overrideable_operatorContext* SugarParser::Class_operator_overrideContext::class_overrideable_operator() {
  return getRuleContext<SugarParser::Class_overrideable_operatorContext>(0);
}

tree::TerminalNode* SugarParser::Class_operator_overrideContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::Parameter_listContext* SugarParser::Class_operator_overrideContext::parameter_list() {
  return getRuleContext<SugarParser::Parameter_listContext>(0);
}

tree::TerminalNode* SugarParser::Class_operator_overrideContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}

SugarParser::BlockContext* SugarParser::Class_operator_overrideContext::block() {
  return getRuleContext<SugarParser::BlockContext>(0);
}


size_t SugarParser::Class_operator_overrideContext::getRuleIndex() const {
  return SugarParser::RuleClass_operator_override;
}

void SugarParser::Class_operator_overrideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_operator_override(this);
}

void SugarParser::Class_operator_overrideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_operator_override(this);
}


std::any SugarParser::Class_operator_overrideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_operator_override(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_operator_overrideContext* SugarParser::class_operator_override() {
  Class_operator_overrideContext *_localctx = _tracker.createInstance<Class_operator_overrideContext>(_ctx, getState());
  enterRule(_localctx, 102, SugarParser::RuleClass_operator_override);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    class_overrideable_operator();
    setState(549);
    match(SugarParser::LPAREN);
    setState(550);
    parameter_list();
    setState(551);
    match(SugarParser::RPAREN);
    setState(552);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_overrideable_operatorContext ------------------------------------------------------------------

SugarParser::Class_overrideable_operatorContext::Class_overrideable_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::EQUAL() {
  return getToken(SugarParser::EQUAL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::PLUS() {
  return getToken(SugarParser::PLUS, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::MINUS() {
  return getToken(SugarParser::MINUS, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::INCREMENT() {
  return getToken(SugarParser::INCREMENT, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::DECREMENT() {
  return getToken(SugarParser::DECREMENT, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::MUL() {
  return getToken(SugarParser::MUL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::DIV() {
  return getToken(SugarParser::DIV, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::MOD() {
  return getToken(SugarParser::MOD, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::DEQUAL() {
  return getToken(SugarParser::DEQUAL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::NEQUAL() {
  return getToken(SugarParser::NEQUAL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::LESS() {
  return getToken(SugarParser::LESS, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::LESSEQUAL() {
  return getToken(SugarParser::LESSEQUAL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::GREATER() {
  return getToken(SugarParser::GREATER, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::GREATEREQUAL() {
  return getToken(SugarParser::GREATEREQUAL, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::AND() {
  return getToken(SugarParser::AND, 0);
}

tree::TerminalNode* SugarParser::Class_overrideable_operatorContext::OR() {
  return getToken(SugarParser::OR, 0);
}


size_t SugarParser::Class_overrideable_operatorContext::getRuleIndex() const {
  return SugarParser::RuleClass_overrideable_operator;
}

void SugarParser::Class_overrideable_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_overrideable_operator(this);
}

void SugarParser::Class_overrideable_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_overrideable_operator(this);
}


std::any SugarParser::Class_overrideable_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitClass_overrideable_operator(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Class_overrideable_operatorContext* SugarParser::class_overrideable_operator() {
  Class_overrideable_operatorContext *_localctx = _tracker.createInstance<Class_overrideable_operatorContext>(_ctx, getState());
  enterRule(_localctx, 104, SugarParser::RuleClass_overrideable_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5636044) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_typeContext ------------------------------------------------------------------

SugarParser::Variable_typeContext::Variable_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Variable_typeContext::BOOLTYPE() {
  return getToken(SugarParser::BOOLTYPE, 0);
}

tree::TerminalNode* SugarParser::Variable_typeContext::INTTYPE() {
  return getToken(SugarParser::INTTYPE, 0);
}

tree::TerminalNode* SugarParser::Variable_typeContext::DECIMALTYPE() {
  return getToken(SugarParser::DECIMALTYPE, 0);
}

tree::TerminalNode* SugarParser::Variable_typeContext::STRINGTYPE() {
  return getToken(SugarParser::STRINGTYPE, 0);
}

tree::TerminalNode* SugarParser::Variable_typeContext::ANYTYPE() {
  return getToken(SugarParser::ANYTYPE, 0);
}

SugarParser::User_defined_typeContext* SugarParser::Variable_typeContext::user_defined_type() {
  return getRuleContext<SugarParser::User_defined_typeContext>(0);
}


size_t SugarParser::Variable_typeContext::getRuleIndex() const {
  return SugarParser::RuleVariable_type;
}

void SugarParser::Variable_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_type(this);
}

void SugarParser::Variable_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_type(this);
}


std::any SugarParser::Variable_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitVariable_type(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Variable_typeContext* SugarParser::variable_type() {
  Variable_typeContext *_localctx = _tracker.createInstance<Variable_typeContext>(_ctx, getState());
  enterRule(_localctx, 106, SugarParser::RuleVariable_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SugarParser::BOOLTYPE: {
        enterOuterAlt(_localctx, 1);
        setState(556);
        match(SugarParser::BOOLTYPE);
        break;
      }

      case SugarParser::INTTYPE: {
        enterOuterAlt(_localctx, 2);
        setState(557);
        match(SugarParser::INTTYPE);
        break;
      }

      case SugarParser::DECIMALTYPE: {
        enterOuterAlt(_localctx, 3);
        setState(558);
        match(SugarParser::DECIMALTYPE);
        break;
      }

      case SugarParser::STRINGTYPE: {
        enterOuterAlt(_localctx, 4);
        setState(559);
        match(SugarParser::STRINGTYPE);
        break;
      }

      case SugarParser::ANYTYPE: {
        enterOuterAlt(_localctx, 5);
        setState(560);
        match(SugarParser::ANYTYPE);
        break;
      }

      case SugarParser::VAR: {
        enterOuterAlt(_localctx, 6);
        setState(561);
        user_defined_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

SugarParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Function_callContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}

tree::TerminalNode* SugarParser::Function_callContext::LPAREN() {
  return getToken(SugarParser::LPAREN, 0);
}

SugarParser::Argument_listContext* SugarParser::Function_callContext::argument_list() {
  return getRuleContext<SugarParser::Argument_listContext>(0);
}

tree::TerminalNode* SugarParser::Function_callContext::RPAREN() {
  return getToken(SugarParser::RPAREN, 0);
}


size_t SugarParser::Function_callContext::getRuleIndex() const {
  return SugarParser::RuleFunction_call;
}

void SugarParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void SugarParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


std::any SugarParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Function_callContext* SugarParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 108, SugarParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(SugarParser::VAR);
    setState(565);
    match(SugarParser::LPAREN);
    setState(566);
    argument_list();
    setState(567);
    match(SugarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

SugarParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SugarParser::ExpressionContext *> SugarParser::Argument_listContext::expression() {
  return getRuleContexts<SugarParser::ExpressionContext>();
}

SugarParser::ExpressionContext* SugarParser::Argument_listContext::expression(size_t i) {
  return getRuleContext<SugarParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SugarParser::Argument_listContext::COMMA() {
  return getTokens(SugarParser::COMMA);
}

tree::TerminalNode* SugarParser::Argument_listContext::COMMA(size_t i) {
  return getToken(SugarParser::COMMA, i);
}


size_t SugarParser::Argument_listContext::getRuleIndex() const {
  return SugarParser::RuleArgument_list;
}

void SugarParser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void SugarParser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}


std::any SugarParser::Argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitArgument_list(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Argument_listContext* SugarParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 110, SugarParser::RuleArgument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -4215369246923815918) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 7) != 0)) {
      setState(569);
      expression();
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SugarParser::COMMA) {
        setState(570);
        match(SugarParser::COMMA);
        setState(571);
        expression();
        setState(576);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- User_defined_typeContext ------------------------------------------------------------------

SugarParser::User_defined_typeContext::User_defined_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::User_defined_typeContext::VAR() {
  return getToken(SugarParser::VAR, 0);
}


size_t SugarParser::User_defined_typeContext::getRuleIndex() const {
  return SugarParser::RuleUser_defined_type;
}

void SugarParser::User_defined_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUser_defined_type(this);
}

void SugarParser::User_defined_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUser_defined_type(this);
}


std::any SugarParser::User_defined_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitUser_defined_type(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::User_defined_typeContext* SugarParser::user_defined_type() {
  User_defined_typeContext *_localctx = _tracker.createInstance<User_defined_typeContext>(_ctx, getState());
  enterRule(_localctx, 112, SugarParser::RuleUser_defined_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(SugarParser::VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_symbolContext ------------------------------------------------------------------

SugarParser::Comparison_symbolContext::Comparison_symbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::LESS() {
  return getToken(SugarParser::LESS, 0);
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::LESSEQUAL() {
  return getToken(SugarParser::LESSEQUAL, 0);
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::GREATER() {
  return getToken(SugarParser::GREATER, 0);
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::GREATEREQUAL() {
  return getToken(SugarParser::GREATEREQUAL, 0);
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::DEQUAL() {
  return getToken(SugarParser::DEQUAL, 0);
}

tree::TerminalNode* SugarParser::Comparison_symbolContext::NEQUAL() {
  return getToken(SugarParser::NEQUAL, 0);
}


size_t SugarParser::Comparison_symbolContext::getRuleIndex() const {
  return SugarParser::RuleComparison_symbol;
}

void SugarParser::Comparison_symbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_symbol(this);
}

void SugarParser::Comparison_symbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_symbol(this);
}


std::any SugarParser::Comparison_symbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitComparison_symbol(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Comparison_symbolContext* SugarParser::comparison_symbol() {
  Comparison_symbolContext *_localctx = _tracker.createInstance<Comparison_symbolContext>(_ctx, getState());
  enterRule(_localctx, 114, SugarParser::RuleComparison_symbol);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 129024) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Formatted_stringContext ------------------------------------------------------------------

SugarParser::Formatted_stringContext::Formatted_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Formatted_stringContext::STRING() {
  return getToken(SugarParser::STRING, 0);
}


size_t SugarParser::Formatted_stringContext::getRuleIndex() const {
  return SugarParser::RuleFormatted_string;
}

void SugarParser::Formatted_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormatted_string(this);
}

void SugarParser::Formatted_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormatted_string(this);
}


std::any SugarParser::Formatted_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitFormatted_string(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Formatted_stringContext* SugarParser::formatted_string() {
  Formatted_stringContext *_localctx = _tracker.createInstance<Formatted_stringContext>(_ctx, getState());
  enterRule(_localctx, 116, SugarParser::RuleFormatted_string);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(SugarParser::T__0);
    setState(584);
    match(SugarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_logic_operatorContext ------------------------------------------------------------------

SugarParser::And_logic_operatorContext::And_logic_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::And_logic_operatorContext::OR() {
  return getToken(SugarParser::OR, 0);
}

tree::TerminalNode* SugarParser::And_logic_operatorContext::WORD_OR() {
  return getToken(SugarParser::WORD_OR, 0);
}


size_t SugarParser::And_logic_operatorContext::getRuleIndex() const {
  return SugarParser::RuleAnd_logic_operator;
}

void SugarParser::And_logic_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_logic_operator(this);
}

void SugarParser::And_logic_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_logic_operator(this);
}


std::any SugarParser::And_logic_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitAnd_logic_operator(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::And_logic_operatorContext* SugarParser::and_logic_operator() {
  And_logic_operatorContext *_localctx = _tracker.createInstance<And_logic_operatorContext>(_ctx, getState());
  enterRule(_localctx, 118, SugarParser::RuleAnd_logic_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    _la = _input->LA(1);
    if (!(_la == SugarParser::OR

    || _la == SugarParser::WORD_OR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_logic_operatorContext ------------------------------------------------------------------

SugarParser::Or_logic_operatorContext::Or_logic_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SugarParser::Or_logic_operatorContext::AND() {
  return getToken(SugarParser::AND, 0);
}

tree::TerminalNode* SugarParser::Or_logic_operatorContext::WORD_AND() {
  return getToken(SugarParser::WORD_AND, 0);
}


size_t SugarParser::Or_logic_operatorContext::getRuleIndex() const {
  return SugarParser::RuleOr_logic_operator;
}

void SugarParser::Or_logic_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_logic_operator(this);
}

void SugarParser::Or_logic_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SugarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_logic_operator(this);
}


std::any SugarParser::Or_logic_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SugarVisitor*>(visitor))
    return parserVisitor->visitOr_logic_operator(this);
  else
    return visitor->visitChildren(this);
}

SugarParser::Or_logic_operatorContext* SugarParser::or_logic_operator() {
  Or_logic_operatorContext *_localctx = _tracker.createInstance<Or_logic_operatorContext>(_ctx, getState());
  enterRule(_localctx, 120, SugarParser::RuleOr_logic_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    _la = _input->LA(1);
    if (!(_la == SugarParser::AND

    || _la == SugarParser::WORD_AND)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SugarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sugarParserInitialize();
#else
  ::antlr4::internal::call_once(sugarParserOnceFlag, sugarParserInitialize);
#endif
}
