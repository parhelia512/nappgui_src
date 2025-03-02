/*
 * NAppGUI Cross-platform C SDK
 * 2015-2025 Francisco Garcia Collado
 * MIT Licence
 * https://nappgui.com/en/legal/license.html
 *
 * File: dctx.inl
 *
 */

/* Draw context */

#include "draw2d.hxx"

__EXTERN_C

void _dctx_init(DCtx *ctx);

void _dctx_transform(DCtx *ctx, const T2Df *t2d, const bool_t cartesian);

__END_C
