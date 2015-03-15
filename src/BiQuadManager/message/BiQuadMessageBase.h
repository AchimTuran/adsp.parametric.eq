#pragma once
/*
 *      Copyright (C) 2005-2014 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */



#include "../../template/configuration/templateConfiguration.h"

class CBiQuadMessageBase
{
  public:
    typedef enum
    {
      BiQuadMessage_UnknownError = -1000,
      BiQuadMessage_InvalidInput = -999,
      BiQuadMessage_UnsupportedMessageType = -998,
      BiQuadMessage_Success = 0,
      BiQuadMessage_Busy
    }BIQUAD_MESSAGE_RET;

    CBiQuadMessageBase();
    ~CBiQuadMessageBase();

    adspProcessingModeIDs get_ModeID();
    adspProcessingModeIDs set_ModeID(adspProcessingModeIDs ModeID);

    AE_DSP_CHANNEL get_AudioChannelID();
    AE_DSP_CHANNEL set_AudioChannelID(AE_DSP_CHANNEL ChannelID);

  private:
    adspProcessingModeIDs m_ModeID;
    AE_DSP_CHANNEL        m_ChannelID;
};
