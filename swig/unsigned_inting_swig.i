/* -*- c++ -*- */

#define UNSIGNED_INTING_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "unsigned_inting_swig_doc.i"

%{
#include "unsigned_inting/try_to_use_unsigned_int.h"
%}


%include "unsigned_inting/try_to_use_unsigned_int.h"
GR_SWIG_BLOCK_MAGIC2(unsigned_inting, try_to_use_unsigned_int);
