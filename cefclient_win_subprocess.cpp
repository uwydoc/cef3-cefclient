/**
 * @file cefclient_win_subprocess.cpp
 *
 * @breif Sub-process entry-point.
 */
#include "cefclient/cefclient.h"
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
#include <direct.h>
#include <sstream>
#include <string>
#include "include/cef_app.h"
#include "include/cef_browser.h"
#include "include/cef_frame.h"
#include "include/cef_runnable.h"
#include "include/cef_sandbox_win.h"
#include "cefclient/cefclient_osr_widget_win.h"
#include "cefclient/client_handler.h"
#include "cefclient/client_switches.h"
#include "cefclient/resource.h"
#include "cefclient/scheme_test.h"
#include "cefclient/string_util.h"

int main(int argc, char* argv[])
{
    CefMainArgs args(GetModuleHandle(0));
    CefRefPtr<CefApp> app(new ClientApp);
    return CefExecuteProcess(args, app.get(), 0);
}
