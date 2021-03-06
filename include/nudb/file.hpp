//
// Copyright (c) 2015-2016 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef NUDB_FILE_HPP
#define NUDB_FILE_HPP

#include <nudb/posix_file.hpp>
#include <nudb/win32_file.hpp>
#include <string>

namespace nudb {

using native_file =
#ifdef _MSC_VER
    win32_file;
#else
    posix_file;
#endif

} // nudb

#endif
