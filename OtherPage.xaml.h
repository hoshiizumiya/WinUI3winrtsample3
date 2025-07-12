#pragma once

#include "OtherPage.g.h"

namespace winrt::WinUI3App1C__::implementation
{
    struct OtherPage : OtherPageT<OtherPage>
    {
        OtherPage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::WinUI3App1C__::factory_implementation
{
    struct OtherPage : OtherPageT<OtherPage, implementation::OtherPage>
    {
    };
}
