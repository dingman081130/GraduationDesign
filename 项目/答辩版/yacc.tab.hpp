
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 258,
     DOT = 259,
     LP = 260,
     RP = 261,
     OBJECTV = 262,
     POINTV = 263,
     NUM = 264,
     UNIT = 265,
     IS = 266,
     PASS = 267,
     AS = 268,
     DRAW = 269,
     AUXILIARY = 270,
     UP = 271,
     OUT = 272,
     IN = 273,
     AND = 274,
     AT = 275,
     TO = 276,
     POINT = 277,
     MIDPOINT = 278,
     ENDPOINT = 279,
     INTERSECTPOINT = 280,
     TANGENTPOINT = 281,
     INCENTER = 282,
     OUTCENTER = 283,
     GCENTER = 284,
     VCENTER = 285,
     CCENTER = 286,
     ACENTER = 287,
     SEGMENT = 288,
     LINE = 289,
     RAY = 290,
     HEIGHTLINE = 291,
     MIDLINE = 292,
     TANGENTLINE = 293,
     COMMONTANGENTLINE = 294,
     INNERTANGENTLINE = 295,
     OUTERTANGENTLINE = 296,
     RADIUS = 297,
     DIAMETER = 298,
     EXTENDLINE = 299,
     REEXTENDLINE = 300,
     DIAGONAL = 301,
     EDIVISIONLINE = 302,
     PBLINE = 303,
     VERTICALINE = 304,
     PARALLELINE = 305,
     TRIANGLE = 306,
     ISOTRIANGLE = 307,
     EQUTRIANGLE = 308,
     RIGHTTRIANGLE = 309,
     OBTTRIANGLE = 310,
     ACUTRIANGLE = 311,
     INTOUCHTRIANGLE = 312,
     OUTANGENTRIANGLE = 313,
     RIGHTDTRIANGLE = 314,
     RIGHTANGLE = 315,
     ACUTEANGLE = 316,
     OBTUSEANGLE = 317,
     ANGLE = 318,
     QUADRANGLE = 319,
     PARALELLQUADRANGLE = 320,
     RECTANGLE = 321,
     SQUARE = 322,
     DIAMOND = 323,
     LADDER = 324,
     ISOLADDER = 325,
     RIGHTLADDER = 326,
     CIRCLE = 327,
     INTANGENTCIRCLE = 328,
     OUTOUCHCIRCLE = 329,
     ARC = 330,
     EQUAL = 331,
     SMALLER = 332,
     GREATER = 333,
     PLUS = 334,
     MINUS = 335,
     MULTI = 336,
     DIVIDE = 337,
     POWER = 338,
     MOD = 339,
     INTERSECT = 340,
     PERPEND = 341,
     PARALLEL = 342,
     TANGENT = 343,
     EDIVISION = 344,
     LINK = 345,
     PROLONG = 346,
     REPROLONG = 347,
     PEBI = 348,
     INTOUCH = 349,
     INTANGENT = 350,
     OUTOUCH = 351,
     OUTANGENT = 352,
     SAMECENTER = 353,
     POLYGON = 354
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


