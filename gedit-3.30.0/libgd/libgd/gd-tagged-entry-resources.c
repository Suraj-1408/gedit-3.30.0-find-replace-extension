#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.gd_tagged_entry"), aligned (sizeof(void *) > 8 ? sizeof(void *) : 8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1022]; const double alignment; void * const ptr;}  gd_tagged_entry_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\310\000\000\000\000\000\000\050\006\000\000\000"
  "\000\000\000\000\000\000\000\000\003\000\000\000\005\000\000\000"
  "\005\000\000\000\005\000\000\000\113\120\220\013\003\000\000\000"
  "\310\000\000\000\004\000\114\000\314\000\000\000\320\000\000\000"
  "\373\036\260\245\002\000\000\000\320\000\000\000\015\000\114\000"
  "\340\000\000\000\344\000\000\000\341\154\054\214\004\000\000\000"
  "\344\000\000\000\006\000\114\000\354\000\000\000\360\000\000\000"
  "\324\265\002\000\377\377\377\377\360\000\000\000\001\000\114\000"
  "\364\000\000\000\370\000\000\000\260\267\044\060\000\000\000\000"
  "\370\000\000\000\006\000\114\000\000\001\000\000\004\001\000\000"
  "\227\233\277\014\001\000\000\000\004\001\000\000\013\000\166\000"
  "\020\001\000\000\375\003\000\000\157\162\147\057\004\000\000\000"
  "\164\141\147\147\145\144\055\145\156\164\162\171\057\000\000\000"
  "\005\000\000\000\154\151\142\147\144\057\000\000\001\000\000\000"
  "\057\000\000\000\000\000\000\000\147\156\157\155\145\057\000\000"
  "\002\000\000\000\144\145\146\141\165\154\164\056\143\163\163\000"
  "\335\002\000\000\000\000\000\000\100\144\145\146\151\156\145\055"
  "\143\157\154\157\162\040\145\156\164\162\171\137\164\141\147\137"
  "\142\147\040\043\063\064\066\065\141\064\073\012\100\144\145\146"
  "\151\156\145\055\143\157\154\157\162\040\145\156\164\162\171\137"
  "\164\141\147\137\146\147\040\043\146\146\146\146\146\146\073\012"
  "\012\056\144\157\143\165\155\145\156\164\163\055\145\156\164\162"
  "\171\055\164\141\147\040\173\012\040\040\040\040\142\141\143\153"
  "\147\162\157\165\156\144\055\151\155\141\147\145\072\040\156\157"
  "\156\145\073\012\040\040\040\040\142\141\143\153\147\162\157\165"
  "\156\144\055\143\157\154\157\162\072\040\100\145\156\164\162\171"
  "\137\164\141\147\137\142\147\073\012\040\040\040\040\143\157\154"
  "\157\162\072\040\100\145\156\164\162\171\137\164\141\147\137\146"
  "\147\073\012\012\040\040\040\040\142\157\162\144\145\162\055\162"
  "\141\144\151\165\163\072\040\064\160\170\073\012\040\040\040\040"
  "\142\157\162\144\145\162\055\167\151\144\164\150\072\040\060\073"
  "\012\012\040\040\040\040\155\141\162\147\151\156\072\040\062\160"
  "\170\073\012\040\040\040\040\160\141\144\144\151\156\147\072\040"
  "\064\160\170\073\012\175\012\012\056\144\157\143\165\155\145\156"
  "\164\163\055\145\156\164\162\171\055\164\141\147\072\150\157\166"
  "\145\162\040\173\012\040\040\040\040\142\141\143\153\147\162\157"
  "\165\156\144\055\143\157\154\157\162\072\040\163\150\141\144\145"
  "\050\100\145\156\164\162\171\137\164\141\147\137\142\147\054\040"
  "\061\056\061\060\051\073\012\040\040\040\040\143\157\154\157\162"
  "\072\040\100\145\156\164\162\171\137\164\141\147\137\146\147\073"
  "\012\175\012\012\056\144\157\143\165\155\145\156\164\163\055\145"
  "\156\164\162\171\055\164\141\147\056\142\165\164\164\157\156\054"
  "\012\056\144\157\143\165\155\145\156\164\163\055\145\156\164\162"
  "\171\055\164\141\147\056\142\165\164\164\157\156\072\150\157\166"
  "\145\162\054\012\056\144\157\143\165\155\145\156\164\163\055\145"
  "\156\164\162\171\055\164\141\147\056\142\165\164\164\157\156\072"
  "\141\143\164\151\166\145\054\012\056\144\157\143\165\155\145\156"
  "\164\163\055\145\156\164\162\171\055\164\141\147\056\142\165\164"
  "\164\157\156\072\141\143\164\151\166\145\072\150\157\166\145\162"
  "\040\173\012\040\040\040\040\142\141\143\153\147\162\157\165\156"
  "\144\055\143\157\154\157\162\072\040\164\162\141\156\163\160\141"
  "\162\145\156\164\073\012\040\040\040\040\142\141\143\153\147\162"
  "\157\165\156\144\055\151\155\141\147\145\072\040\156\157\156\145"
  "\073\012\040\040\040\040\142\157\170\055\163\150\141\144\157\167"
  "\072\040\156\157\156\145\073\012\040\040\040\040\142\157\162\144"
  "\145\162\055\151\155\141\147\145\072\040\156\157\156\145\073\012"
  "\040\040\040\040\142\157\162\144\145\162\055\167\151\144\164\150"
  "\072\040\060\073\012\175\012\012\056\144\157\143\165\155\145\156"
  "\164\163\055\145\156\164\162\171\055\164\141\147\056\142\165\164"
  "\164\157\156\072\150\157\166\145\162\040\173\012\040\040\040\040"
  "\143\157\154\157\162\072\040\163\150\141\144\145\050\100\145\156"
  "\164\162\171\137\164\141\147\137\142\147\054\040\062\056\061\060"
  "\051\073\012\175\012\000\000\050\165\165\141\171\051" };

static GStaticResource static_resource = { gd_tagged_entry_resource_data.data, sizeof (gd_tagged_entry_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *gd_tagged_entry_get_resource (void);
GResource *gd_tagged_entry_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER)

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(gd_tagged_entryresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(gd_tagged_entryresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(gd_tagged_entryresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(gd_tagged_entryresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void gd_tagged_entryresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void gd_tagged_entryresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
