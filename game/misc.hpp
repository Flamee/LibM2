/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_MISC_HPP
#define __LIBM2_GAME_MISC_HPP
namespace libm2{
enum e_overtime {OT_NONE, OT_3HOUR, OT_5HOUR};
enum eFileUpdatedOptions {
    e_FileUpdate_None = -1,
    e_FileUpdate_Error,
    e_FileUpdate_Deleted,
    e_FileUpdate_Modified,
    e_FileUpdate_AttrModified,
    e_FileUpdate_Linked,
    e_FileUpdate_Renamed,
    e_FileUpdate_Revoked
};
int get_global_time();
const char* locale_find(const char*);
}
#endif // __LIBM2_GAME_MISC_HPP
