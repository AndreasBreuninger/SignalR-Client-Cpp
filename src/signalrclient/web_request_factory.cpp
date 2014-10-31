// Copyright (c) Microsoft Open Technologies, Inc. All rights reserved.
// Licensed under the Apache License, Version 2.0. See License.txt in the project root for license information.

#include "stdafx.h"
#include "signalrclient\web_request_factory.h"

namespace signalr
{
    std::unique_ptr<web_request> web_request_factory::create_web_request(const web::uri &url)
    {
        return std::make_unique<web_request>(url);
    }

    web_request_factory::~web_request_factory()
    {}
}
