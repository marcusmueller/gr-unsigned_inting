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


#ifndef INCLUDED_UNSIGNED_INTING_TRY_TO_USE_UNSIGNED_INT_H
#define INCLUDED_UNSIGNED_INTING_TRY_TO_USE_UNSIGNED_INT_H

#include <unsigned_inting/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace unsigned_inting {

    /*!
     * \brief <+description of block+>
     * \ingroup unsigned_inting
     *
     */
    class UNSIGNED_INTING_API try_to_use_unsigned_int : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<try_to_use_unsigned_int> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of unsigned_inting::try_to_use_unsigned_int.
       *
       * To avoid accidental use of raw pointers, unsigned_inting::try_to_use_unsigned_int's
       * constructor is in a private implementation
       * class. unsigned_inting::try_to_use_unsigned_int::make is the public interface for
       * creating new instances.
       */
      static sptr make(unsigned int a, unsigned int b);
    };

  } // namespace unsigned_inting
} // namespace gr

#endif /* INCLUDED_UNSIGNED_INTING_TRY_TO_USE_UNSIGNED_INT_H */

