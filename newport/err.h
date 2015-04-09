
const string LOADING_DOCUMENT_FAILED = "loading document failed";
const string LIST_OF_LISTS = "list of lists";
const string INVALID_INDEX_VALUE = "invalid @index value";
const string CONFLICTING_INDEXES = "conflicting indexes";
const string INVALID_ID_VALUE = "invalid @id value";
const string INVALID_LOCAL_CONTEXT = "invalid local context";
const string MULTIPLE_CONTEXT_LINK_HEADERS = "multiple context link headers";
const string LOADING_REMOTE_CONTEXT_FAILED = "loading remote context failed";
const string INVALID_REMOTE_CONTEXT = "invalid remote context";
const string RECURSIVE_CONTEXT_INCLUSION = "recursive context inclusion";
const string INVALID_BASE_IRI = "invalid base IRI";
const string INVALID_VOCAB_MAPPING = "invalid vocab mapping";
const string INVALID_DEFAULT_LANGUAGE = "invalid default language";
const string KEYWORD_REDEFINITION = "keyword redefinition";
const string INVALID_TERM_DEFINITION = "invalid term definition";
const string INVALID_REVERSE_PROPERTY = "invalid reverse property";
const string INVALID_IRI_MAPPING = "invalid IRI mapping";
const string CYCLIC_IRI_MAPPING = "cyclic IRI mapping";
const string INVALID_KEYWORD_ALIAS = "invalid keyword alias";
const string INVALID_TYPE_MAPPING = "invalid type mapping";
const string INVALID_LANGUAGE_MAPPING = "invalid language mapping";
const string COLLIDING_KEYWORDS = "colliding keywords";
const string INVALID_CONTAINER_MAPPING = "invalid container mapping";
const string INVALID_TYPE_VALUE = "invalid type value";
const string INVALID_VALUE_OBJECT = "invalid value object";
const string INVALID_VALUE_OBJECT_VALUE = "invalid value object value";
const string INVALID_LANGUAGE_TAGGED_STRING = "invalid language-tagged const String";
const string INVALID_LANGUAGE_TAGGED_VALUE = "invalid language-tagged value";
const string INVALID_TYPED_VALUE = "invalid typed value";
const string INVALID_SET_OR_LIST_OBJECT = "invalid set or list object";
const string INVALID_LANGUAGE_MAP_VALUE = "invalid language map value";
const string COMPACTION_TO_LIST_OF_LISTS = "compaction to list of lists";
const string INVALID_REVERSE_PROPERTY_MAP = "invalid reverse property map";
const string INVALID_REVERSE_VALUE = "invalid @reverse value";
const string INVALID_REVERSE_PROPERTY_VALUE = "invalid reverse property value";
const string SYNTAX_ERROR = "syntax error";
const string NOT_IMPLEMENTED = "not implemnted";
const string UNKNOWN_FORMAT = "unknown format";
const string INVALID_INPUT = "invalid input";
const string PARSE_ERROR = "parse error";
const string UNKNOWN_ERROR = "unknown error";

template<typename M, typename K, typename E> inline bool throw_if_contains ( const M& m, const K& k, const E& err ) {
	if ( m.find ( k ) == m.end() ) throw err;
	return true;
}
template<typename M, typename K, typename E> inline bool throw_if_not_contains ( const M& m, const K& k, const E& err ) {
	if ( m.find ( k ) != m.end() ) throw err;
	return true;
}