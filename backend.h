#pragma once

#include "cimgui_wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef int GLFWWindowFlags;
enum GLFWWindowFlags_ {
  GLFWWindowFlagsNone = 0,
  GLFWWindowFlagsNotResizable = 1 << 0,
  GLFWWindowFlagsMaximized = 1 << 1,
  GLFWWindowFlagsFloating = 1 << 2,
  GLFWWindowFlagsFrameless = 1 << 3,
  GLFWWindowFlagsTransparent = 1 << 4,
};

typedef struct GLFWwindow GLFWwindow;
typedef struct GLFWmonitor GLFWmonitor;
struct GLFWwindow;
struct GLFWmonitor;

typedef void (*VoidCallback)();

extern void igSetTargetFPS(unsigned int fps);
extern GLFWwindow *igCreateGLFWWindow(const char *title, int width, int height, GLFWWindowFlags flags);
extern void igRunLoop(GLFWwindow *window, VoidCallback loop, VoidCallback beforeRender, VoidCallback afterRender);
extern void igGLFWWindow_GetDisplaySize(GLFWwindow *window, int *width, int *height);
extern void igRefresh();
extern ImTextureID igCreateTexture(unsigned char *pixels, int width, int height);

#ifdef __cplusplus
}
#endif
