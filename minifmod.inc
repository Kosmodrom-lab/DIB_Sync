'  ===========================================================================
'   minifmod.h
'  ---------------------------------------------------------------------------
'   MiniFMOD public source code release.
'   This source is provided as-is.  Firelight Multimedia will not support
'   or answer questions about the source provided.
'   MiniFMOD Sourcecode is copyright (c) 2000, Firelight Multimedia.
'   MiniFMOD Sourcecode is in no way representative of FMOD 3 source.
'   Firelight Multimedia is a registered business name.
'   This source must not be redistributed without this notice.
'  ===========================================================================

'  ===========================================================================
'   MiniFMOD Main header file. Copyright (c), FireLight Multimedia 2000.
'   Based on FMOD, copyright (c), FireLight Multimedia 2000.
'  ===========================================================================

'  ===========================================================================
'  = DEFINITIONS                                                             =
'  ===========================================================================



$USE "minifmod.lib"
'DECLARE SampleLoadCallBack(buff as UINT, lenbytes as int, numbits as int, instno as int, sampno as int)
GLOBAL sampleloadcallback

'  ===========================================================================
'  = FUNCTION PROTOTYPES                                                     =
'  ===========================================================================

'  Initialization / Global functions.
'  ==================================

'  this must be called before FSOUND_Init!
DECLARE CDECL Extern FSOUND_File_SetCallbacks ALIAS _FSOUND_File_SetCallbacks(pOpenCallback:UINT, pCloseCallback:UINT, pReadCallback:UINT, pSeekCallback:UINT, pTellCallback:UINT)
'DECLARE Extern FSOUND_Init ALIAS _FSOUND_Init(mixrate:int, vcmmode:int),int

'DECLARE Extern FSOUND_Close ALIAS _FSOUND_Close()

'  ===========================================================================
'  = FMUSIC API                                                              =
'  ===========================================================================

'  Song management / playback functions.
'  =====================================

DECLARE CDECL Extern FMUSIC_LoadSong ALIAS _FMUSIC_LoadSong(pdata:POINTER, psampleloadcallback:UINT),UINT
DECLARE CDECL Extern FMUSIC_FreeSong ALIAS _FMUSIC_FreeSong(mod:UINT),INT
DECLARE CDECL Extern FMUSIC_PlaySong ALIAS _FMUSIC_PlaySong(mod:UINT),INT
DECLARE CDECL Extern FMUSIC_StopSong ALIAS _FMUSIC_StopSong(mod:UINT),INT

'  Runtime song information
'  ========================

DECLARE CDECL Extern FMUSIC_GetOrder ALIAS _FMUSIC_GetOrder(mod:UINT),INT
DECLARE CDECL Extern FMUSIC_GetRow ALIAS _FMUSIC_GetRow(mod:UINT),INT
DECLARE CDECL Extern FMUSIC_GetTime ALIAS _FMUSIC_GetTime(mod:UINT),UINT

