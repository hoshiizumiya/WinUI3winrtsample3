#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WinUI3App1C__::implementation
{
	MainWindow::MainWindow()
	{
		InitializeComponent();
		//Loaded({ [this](auto&&,auto&&) {auto xamlRoot = this->Content().XamlRoot(); }
		//	   });
		sourceList().ItemsSource(sourceArray);//直接使用代码绑定，访问修改 xaml 界面中的元素，简单直接，无需额外的 IDL 定义和属性访问器
	}
	winrt::Windows::Foundation::Collections::IObservableVector<hstring> MainWindow::collection()
	{
		return boundArray;
	}

	//    myButton().Content(box_value(L"Clicked"));

	void winrt::WinUI3App1C__::implementation::MainWindow::addManualListButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
	{
		manualIndex++;
		manualList().Items().Append(box_value(hstring{ L"Item" + to_hstring(manualIndex) }));

		if (manualList().SelectedItem() == nullptr)
		{
			manualList().SelectedIndex(0);
		}
	}


}

//vs 自动添加 xaml 绑定在这里声明，此处我们不再向上移动到命名空间中添加工作量
void winrt::WinUI3App1C__::implementation::MainWindow::addSourceItemButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
	sourceIndex++;
	sourceArray.Append(hstring{ L"sourceItem" + to_hstring(sourceIndex) });
	if (sourceList().SelectedItem() == nullptr)
	{
		sourceList().SelectedIndex(0);
	}

}

void winrt::WinUI3App1C__::implementation::MainWindow::addBoundListButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
	boundIndex++;
	boundArray.Append(hstring{ L"sourceItem" + to_hstring(boundIndex) });
	if (boundList().SelectedItem() == nullptr)
	{
		boundList().SelectedIndex(0);
	}
}