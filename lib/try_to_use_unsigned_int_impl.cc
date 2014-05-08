/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "try_to_use_unsigned_int_impl.h"

namespace gr {
  namespace unsigned_inting {

    try_to_use_unsigned_int::sptr
    try_to_use_unsigned_int::make(unsigned int a, unsigned int b)
    {
      return gnuradio::get_initial_sptr
        (new try_to_use_unsigned_int_impl(a, b));
    }

    /*
     * The private constructor
     */
    try_to_use_unsigned_int_impl::try_to_use_unsigned_int_impl(unsigned int a, unsigned int b)
      : gr::sync_block("try_to_use_unsigned_int",
              gr::io_signature::make(0, 0, sizeof(float)),
              gr::io_signature::make(0, 0, sizeof(float)))
    {}

    /*
     * Our virtual destructor.
     */
    try_to_use_unsigned_int_impl::~try_to_use_unsigned_int_impl()
    {
    }

    int
    try_to_use_unsigned_int_impl::work(int noutput_items,
			  gr_vector_const_void_star &input_items,
			  gr_vector_void_star &output_items)
    {
        return noutput_items;
    }

  } /* namespace unsigned_inting */
} /* namespace gr */

