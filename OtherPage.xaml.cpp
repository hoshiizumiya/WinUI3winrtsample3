#include "pch.h"
#include "OtherPage.xaml.h"
#if __has_include("OtherPage.g.cpp")
#include "OtherPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI3App1C__::implementation
{
    int32_t OtherPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void OtherPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
