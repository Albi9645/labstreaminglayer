/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.lslboost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_SEQUENCE_CLASS_VECTOR_10022005_0602)
#define FUSION_SEQUENCE_CLASS_VECTOR_10022005_0602

#include <lslboost/fusion/container/vector/limits.hpp>

#include <lslboost/fusion/container/vector/vector10.hpp>
#if (FUSION_MAX_VECTOR_SIZE > 10)
#include <lslboost/fusion/container/vector/vector20.hpp>
#endif
#if (FUSION_MAX_VECTOR_SIZE > 20)
#include <lslboost/fusion/container/vector/vector30.hpp>
#endif
#if (FUSION_MAX_VECTOR_SIZE > 30)
#include <lslboost/fusion/container/vector/vector40.hpp>
#endif
#if (FUSION_MAX_VECTOR_SIZE > 40)
#include <lslboost/fusion/container/vector/vector50.hpp>
#endif

#include <lslboost/fusion/container/vector/vector.hpp>
#include <lslboost/fusion/container/vector/vector_fwd.hpp>
#include <lslboost/fusion/container/vector/vector_iterator.hpp>
#include <lslboost/fusion/container/vector/convert.hpp>

#endif
