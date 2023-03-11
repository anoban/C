#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_MEAN
#include <Windows.h>

// Global variables
HWND hwWindow;      // A handle to a window.
HGDIOBJ hgoGdiObject;       // A handle to a GDI object.
HFONT hfFont;       // A handle to a font.
INT32 x = 0, y = 0;
CHAR szTime[50] = { 0 };

// Prototypes.
// WPARAM, LPARAM -> message parameters. 
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
VOID OnCreate(HWND hwWindow, WPARAM wpParam, LPARAM lpParam);
VOID OnPaint(HWND hwWindow, WPARAM wpParam, LPARAM lpParam);
VOID OnDestroy(HWND hwWindow, WPARAM wpParam, LPARAM lpParam);
VOID OnTimer(HWND hwWindow, WPARAM wpParam, LPARAM lpParam);




INT APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPerviousInstance, LPSTR pszConsoleArgs, INT iShowConsole) {

    /*
    Contains window class information.
    It is used with the RegisterClassEx and GetClassInfoEx  functions.
    The WNDCLASSEX structure is similar to the WNDCLASS structure.
    There are two differences. WNDCLASSEX includes the cbSize member, which specifies the size of the structure,
    and the hIconSm member, which contains a handle to a small icon associated with the window class.
    */

    WNDCLASSEX wndWindowClass = {
        .cbSize = sizeof(WNDCLASSEX),
        .style = CS_HREDRAW | CS_VREDRAW,
        .lpfnWndProc = WndProc,
        .cbClsExtra = 0,
        .cbWndExtra = 0,
        .hInstance = hInstance,
        .hIcon = NULL,
        .hCursor = LoadCursor(NULL, IDC_ARROW),
        .hbrBackground = NULL,
        .lpszMenuName = NULL,
        .lpszClassName = L"Clock",
        .hIconSm = NULL
    };



}