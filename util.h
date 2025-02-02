#pragma once

#include "cimgui_wrapper.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void GetIndexBufferLayout(size_t *entrySize);

extern void GetVertexBufferLayout(size_t *entrySize, size_t *posOffset, size_t *uvOffset, size_t *colOffset);

extern ImDrawList *DrawData_GetDrawListAt(ImDrawData *self, int idx);

extern ImDrawCmd *DrawList_GetDrawCmdAt(ImDrawList *self, int idx);

extern void DrawCmd_CallUserCallback(ImDrawList *list, ImDrawCmd *cmd);

extern void ImGuiIO_SetMouseButtonDown(ImGuiIO *self, int btnIndex, bool isDown);

extern ImVector_ImWchar *NewGlyphRange();
extern void DestroyGlyphRange(ImVector_ImWchar *range);
extern ImWchar *GlyphRange_GetData(ImVector_ImWchar *range);

extern int ImFontAtlas_GetFontCount(ImFontAtlas *self);

#ifdef __cplusplus
}
#endif
