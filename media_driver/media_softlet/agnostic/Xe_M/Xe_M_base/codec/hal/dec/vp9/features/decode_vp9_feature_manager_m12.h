/*
* Copyright (c) 2022, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/

//!
//! \file     decode_vp9_feature_manager_m12.h
//! \brief    Defines the common interface for vp9 decode feature manager
//! \details  The vp9 decode feature manager is further sub-divided by codec type
//!           this file is for the base interface which is shared by all components.
//!

#ifndef __DECODE_VP9_FEATURE_MANAGER_M12_H__
#define __DECODE_VP9_FEATURE_MANAGER_M12_H__
#include <vector>
#include "decode_allocator.h"
#include "decode_feature_manager.h"
#include "codechal_hw.h"
//#include "decode_vp9_tile_coding.h"

namespace decode
{
    class DecodeVp9FeatureManagerM12 : public DecodeFeatureManager
    {
    public:
        //!
        //! \brief  DecodeVp9FeatureManager constructor
        //! \param  [in] allocator
        //!         Pointer to DecodeAllocator
        //! \param  [in] hwInterface
        //!         Pointer to CodechalHwInterface
        //! \param  [in] trackedBuf
        //!         Pointer to TrackedBuffer
        //! \param  [in] recycleBuf
        //!         Pointer to RecycleResource
        //!
        DecodeVp9FeatureManagerM12(DecodeAllocator *allocator, CodechalHwInterface *hwInterface)
            : DecodeFeatureManager(allocator, hwInterface)
        {}

        //!
        //! \brief  DecodeVp9FeatureManager deconstructor
        //!
        virtual ~DecodeVp9FeatureManagerM12() {}

    protected:

        ////!
        ////! \brief  Create feature const settings
        ////! \return MOS_STATUS
        ////!         MOS_STATUS_SUCCESS if success, else fail reason
        ////!
        //virtual MOS_STATUS CreateConstSettigs();

        //!
        //! \brief  Create features
        //! \param  [in] constsettings
        //!         feature const settings
        //! \return MOS_STATUS
        //!         MOS_STATUS_SUCCESS if success, else fail reason
        //!
        virtual MOS_STATUS CreateFeatures(void *constSettings);

    MEDIA_CLASS_DEFINE_END(decode__DecodeVp9FeatureManagerM12)
    };

}
#endif // !__DECODE_VP9_FEATURE_MANAGER_H__
