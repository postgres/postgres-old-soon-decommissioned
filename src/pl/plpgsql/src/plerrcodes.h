/*-------------------------------------------------------------------------
 *
 * plerrcodes.h
 *	  PL/pgSQL error codes (mapping of exception labels to SQLSTATEs)
 *
 * Eventually this header file should be auto-generated from errcodes.h
 * with some sort of sed hackery, but no time for that now.  It's likely
 * that an exact mapping will not be what's wanted anyhow ...
 *
 * Copyright (c) 2003, PostgreSQL Global Development Group
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */

/* Success and warnings can't be caught, so omit them from table */
{ "SQL_STATEMENT_NOT_YET_COMPLETE", ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE },
{ "CONNECTION_EXCEPTION", ERRCODE_CONNECTION_EXCEPTION },
{ "CONNECTION_DOES_NOT_EXIST", ERRCODE_CONNECTION_DOES_NOT_EXIST },
{ "CONNECTION_FAILURE", ERRCODE_CONNECTION_FAILURE },
{ "SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION", ERRCODE_SQLCLIENT_UNABLE_TO_ESTABLISH_SQLCONNECTION },
{ "SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION", ERRCODE_SQLSERVER_REJECTED_ESTABLISHMENT_OF_SQLCONNECTION },
{ "TRANSACTION_RESOLUTION_UNKNOWN", ERRCODE_TRANSACTION_RESOLUTION_UNKNOWN },
{ "PROTOCOL_VIOLATION", ERRCODE_PROTOCOL_VIOLATION },
{ "TRIGGERED_ACTION_EXCEPTION", ERRCODE_TRIGGERED_ACTION_EXCEPTION },
{ "FEATURE_NOT_SUPPORTED", ERRCODE_FEATURE_NOT_SUPPORTED },
{ "INVALID_TRANSACTION_INITIATION", ERRCODE_INVALID_TRANSACTION_INITIATION },
{ "LOCATOR_EXCEPTION", ERRCODE_LOCATOR_EXCEPTION },
{ "INVALID_LOCATOR_SPECIFICATION", ERRCODE_L_E_INVALID_SPECIFICATION },
{ "INVALID_GRANTOR", ERRCODE_INVALID_GRANTOR },
{ "INVALID_GRANT_OPERATION", ERRCODE_INVALID_GRANT_OPERATION },
{ "INVALID_ROLE_SPECIFICATION", ERRCODE_INVALID_ROLE_SPECIFICATION },
{ "CARDINALITY_VIOLATION", ERRCODE_CARDINALITY_VIOLATION },
{ "DATA_EXCEPTION", ERRCODE_DATA_EXCEPTION },
{ "ARRAY_ELEMENT_ERROR", ERRCODE_ARRAY_ELEMENT_ERROR },
{ "ARRAY_SUBSCRIPT_ERROR", ERRCODE_ARRAY_SUBSCRIPT_ERROR },
{ "CHARACTER_NOT_IN_REPERTOIRE", ERRCODE_CHARACTER_NOT_IN_REPERTOIRE },
{ "DATETIME_FIELD_OVERFLOW", ERRCODE_DATETIME_FIELD_OVERFLOW },
{ "DATETIME_VALUE_OUT_OF_RANGE", ERRCODE_DATETIME_VALUE_OUT_OF_RANGE },
{ "DIVISION_BY_ZERO", ERRCODE_DIVISION_BY_ZERO },
{ "ERROR_IN_ASSIGNMENT", ERRCODE_ERROR_IN_ASSIGNMENT },
{ "ESCAPE_CHARACTER_CONFLICT", ERRCODE_ESCAPE_CHARACTER_CONFLICT },
{ "INDICATOR_OVERFLOW", ERRCODE_INDICATOR_OVERFLOW },
{ "INTERVAL_FIELD_OVERFLOW", ERRCODE_INTERVAL_FIELD_OVERFLOW },
{ "INVALID_ARGUMENT_FOR_LOGARITHM", ERRCODE_INVALID_ARGUMENT_FOR_LOG },
{ "INVALID_ARGUMENT_FOR_POWER_FUNCTION", ERRCODE_INVALID_ARGUMENT_FOR_POWER_FUNCTION },
{ "INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION", ERRCODE_INVALID_ARGUMENT_FOR_WIDTH_BUCKET_FUNCTION },
{ "INVALID_CHARACTER_VALUE_FOR_CAST", ERRCODE_INVALID_CHARACTER_VALUE_FOR_CAST },
{ "INVALID_DATETIME_FORMAT", ERRCODE_INVALID_DATETIME_FORMAT },
{ "INVALID_ESCAPE_CHARACTER", ERRCODE_INVALID_ESCAPE_CHARACTER },
{ "INVALID_ESCAPE_OCTET", ERRCODE_INVALID_ESCAPE_OCTET },
{ "INVALID_ESCAPE_SEQUENCE", ERRCODE_INVALID_ESCAPE_SEQUENCE },
{ "INVALID_INDICATOR_PARAMETER_VALUE", ERRCODE_INVALID_INDICATOR_PARAMETER_VALUE },
{ "INVALID_LIMIT_VALUE", ERRCODE_INVALID_LIMIT_VALUE },
{ "INVALID_PARAMETER_VALUE", ERRCODE_INVALID_PARAMETER_VALUE },
{ "INVALID_REGULAR_EXPRESSION", ERRCODE_INVALID_REGULAR_EXPRESSION },
{ "INVALID_TIME_ZONE_DISPLACEMENT_VALUE", ERRCODE_INVALID_TIME_ZONE_DISPLACEMENT_VALUE },
{ "INVALID_USE_OF_ESCAPE_CHARACTER", ERRCODE_INVALID_USE_OF_ESCAPE_CHARACTER },
{ "MOST_SPECIFIC_TYPE_MISMATCH", ERRCODE_MOST_SPECIFIC_TYPE_MISMATCH },
{ "NULL_VALUE_NOT_ALLOWED", ERRCODE_NULL_VALUE_NOT_ALLOWED },
{ "NULL_VALUE_NO_INDICATOR_PARAMETER", ERRCODE_NULL_VALUE_NO_INDICATOR_PARAMETER },
{ "NUMERIC_VALUE_OUT_OF_RANGE", ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE },
{ "STRING_DATA_LENGTH_MISMATCH", ERRCODE_STRING_DATA_LENGTH_MISMATCH },
{ "STRING_DATA_RIGHT_TRUNCATION", ERRCODE_STRING_DATA_RIGHT_TRUNCATION },
{ "SUBSTRING_ERROR", ERRCODE_SUBSTRING_ERROR },
{ "TRIM_ERROR", ERRCODE_TRIM_ERROR },
{ "UNTERMINATED_C_STRING", ERRCODE_UNTERMINATED_C_STRING },
{ "ZERO_LENGTH_CHARACTER_STRING", ERRCODE_ZERO_LENGTH_CHARACTER_STRING },
{ "FLOATING_POINT_EXCEPTION", ERRCODE_FLOATING_POINT_EXCEPTION },
{ "INVALID_TEXT_REPRESENTATION", ERRCODE_INVALID_TEXT_REPRESENTATION },
{ "INVALID_BINARY_REPRESENTATION", ERRCODE_INVALID_BINARY_REPRESENTATION },
{ "BAD_COPY_FILE_FORMAT", ERRCODE_BAD_COPY_FILE_FORMAT },
{ "UNTRANSLATABLE_CHARACTER", ERRCODE_UNTRANSLATABLE_CHARACTER },
{ "INTEGRITY_CONSTRAINT_VIOLATION", ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION },
{ "RESTRICT_VIOLATION", ERRCODE_RESTRICT_VIOLATION },
{ "NOT_NULL_VIOLATION", ERRCODE_NOT_NULL_VIOLATION },
{ "FOREIGN_KEY_VIOLATION", ERRCODE_FOREIGN_KEY_VIOLATION },
{ "UNIQUE_VIOLATION", ERRCODE_UNIQUE_VIOLATION },
{ "CHECK_VIOLATION", ERRCODE_CHECK_VIOLATION },
{ "INVALID_CURSOR_STATE", ERRCODE_INVALID_CURSOR_STATE },
{ "INVALID_TRANSACTION_STATE", ERRCODE_INVALID_TRANSACTION_STATE },
{ "ACTIVE_SQL_TRANSACTION", ERRCODE_ACTIVE_SQL_TRANSACTION },
{ "BRANCH_TRANSACTION_ALREADY_ACTIVE", ERRCODE_BRANCH_TRANSACTION_ALREADY_ACTIVE },
{ "HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL", ERRCODE_HELD_CURSOR_REQUIRES_SAME_ISOLATION_LEVEL },
{ "INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION", ERRCODE_INAPPROPRIATE_ACCESS_MODE_FOR_BRANCH_TRANSACTION },
{ "INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION", ERRCODE_INAPPROPRIATE_ISOLATION_LEVEL_FOR_BRANCH_TRANSACTION },
{ "NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION", ERRCODE_NO_ACTIVE_SQL_TRANSACTION_FOR_BRANCH_TRANSACTION },
{ "READ_ONLY_SQL_TRANSACTION", ERRCODE_READ_ONLY_SQL_TRANSACTION },
{ "SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED", ERRCODE_SCHEMA_AND_DATA_STATEMENT_MIXING_NOT_SUPPORTED },
{ "NO_ACTIVE_SQL_TRANSACTION", ERRCODE_NO_ACTIVE_SQL_TRANSACTION },
{ "IN_FAILED_SQL_TRANSACTION", ERRCODE_IN_FAILED_SQL_TRANSACTION },
{ "INVALID_SQL_STATEMENT_NAME", ERRCODE_INVALID_SQL_STATEMENT_NAME },
{ "TRIGGERED_DATA_CHANGE_VIOLATION", ERRCODE_TRIGGERED_DATA_CHANGE_VIOLATION },
{ "INVALID_AUTHORIZATION_SPECIFICATION", ERRCODE_INVALID_AUTHORIZATION_SPECIFICATION },
{ "DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST", ERRCODE_DEPENDENT_PRIVILEGE_DESCRIPTORS_STILL_EXIST },
{ "DEPENDENT_OBJECTS_STILL_EXIST", ERRCODE_DEPENDENT_OBJECTS_STILL_EXIST },
{ "INVALID_TRANSACTION_TERMINATION", ERRCODE_INVALID_TRANSACTION_TERMINATION },
{ "SQL_ROUTINE_EXCEPTION", ERRCODE_SQL_ROUTINE_EXCEPTION },
{ "FUNCTION_EXECUTED_NO_RETURN_STATEMENT", ERRCODE_S_R_E_FUNCTION_EXECUTED_NO_RETURN_STATEMENT },
{ "MODIFYING_SQL_DATA_NOT_PERMITTED", ERRCODE_S_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED },
{ "PROHIBITED_SQL_STATEMENT_ATTEMPTED", ERRCODE_S_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED },
{ "READING_SQL_DATA_NOT_PERMITTED", ERRCODE_S_R_E_READING_SQL_DATA_NOT_PERMITTED },
{ "INVALID_CURSOR_NAME", ERRCODE_INVALID_CURSOR_NAME },
{ "EXTERNAL_ROUTINE_EXCEPTION", ERRCODE_EXTERNAL_ROUTINE_EXCEPTION },
{ "CONTAINING_SQL_NOT_PERMITTED", ERRCODE_E_R_E_CONTAINING_SQL_NOT_PERMITTED },
{ "MODIFYING_SQL_DATA_NOT_PERMITTED", ERRCODE_E_R_E_MODIFYING_SQL_DATA_NOT_PERMITTED },
{ "PROHIBITED_SQL_STATEMENT_ATTEMPTED", ERRCODE_E_R_E_PROHIBITED_SQL_STATEMENT_ATTEMPTED },
{ "READING_SQL_DATA_NOT_PERMITTED", ERRCODE_E_R_E_READING_SQL_DATA_NOT_PERMITTED },
{ "EXTERNAL_ROUTINE_INVOCATION_EXCEPTION", ERRCODE_EXTERNAL_ROUTINE_INVOCATION_EXCEPTION },
{ "INVALID_SQLSTATE_RETURNED", ERRCODE_E_R_I_E_INVALID_SQLSTATE_RETURNED },
{ "NULL_VALUE_NOT_ALLOWED", ERRCODE_E_R_I_E_NULL_VALUE_NOT_ALLOWED },
{ "TRIGGER_PROTOCOL_VIOLATED", ERRCODE_E_R_I_E_TRIGGER_PROTOCOL_VIOLATED },
{ "SRF_PROTOCOL_VIOLATED", ERRCODE_E_R_I_E_SRF_PROTOCOL_VIOLATED },
{ "SAVEPOINT_EXCEPTION", ERRCODE_SAVEPOINT_EXCEPTION },
{ "INVALID_SAVEPOINT_SPECIFICATION", ERRCODE_S_E_INVALID_SPECIFICATION },
{ "INVALID_CATALOG_NAME", ERRCODE_INVALID_CATALOG_NAME },
{ "INVALID_SCHEMA_NAME", ERRCODE_INVALID_SCHEMA_NAME },
{ "TRANSACTION_ROLLBACK", ERRCODE_TRANSACTION_ROLLBACK },
{ "TRANSACTION_INTEGRITY_CONSTRAINT_VIOLATION", ERRCODE_T_R_INTEGRITY_CONSTRAINT_VIOLATION },
{ "SERIALIZATION_FAILURE", ERRCODE_T_R_SERIALIZATION_FAILURE },
{ "STATEMENT_COMPLETION_UNKNOWN", ERRCODE_T_R_STATEMENT_COMPLETION_UNKNOWN },
{ "DEADLOCK_DETECTED", ERRCODE_T_R_DEADLOCK_DETECTED },
{ "SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION", ERRCODE_SYNTAX_ERROR_OR_ACCESS_RULE_VIOLATION },
{ "SYNTAX_ERROR", ERRCODE_SYNTAX_ERROR },
{ "INSUFFICIENT_PRIVILEGE", ERRCODE_INSUFFICIENT_PRIVILEGE },
{ "CANNOT_COERCE", ERRCODE_CANNOT_COERCE },
{ "GROUPING_ERROR", ERRCODE_GROUPING_ERROR },
{ "INVALID_FOREIGN_KEY", ERRCODE_INVALID_FOREIGN_KEY },
{ "INVALID_NAME", ERRCODE_INVALID_NAME },
{ "NAME_TOO_LONG", ERRCODE_NAME_TOO_LONG },
{ "RESERVED_NAME", ERRCODE_RESERVED_NAME },
{ "DATATYPE_MISMATCH", ERRCODE_DATATYPE_MISMATCH },
{ "INDETERMINATE_DATATYPE", ERRCODE_INDETERMINATE_DATATYPE },
{ "WRONG_OBJECT_TYPE", ERRCODE_WRONG_OBJECT_TYPE },
{ "UNDEFINED_COLUMN", ERRCODE_UNDEFINED_COLUMN },
{ "UNDEFINED_CURSOR", ERRCODE_UNDEFINED_CURSOR },
{ "UNDEFINED_DATABASE", ERRCODE_UNDEFINED_DATABASE },
{ "UNDEFINED_FUNCTION", ERRCODE_UNDEFINED_FUNCTION },
{ "UNDEFINED_PSTATEMENT", ERRCODE_UNDEFINED_PSTATEMENT },
{ "UNDEFINED_SCHEMA", ERRCODE_UNDEFINED_SCHEMA },
{ "UNDEFINED_TABLE", ERRCODE_UNDEFINED_TABLE },
{ "UNDEFINED_PARAMETER", ERRCODE_UNDEFINED_PARAMETER },
{ "UNDEFINED_OBJECT", ERRCODE_UNDEFINED_OBJECT },
{ "DUPLICATE_COLUMN", ERRCODE_DUPLICATE_COLUMN },
{ "DUPLICATE_CURSOR", ERRCODE_DUPLICATE_CURSOR },
{ "DUPLICATE_DATABASE", ERRCODE_DUPLICATE_DATABASE },
{ "DUPLICATE_FUNCTION", ERRCODE_DUPLICATE_FUNCTION },
{ "DUPLICATE_PREPARED_STATEMENT", ERRCODE_DUPLICATE_PSTATEMENT },
{ "DUPLICATE_SCHEMA", ERRCODE_DUPLICATE_SCHEMA },
{ "DUPLICATE_TABLE", ERRCODE_DUPLICATE_TABLE },
{ "DUPLICATE_ALIAS", ERRCODE_DUPLICATE_ALIAS },
{ "DUPLICATE_OBJECT", ERRCODE_DUPLICATE_OBJECT },
{ "AMBIGUOUS_COLUMN", ERRCODE_AMBIGUOUS_COLUMN },
{ "AMBIGUOUS_FUNCTION", ERRCODE_AMBIGUOUS_FUNCTION },
{ "AMBIGUOUS_PARAMETER", ERRCODE_AMBIGUOUS_PARAMETER },
{ "AMBIGUOUS_ALIAS", ERRCODE_AMBIGUOUS_ALIAS },
{ "INVALID_COLUMN_REFERENCE", ERRCODE_INVALID_COLUMN_REFERENCE },
{ "INVALID_COLUMN_DEFINITION", ERRCODE_INVALID_COLUMN_DEFINITION },
{ "INVALID_CURSOR_DEFINITION", ERRCODE_INVALID_CURSOR_DEFINITION },
{ "INVALID_DATABASE_DEFINITION", ERRCODE_INVALID_DATABASE_DEFINITION },
{ "INVALID_FUNCTION_DEFINITION", ERRCODE_INVALID_FUNCTION_DEFINITION },
{ "INVALID_PREPARED_STATEMENT_DEFINITION", ERRCODE_INVALID_PSTATEMENT_DEFINITION },
{ "INVALID_SCHEMA_DEFINITION", ERRCODE_INVALID_SCHEMA_DEFINITION },
{ "INVALID_TABLE_DEFINITION", ERRCODE_INVALID_TABLE_DEFINITION },
{ "INVALID_OBJECT_DEFINITION", ERRCODE_INVALID_OBJECT_DEFINITION },
{ "WITH_CHECK_OPTION_VIOLATION", ERRCODE_WITH_CHECK_OPTION_VIOLATION },
{ "INSUFFICIENT_RESOURCES", ERRCODE_INSUFFICIENT_RESOURCES },
{ "DISK_FULL", ERRCODE_DISK_FULL },
{ "OUT_OF_MEMORY", ERRCODE_OUT_OF_MEMORY },
{ "TOO_MANY_CONNECTIONS", ERRCODE_TOO_MANY_CONNECTIONS },
{ "PROGRAM_LIMIT_EXCEEDED", ERRCODE_PROGRAM_LIMIT_EXCEEDED },
{ "STATEMENT_TOO_COMPLEX", ERRCODE_STATEMENT_TOO_COMPLEX },
{ "TOO_MANY_COLUMNS", ERRCODE_TOO_MANY_COLUMNS },
{ "TOO_MANY_ARGUMENTS", ERRCODE_TOO_MANY_ARGUMENTS },
{ "OBJECT_NOT_IN_PREREQUISITE_STATE", ERRCODE_OBJECT_NOT_IN_PREREQUISITE_STATE },
{ "OBJECT_IN_USE", ERRCODE_OBJECT_IN_USE },
{ "CANT_CHANGE_RUNTIME_PARAM", ERRCODE_CANT_CHANGE_RUNTIME_PARAM },
{ "OPERATOR_INTERVENTION", ERRCODE_OPERATOR_INTERVENTION },
{ "QUERY_CANCELED", ERRCODE_QUERY_CANCELED },
{ "ADMIN_SHUTDOWN", ERRCODE_ADMIN_SHUTDOWN },
{ "CRASH_SHUTDOWN", ERRCODE_CRASH_SHUTDOWN },
{ "CANNOT_CONNECT_NOW", ERRCODE_CANNOT_CONNECT_NOW },
{ "IO_ERROR", ERRCODE_IO_ERROR },
{ "UNDEFINED_FILE", ERRCODE_UNDEFINED_FILE },
{ "DUPLICATE_FILE", ERRCODE_DUPLICATE_FILE },
{ "CONFIG_FILE_ERROR", ERRCODE_CONFIG_FILE_ERROR },
{ "LOCK_FILE_EXISTS", ERRCODE_LOCK_FILE_EXISTS },
{ "PLPGSQL_ERROR", ERRCODE_PLPGSQL_ERROR },
{ "RAISE_EXCEPTION", ERRCODE_RAISE_EXCEPTION },
{ "INTERNAL_ERROR", ERRCODE_INTERNAL_ERROR },
{ "DATA_CORRUPTED", ERRCODE_DATA_CORRUPTED },
{ "INDEX_CORRUPTED", ERRCODE_INDEX_CORRUPTED },
