// C++ for the Windows Runtime v1.0.170301.3
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.RemoteDesktop.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::RemoteDesktop {

struct IInteractiveSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
