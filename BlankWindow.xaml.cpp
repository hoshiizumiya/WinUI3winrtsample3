#include "pch.h"
#include "BlankWindow.xaml.h"
#if __has_include("BlankWindow.g.cpp")
#include "BlankWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI3App1C__::implementation
{
    int32_t BlankWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void BlankWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
