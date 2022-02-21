/* Memory management
 * Created by Evan Nemerson <evan@nemerson.com>
 *
 *   To the extent possible under law, the authors have waived all
 *   copyright and related or neighboring rights to this code.  For
 *   details, see the Creative Commons Zero 1.0 Universal license at
 *   <https://creativecommons.org/publicdomain/zero/1.0/>
 *
 * SPDX-License-Identifier: CC0-1.0
 *
 **********************************************************************
 *
 * This is portability layer which should help iron out some
 * differences across various compilers, as well as various verisons of
 * C and C++.
 *
 * It was originally developed for SIMD Everywhere
 * (<https://github.com/simd-everywhere/simde>), but since its only
 * dependency is Hedley (<https://nemequ.github.io/hedley>, also CC0)
 * it can easily be used in other projects, so please feel free to do
 * so.
 *
 * If you do use this in your project, please keep a link to SIMDe in
 * your code to remind you where to report any bugs and/or check for
 * updated versions.
 *
 * # API Overview
 *
 * The API has several parts, and most macros have a few variations.
 * There are APIs for declaring aligned fields/variables, optimization
 * hints, and run-time alignment checks.
 *
 * Briefly, macros ending with "_TO" take numeric values and are great
 * when you know the value you would like to use.  Macros ending with
 * "_LIKE", on the other hand, accept a type and are used when you want
 * to use the alignment of a type instead of hardcoding a value.
 *
 * Documentation for each section of the API is inline.
 *
 * True to form, MSVC is the main problem and imposes several
 * limitations on the effectiveness of the APIs.  Detailed descriptions
 * of the limitations of each macro are inline, but in general:
 *
 *  * On C11+ or C++11+ code written using this API will work.  The
 *    ASSUME macros may or may not generate a hint to the compiler, but
 *    that is only an optimization issue and will not actually cause
 *    failures.
 *  * If you're using pretty much any compiler other than MSVC,
 *    everything should basically work as well as in C11/C++11.
 */

#if !defined(SIMDE_MM_H)
#define SIMDE_MM_H

#include "hedley.h"


#endif /* !defined(SIMDE_MM_H) */
