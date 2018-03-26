#ifndef LUASOCKET_H
#define LUASOCKET_H
/*=========================================================================*\
* LuaSocket toolkit
* Networking support for the Lua language
* Diego Nehab
* 9/11/1999
\*=========================================================================*/
#include "lua.h"

/*-------------------------------------------------------------------------*\
* Current socket library version
\*-------------------------------------------------------------------------*/
#define LUASOCKET_VERSION    "LuaSocket 2.0.3"
#define LUASOCKET_COPYRIGHT  "Copyright (C) 1999-2009 Diego Nehab"
#define LUASOCKET_AUTHORS    "Diego Nehab"

/*-------------------------------------------------------------------------*\
* This macro prefixes all exported API functions
\*-------------------------------------------------------------------------*/
#ifndef LUASOCKET_API
#define LUASOCKET_API extern
#endif

/*-------------------------------------------------------------------------*\
* Initializes the library.
\*-------------------------------------------------------------------------*/
LUASOCKET_API int luaopen_socket_core(lua_State *L);

#endif /* LUASOCKET_H */