#pragma once
#ifdef _MSC_VER
# define NOMINMAX
// HACK: prevent Jack headers to redefine stdint types on windows causing build to fail
# include <stdint.h>
# ifndef _STDINT_H
#  define _STDINT_H
# endif
#endif

#include <jack/jack.h>
#include <boost/optional.hpp>
#include <cstddef>
#include <string>
#include <vector>
#include <algorithm>

namespace olo {

using std::string;
using std::size_t;
using std::vector;
using Sample = jack_default_audio_sample_t;
using boost::optional;

const size_t BUFFER_SIZE_DEFAULT = 65536 / 8;
const string JACK_CLIENT_NAME = "arrow1";
const string VERSION = "2.0";
const string NULL_OUTPUT = "null";
const string ABOUT = JACK_CLIENT_NAME + " v" + VERSION + ": Play and record multi-channel audio using jack\n"
        "Copyright (C) 2020  Christopher Brown <cbrown1@pitt.edu>\n"
		"Distributed under the terms of the GNU GPL, v3 or later\n";

class Reader;
class Writer;
class JackClient;

}
