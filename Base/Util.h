#pragma once

#define module(name) typedef struct _M_##name name; \
struct _M_##name

#define object(name) typedef struct _S_##name name; \
struct _S_##name

#define require(name) Require##name()