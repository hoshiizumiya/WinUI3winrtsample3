﻿#pragma once

#include "UserMainPage.g.h"

namespace winrt::WinUI3App1C__::implementation
{
    struct UserMainPage : UserMainPageT<UserMainPage>
    {
    private:
        void openHomePage();
        void openOtherPage();
        void openSettingsPage();
    public:
        UserMainPage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }


        void Page_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);

        void NavigationView_ItemInvoked(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args);
    };
}

namespace winrt::WinUI3App1C__::factory_implementation
{
    struct UserMainPage : UserMainPageT<UserMainPage, implementation::UserMainPage>
    {
    };
}
