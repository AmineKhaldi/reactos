/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_SQL_E_REACTOSSYNC_GCC_DLL_WIN32_MSI_SQL_TAB_H_INCLUDED
# define YY_SQL_E_REACTOSSYNC_GCC_DLL_WIN32_MSI_SQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sql_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_ALTER = 258,
    TK_AND = 259,
    TK_BY = 260,
    TK_CHAR = 261,
    TK_COMMA = 262,
    TK_CREATE = 263,
    TK_DELETE = 264,
    TK_DROP = 265,
    TK_DISTINCT = 266,
    TK_DOT = 267,
    TK_EQ = 268,
    TK_FREE = 269,
    TK_FROM = 270,
    TK_GE = 271,
    TK_GT = 272,
    TK_HOLD = 273,
    TK_ADD = 274,
    TK_ID = 275,
    TK_ILLEGAL = 276,
    TK_INSERT = 277,
    TK_INT = 278,
    TK_INTEGER = 279,
    TK_INTO = 280,
    TK_IS = 281,
    TK_KEY = 282,
    TK_LE = 283,
    TK_LONG = 284,
    TK_LONGCHAR = 285,
    TK_LP = 286,
    TK_LT = 287,
    TK_LOCALIZABLE = 288,
    TK_MINUS = 289,
    TK_NE = 290,
    TK_NOT = 291,
    TK_NULL = 292,
    TK_OBJECT = 293,
    TK_OR = 294,
    TK_ORDER = 295,
    TK_PRIMARY = 296,
    TK_RP = 297,
    TK_SELECT = 298,
    TK_SET = 299,
    TK_SHORT = 300,
    TK_SPACE = 301,
    TK_STAR = 302,
    TK_STRING = 303,
    TK_TABLE = 304,
    TK_TEMPORARY = 305,
    TK_UPDATE = 306,
    TK_VALUES = 307,
    TK_WHERE = 308,
    TK_WILDCARD = 309,
    END_OF_FILE = 310,
    ILLEGAL = 311,
    SPACE = 312,
    UNCLOSED_STRING = 313,
    COMMENT = 314,
    FUNCTION = 315,
    COLUMN = 316,
    TK_LIKE = 318,
    TK_NEGATION = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "sql.y"

    struct sql_str str;
    LPWSTR string;
    column_info *column_list;
    MSIVIEW *query;
    struct expr *expr;
    USHORT column_type;
    int integer;

#line 131 "sql.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sql_parse (SQL_input *info);

#endif /* !YY_SQL_E_REACTOSSYNC_GCC_DLL_WIN32_MSI_SQL_TAB_H_INCLUDED  */
