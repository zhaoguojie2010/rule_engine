// Generated from crule.g4 by ANTLR 4.9
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class cruleLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, PLUS=2, MINUS=3, DIV=4, MUL=5, MOD=6, DOT=7, SEMICOLON=8, LR_BRACE=9, 
		RR_BRACE=10, LR_BRACKET=11, RR_BRACKET=12, LS_BRACKET=13, RS_BRACKET=14, 
		RULE=15, IF=16, IN=17, THEN=18, AND=19, OR=20, TRUE=21, FALSE=22, NIL_LITERAL=23, 
		NEGATION=24, SALIENCE=25, EQUALS=26, ASSIGN=27, PLUS_ASIGN=28, MINUS_ASIGN=29, 
		DIV_ASIGN=30, MUL_ASIGN=31, GT=32, LT=33, GTE=34, LTE=35, NOTEQUALS=36, 
		BITAND=37, BITOR=38, SIMPLENAME=39, DQUOTA_STRING=40, SQUOTA_STRING=41, 
		DECIMAL_FLOAT_LIT=42, DECIMAL_EXPONENT=43, HEX_FLOAT_LIT=44, HEX_EXPONENT=45, 
		DEC_LIT=46, HEX_LIT=47, OCT_LIT=48, SPACE=49, COMMENT=50, LINE_COMMENT=51;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", 
			"N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "PLUS", 
			"MINUS", "DIV", "MUL", "MOD", "DOT", "SEMICOLON", "LR_BRACE", "RR_BRACE", 
			"LR_BRACKET", "RR_BRACKET", "LS_BRACKET", "RS_BRACKET", "RULE", "IF", 
			"IN", "THEN", "AND", "OR", "TRUE", "FALSE", "NIL_LITERAL", "NEGATION", 
			"SALIENCE", "EQUALS", "ASSIGN", "PLUS_ASIGN", "MINUS_ASIGN", "DIV_ASIGN", 
			"MUL_ASIGN", "GT", "LT", "GTE", "LTE", "NOTEQUALS", "BITAND", "BITOR", 
			"SIMPLENAME", "DQUOTA_STRING", "SQUOTA_STRING", "DECIMAL_FLOAT_LIT", 
			"DECIMAL_EXPONENT", "HEX_FLOAT_LIT", "HEX_MANTISA", "HEX_EXPONENT", "DEC_LIT", 
			"HEX_LIT", "OCT_LIT", "HEX_DIGITS", "DEC_DIGITS", "OCT_DIGITS", "DEC_DIGIT", 
			"OCT_DIGIT", "HEX_DIGIT", "SPACE", "COMMENT", "LINE_COMMENT"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "','", "'+'", "'-'", "'/'", "'*'", "'%'", "'.'", "';'", "'{'", 
			"'}'", "'('", "')'", "'['", "']'", null, null, null, null, "'&&'", "'||'", 
			null, null, null, "'!'", null, "'=='", "'='", "'+='", "'-='", "'/='", 
			"'*='", "'>'", "'<'", "'>='", "'<='", "'!='", "'&'", "'|'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "PLUS", "MINUS", "DIV", "MUL", "MOD", "DOT", "SEMICOLON", 
			"LR_BRACE", "RR_BRACE", "LR_BRACKET", "RR_BRACKET", "LS_BRACKET", "RS_BRACKET", 
			"RULE", "IF", "IN", "THEN", "AND", "OR", "TRUE", "FALSE", "NIL_LITERAL", 
			"NEGATION", "SALIENCE", "EQUALS", "ASSIGN", "PLUS_ASIGN", "MINUS_ASIGN", 
			"DIV_ASIGN", "MUL_ASIGN", "GT", "LT", "GTE", "LTE", "NOTEQUALS", "BITAND", 
			"BITOR", "SIMPLENAME", "DQUOTA_STRING", "SQUOTA_STRING", "DECIMAL_FLOAT_LIT", 
			"DECIMAL_EXPONENT", "HEX_FLOAT_LIT", "HEX_EXPONENT", "DEC_LIT", "HEX_LIT", 
			"OCT_LIT", "SPACE", "COMMENT", "LINE_COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public cruleLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "crule.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\65\u01df\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t"+
		"=\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4"+
		"I\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\t"+
		"T\4U\tU\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3"+
		"\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21"+
		"\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30"+
		"\3\30\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3\37"+
		"\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)"+
		"\3*\3*\3*\3*\3*\3+\3+\3+\3,\3,\3,\3-\3-\3-\3-\3-\3.\3.\3.\3/\3/\3/\3\60"+
		"\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62"+
		"\3\63\3\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65\3\65"+
		"\3\66\3\66\3\67\3\67\3\67\38\38\38\39\39\39\3:\3:\3:\3;\3;\3<\3<\3=\3"+
		"=\3=\3>\3>\3>\3?\3?\3?\3@\3@\3A\3A\3B\3B\7B\u0150\nB\fB\16B\u0153\13B"+
		"\3C\3C\3C\3C\3C\3C\7C\u015b\nC\fC\16C\u015e\13C\3C\3C\3D\3D\3D\3D\3D\3"+
		"D\7D\u0168\nD\fD\16D\u016b\13D\3D\3D\3E\3E\3E\3E\5E\u0173\nE\3E\3E\3E"+
		"\3E\3E\3E\5E\u017b\nE\5E\u017d\nE\3F\3F\3F\5F\u0182\nF\3F\3F\3G\3G\3G"+
		"\3G\3G\3H\3H\3H\5H\u018e\nH\3H\3H\3H\3H\5H\u0194\nH\3I\3I\3I\5I\u0199"+
		"\nI\3I\3I\3J\3J\3J\5J\u01a0\nJ\5J\u01a2\nJ\3K\3K\3K\3K\3L\3L\3L\3M\6M"+
		"\u01ac\nM\rM\16M\u01ad\3N\6N\u01b1\nN\rN\16N\u01b2\3O\6O\u01b6\nO\rO\16"+
		"O\u01b7\3P\3P\3Q\3Q\3R\3R\3S\6S\u01c1\nS\rS\16S\u01c2\3S\3S\3T\3T\3T\3"+
		"T\7T\u01cb\nT\fT\16T\u01ce\13T\3T\3T\3T\3T\3T\3U\3U\3U\3U\7U\u01d9\nU"+
		"\fU\16U\u01dc\13U\3U\3U\3\u01cc\2V\3\3\5\2\7\2\t\2\13\2\r\2\17\2\21\2"+
		"\23\2\25\2\27\2\31\2\33\2\35\2\37\2!\2#\2%\2\'\2)\2+\2-\2/\2\61\2\63\2"+
		"\65\2\67\29\4;\5=\6?\7A\bC\tE\nG\13I\fK\rM\16O\17Q\20S\21U\22W\23Y\24"+
		"[\25]\26_\27a\30c\31e\32g\33i\34k\35m\36o\37q s!u\"w#y${%}&\177\'\u0081"+
		"(\u0083)\u0085*\u0087+\u0089,\u008b-\u008d.\u008f\2\u0091/\u0093\60\u0095"+
		"\61\u0097\62\u0099\2\u009b\2\u009d\2\u009f\2\u00a1\2\u00a3\2\u00a5\63"+
		"\u00a7\64\u00a9\65\3\2&\4\2CCcc\4\2DDdd\4\2EEee\4\2FFff\4\2GGgg\4\2HH"+
		"hh\4\2IIii\4\2JJjj\4\2KKkk\4\2LLll\4\2MMmm\4\2NNnn\4\2OOoo\4\2PPpp\4\2"+
		"QQqq\4\2RRrr\4\2SSss\4\2TTtt\4\2UUuu\4\2VVvv\4\2WWww\4\2XXxx\4\2YYyy\4"+
		"\2ZZzz\4\2[[{{\4\2\\\\||\5\2C\\aac|\6\2\62;C\\aac|\4\2$$^^\4\2))^^\3\2"+
		"\63;\3\2\62;\3\2\629\5\2\62;CHch\5\2\13\f\17\17\"\"\4\2\f\f\17\17\2\u01d7"+
		"\2\3\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2"+
		"C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3"+
		"\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2"+
		"\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2"+
		"i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3"+
		"\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\2\u0081"+
		"\3\2\2\2\2\u0083\3\2\2\2\2\u0085\3\2\2\2\2\u0087\3\2\2\2\2\u0089\3\2\2"+
		"\2\2\u008b\3\2\2\2\2\u008d\3\2\2\2\2\u0091\3\2\2\2\2\u0093\3\2\2\2\2\u0095"+
		"\3\2\2\2\2\u0097\3\2\2\2\2\u00a5\3\2\2\2\2\u00a7\3\2\2\2\2\u00a9\3\2\2"+
		"\2\3\u00ab\3\2\2\2\5\u00ad\3\2\2\2\7\u00af\3\2\2\2\t\u00b1\3\2\2\2\13"+
		"\u00b3\3\2\2\2\r\u00b5\3\2\2\2\17\u00b7\3\2\2\2\21\u00b9\3\2\2\2\23\u00bb"+
		"\3\2\2\2\25\u00bd\3\2\2\2\27\u00bf\3\2\2\2\31\u00c1\3\2\2\2\33\u00c3\3"+
		"\2\2\2\35\u00c5\3\2\2\2\37\u00c7\3\2\2\2!\u00c9\3\2\2\2#\u00cb\3\2\2\2"+
		"%\u00cd\3\2\2\2\'\u00cf\3\2\2\2)\u00d1\3\2\2\2+\u00d3\3\2\2\2-\u00d5\3"+
		"\2\2\2/\u00d7\3\2\2\2\61\u00d9\3\2\2\2\63\u00db\3\2\2\2\65\u00dd\3\2\2"+
		"\2\67\u00df\3\2\2\29\u00e1\3\2\2\2;\u00e3\3\2\2\2=\u00e5\3\2\2\2?\u00e7"+
		"\3\2\2\2A\u00e9\3\2\2\2C\u00eb\3\2\2\2E\u00ed\3\2\2\2G\u00ef\3\2\2\2I"+
		"\u00f1\3\2\2\2K\u00f3\3\2\2\2M\u00f5\3\2\2\2O\u00f7\3\2\2\2Q\u00f9\3\2"+
		"\2\2S\u00fb\3\2\2\2U\u0100\3\2\2\2W\u0103\3\2\2\2Y\u0106\3\2\2\2[\u010b"+
		"\3\2\2\2]\u010e\3\2\2\2_\u0111\3\2\2\2a\u0116\3\2\2\2c\u011c\3\2\2\2e"+
		"\u0120\3\2\2\2g\u0122\3\2\2\2i\u012b\3\2\2\2k\u012e\3\2\2\2m\u0130\3\2"+
		"\2\2o\u0133\3\2\2\2q\u0136\3\2\2\2s\u0139\3\2\2\2u\u013c\3\2\2\2w\u013e"+
		"\3\2\2\2y\u0140\3\2\2\2{\u0143\3\2\2\2}\u0146\3\2\2\2\177\u0149\3\2\2"+
		"\2\u0081\u014b\3\2\2\2\u0083\u014d\3\2\2\2\u0085\u0154\3\2\2\2\u0087\u0161"+
		"\3\2\2\2\u0089\u017c\3\2\2\2\u008b\u017e\3\2\2\2\u008d\u0185\3\2\2\2\u008f"+
		"\u0193\3\2\2\2\u0091\u0195\3\2\2\2\u0093\u01a1\3\2\2\2\u0095\u01a3\3\2"+
		"\2\2\u0097\u01a7\3\2\2\2\u0099\u01ab\3\2\2\2\u009b\u01b0\3\2\2\2\u009d"+
		"\u01b5\3\2\2\2\u009f\u01b9\3\2\2\2\u00a1\u01bb\3\2\2\2\u00a3\u01bd\3\2"+
		"\2\2\u00a5\u01c0\3\2\2\2\u00a7\u01c6\3\2\2\2\u00a9\u01d4\3\2\2\2\u00ab"+
		"\u00ac\7.\2\2\u00ac\4\3\2\2\2\u00ad\u00ae\t\2\2\2\u00ae\6\3\2\2\2\u00af"+
		"\u00b0\t\3\2\2\u00b0\b\3\2\2\2\u00b1\u00b2\t\4\2\2\u00b2\n\3\2\2\2\u00b3"+
		"\u00b4\t\5\2\2\u00b4\f\3\2\2\2\u00b5\u00b6\t\6\2\2\u00b6\16\3\2\2\2\u00b7"+
		"\u00b8\t\7\2\2\u00b8\20\3\2\2\2\u00b9\u00ba\t\b\2\2\u00ba\22\3\2\2\2\u00bb"+
		"\u00bc\t\t\2\2\u00bc\24\3\2\2\2\u00bd\u00be\t\n\2\2\u00be\26\3\2\2\2\u00bf"+
		"\u00c0\t\13\2\2\u00c0\30\3\2\2\2\u00c1\u00c2\t\f\2\2\u00c2\32\3\2\2\2"+
		"\u00c3\u00c4\t\r\2\2\u00c4\34\3\2\2\2\u00c5\u00c6\t\16\2\2\u00c6\36\3"+
		"\2\2\2\u00c7\u00c8\t\17\2\2\u00c8 \3\2\2\2\u00c9\u00ca\t\20\2\2\u00ca"+
		"\"\3\2\2\2\u00cb\u00cc\t\21\2\2\u00cc$\3\2\2\2\u00cd\u00ce\t\22\2\2\u00ce"+
		"&\3\2\2\2\u00cf\u00d0\t\23\2\2\u00d0(\3\2\2\2\u00d1\u00d2\t\24\2\2\u00d2"+
		"*\3\2\2\2\u00d3\u00d4\t\25\2\2\u00d4,\3\2\2\2\u00d5\u00d6\t\26\2\2\u00d6"+
		".\3\2\2\2\u00d7\u00d8\t\27\2\2\u00d8\60\3\2\2\2\u00d9\u00da\t\30\2\2\u00da"+
		"\62\3\2\2\2\u00db\u00dc\t\31\2\2\u00dc\64\3\2\2\2\u00dd\u00de\t\32\2\2"+
		"\u00de\66\3\2\2\2\u00df\u00e0\t\33\2\2\u00e08\3\2\2\2\u00e1\u00e2\7-\2"+
		"\2\u00e2:\3\2\2\2\u00e3\u00e4\7/\2\2\u00e4<\3\2\2\2\u00e5\u00e6\7\61\2"+
		"\2\u00e6>\3\2\2\2\u00e7\u00e8\7,\2\2\u00e8@\3\2\2\2\u00e9\u00ea\7\'\2"+
		"\2\u00eaB\3\2\2\2\u00eb\u00ec\7\60\2\2\u00ecD\3\2\2\2\u00ed\u00ee\7=\2"+
		"\2\u00eeF\3\2\2\2\u00ef\u00f0\7}\2\2\u00f0H\3\2\2\2\u00f1\u00f2\7\177"+
		"\2\2\u00f2J\3\2\2\2\u00f3\u00f4\7*\2\2\u00f4L\3\2\2\2\u00f5\u00f6\7+\2"+
		"\2\u00f6N\3\2\2\2\u00f7\u00f8\7]\2\2\u00f8P\3\2\2\2\u00f9\u00fa\7_\2\2"+
		"\u00faR\3\2\2\2\u00fb\u00fc\5\'\24\2\u00fc\u00fd\5-\27\2\u00fd\u00fe\5"+
		"\33\16\2\u00fe\u00ff\5\r\7\2\u00ffT\3\2\2\2\u0100\u0101\5\25\13\2\u0101"+
		"\u0102\5\17\b\2\u0102V\3\2\2\2\u0103\u0104\5\25\13\2\u0104\u0105\5\37"+
		"\20\2\u0105X\3\2\2\2\u0106\u0107\5+\26\2\u0107\u0108\5\23\n\2\u0108\u0109"+
		"\5\r\7\2\u0109\u010a\5\37\20\2\u010aZ\3\2\2\2\u010b\u010c\7(\2\2\u010c"+
		"\u010d\7(\2\2\u010d\\\3\2\2\2\u010e\u010f\7~\2\2\u010f\u0110\7~\2\2\u0110"+
		"^\3\2\2\2\u0111\u0112\5+\26\2\u0112\u0113\5\'\24\2\u0113\u0114\5-\27\2"+
		"\u0114\u0115\5\r\7\2\u0115`\3\2\2\2\u0116\u0117\5\17\b\2\u0117\u0118\5"+
		"\5\3\2\u0118\u0119\5\33\16\2\u0119\u011a\5)\25\2\u011a\u011b\5\r\7\2\u011b"+
		"b\3\2\2\2\u011c\u011d\5\37\20\2\u011d\u011e\5\25\13\2\u011e\u011f\5\33"+
		"\16\2\u011fd\3\2\2\2\u0120\u0121\7#\2\2\u0121f\3\2\2\2\u0122\u0123\5)"+
		"\25\2\u0123\u0124\5\5\3\2\u0124\u0125\5\33\16\2\u0125\u0126\5\25\13\2"+
		"\u0126\u0127\5\r\7\2\u0127\u0128\5\37\20\2\u0128\u0129\5\t\5\2\u0129\u012a"+
		"\5\r\7\2\u012ah\3\2\2\2\u012b\u012c\7?\2\2\u012c\u012d\7?\2\2\u012dj\3"+
		"\2\2\2\u012e\u012f\7?\2\2\u012fl\3\2\2\2\u0130\u0131\7-\2\2\u0131\u0132"+
		"\7?\2\2\u0132n\3\2\2\2\u0133\u0134\7/\2\2\u0134\u0135\7?\2\2\u0135p\3"+
		"\2\2\2\u0136\u0137\7\61\2\2\u0137\u0138\7?\2\2\u0138r\3\2\2\2\u0139\u013a"+
		"\7,\2\2\u013a\u013b\7?\2\2\u013bt\3\2\2\2\u013c\u013d\7@\2\2\u013dv\3"+
		"\2\2\2\u013e\u013f\7>\2\2\u013fx\3\2\2\2\u0140\u0141\7@\2\2\u0141\u0142"+
		"\7?\2\2\u0142z\3\2\2\2\u0143\u0144\7>\2\2\u0144\u0145\7?\2\2\u0145|\3"+
		"\2\2\2\u0146\u0147\7#\2\2\u0147\u0148\7?\2\2\u0148~\3\2\2\2\u0149\u014a"+
		"\7(\2\2\u014a\u0080\3\2\2\2\u014b\u014c\7~\2\2\u014c\u0082\3\2\2\2\u014d"+
		"\u0151\t\34\2\2\u014e\u0150\t\35\2\2\u014f\u014e\3\2\2\2\u0150\u0153\3"+
		"\2\2\2\u0151\u014f\3\2\2\2\u0151\u0152\3\2\2\2\u0152\u0084\3\2\2\2\u0153"+
		"\u0151\3\2\2\2\u0154\u015c\7$\2\2\u0155\u0156\7^\2\2\u0156\u015b\13\2"+
		"\2\2\u0157\u0158\7$\2\2\u0158\u015b\7$\2\2\u0159\u015b\n\36\2\2\u015a"+
		"\u0155\3\2\2\2\u015a\u0157\3\2\2\2\u015a\u0159\3\2\2\2\u015b\u015e\3\2"+
		"\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015f\3\2\2\2\u015e"+
		"\u015c\3\2\2\2\u015f\u0160\7$\2\2\u0160\u0086\3\2\2\2\u0161\u0169\7)\2"+
		"\2\u0162\u0163\7^\2\2\u0163\u0168\13\2\2\2\u0164\u0165\7)\2\2\u0165\u0168"+
		"\7)\2\2\u0166\u0168\n\37\2\2\u0167\u0162\3\2\2\2\u0167\u0164\3\2\2\2\u0167"+
		"\u0166\3\2\2\2\u0168\u016b\3\2\2\2\u0169\u0167\3\2\2\2\u0169\u016a\3\2"+
		"\2\2\u016a\u016c\3\2\2\2\u016b\u0169\3\2\2\2\u016c\u016d\7)\2\2\u016d"+
		"\u0088\3\2\2\2\u016e\u016f\5\u0093J\2\u016f\u0170\5C\"\2\u0170\u0172\5"+
		"\u0093J\2\u0171\u0173\5\u008bF\2\u0172\u0171\3\2\2\2\u0172\u0173\3\2\2"+
		"\2\u0173\u017d\3\2\2\2\u0174\u0175\5\u0093J\2\u0175\u0176\5\u008bF\2\u0176"+
		"\u017d\3\2\2\2\u0177\u0178\5C\"\2\u0178\u017a\5\u0093J\2\u0179\u017b\5"+
		"\u008bF\2\u017a\u0179\3\2\2\2\u017a\u017b\3\2\2\2\u017b\u017d\3\2\2\2"+
		"\u017c\u016e\3\2\2\2\u017c\u0174\3\2\2\2\u017c\u0177\3\2\2\2\u017d\u008a"+
		"\3\2\2\2\u017e\u0181\5\r\7\2\u017f\u0182\59\35\2\u0180\u0182\5;\36\2\u0181"+
		"\u017f\3\2\2\2\u0181\u0180\3\2\2\2\u0181\u0182\3\2\2\2\u0182\u0183\3\2"+
		"\2\2\u0183\u0184\5\u009bN\2\u0184\u008c\3\2\2\2\u0185\u0186\7\62\2\2\u0186"+
		"\u0187\5\63\32\2\u0187\u0188\5\u008fH\2\u0188\u0189\5\u0091I\2\u0189\u008e"+
		"\3\2\2\2\u018a\u018b\5\u0099M\2\u018b\u018d\5C\"\2\u018c\u018e\5\u0099"+
		"M\2\u018d\u018c\3\2\2\2\u018d\u018e\3\2\2\2\u018e\u0194\3\2\2\2\u018f"+
		"\u0194\5\u0099M\2\u0190\u0191\5C\"\2\u0191\u0192\5\u0099M\2\u0192\u0194"+
		"\3\2\2\2\u0193\u018a\3\2\2\2\u0193\u018f\3\2\2\2\u0193\u0190\3\2\2\2\u0194"+
		"\u0090\3\2\2\2\u0195\u0198\5#\22\2\u0196\u0199\59\35\2\u0197\u0199\5;"+
		"\36\2\u0198\u0196\3\2\2\2\u0198\u0197\3\2\2\2\u0198\u0199\3\2\2\2\u0199"+
		"\u019a\3\2\2\2\u019a\u019b\5\u009bN\2\u019b\u0092\3\2\2\2\u019c\u01a2"+
		"\7\62\2\2\u019d\u019f\t \2\2\u019e\u01a0\5\u009bN\2\u019f\u019e\3\2\2"+
		"\2\u019f\u01a0\3\2\2\2\u01a0\u01a2\3\2\2\2\u01a1\u019c\3\2\2\2\u01a1\u019d"+
		"\3\2\2\2\u01a2\u0094\3\2\2\2\u01a3\u01a4\7\62\2\2\u01a4\u01a5\5\63\32"+
		"\2\u01a5\u01a6\5\u0099M\2\u01a6\u0096\3\2\2\2\u01a7\u01a8\7\62\2\2\u01a8"+
		"\u01a9\5\u009dO\2\u01a9\u0098\3\2\2\2\u01aa\u01ac\5\u00a3R\2\u01ab\u01aa"+
		"\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01ab\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae"+
		"\u009a\3\2\2\2\u01af\u01b1\5\u009fP\2\u01b0\u01af\3\2\2\2\u01b1\u01b2"+
		"\3\2\2\2\u01b2\u01b0\3\2\2\2\u01b2\u01b3\3\2\2\2\u01b3\u009c\3\2\2\2\u01b4"+
		"\u01b6\5\u00a1Q\2\u01b5\u01b4\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7\u01b5"+
		"\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8\u009e\3\2\2\2\u01b9\u01ba\t!\2\2\u01ba"+
		"\u00a0\3\2\2\2\u01bb\u01bc\t\"\2\2\u01bc\u00a2\3\2\2\2\u01bd\u01be\t#"+
		"\2\2\u01be\u00a4\3\2\2\2\u01bf\u01c1\t$\2\2\u01c0\u01bf\3\2\2\2\u01c1"+
		"\u01c2\3\2\2\2\u01c2\u01c0\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01c4\3\2"+
		"\2\2\u01c4\u01c5\bS\2\2\u01c5\u00a6\3\2\2\2\u01c6\u01c7\7\61\2\2\u01c7"+
		"\u01c8\7,\2\2\u01c8\u01cc\3\2\2\2\u01c9\u01cb\13\2\2\2\u01ca\u01c9\3\2"+
		"\2\2\u01cb\u01ce\3\2\2\2\u01cc\u01cd\3\2\2\2\u01cc\u01ca\3\2\2\2\u01cd"+
		"\u01cf\3\2\2\2\u01ce\u01cc\3\2\2\2\u01cf\u01d0\7,\2\2\u01d0\u01d1\7\61"+
		"\2\2\u01d1\u01d2\3\2\2\2\u01d2\u01d3\bT\2\2\u01d3\u00a8\3\2\2\2\u01d4"+
		"\u01d5\7\61\2\2\u01d5\u01d6\7\61\2\2\u01d6\u01da\3\2\2\2\u01d7\u01d9\n"+
		"%\2\2\u01d8\u01d7\3\2\2\2\u01d9\u01dc\3\2\2\2\u01da\u01d8\3\2\2\2\u01da"+
		"\u01db\3\2\2\2\u01db\u01dd\3\2\2\2\u01dc\u01da\3\2\2\2\u01dd\u01de\bU"+
		"\2\2\u01de\u00aa\3\2\2\2\27\2\u0151\u015a\u015c\u0167\u0169\u0172\u017a"+
		"\u017c\u0181\u018d\u0193\u0198\u019f\u01a1\u01ad\u01b2\u01b7\u01c2\u01cc"+
		"\u01da\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}