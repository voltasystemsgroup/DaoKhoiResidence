#ifndef __S2_ESCIENT_FIREBALL_TEXT_PROCESSOR_V5_0_2_H__
#define __S2_ESCIENT_FIREBALL_TEXT_PROCESSOR_V5_0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TITLESEARCH_DIG_INPUT 0
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ERRORCONTINUE_DIG_INPUT 1
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTMUSICGENRE_DIG_INPUT 2
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMUSICGENRE_DIG_INPUT 3
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMUSICGENRE_DIG_INPUT 4
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTMUSICGENRE_DIG_INPUT 5
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTMUSICTITLE_DIG_INPUT 6
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMUSICTITLE_DIG_INPUT 7
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMUSICTITLE_DIG_INPUT 8
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTMUSICTITLE_DIG_INPUT 9
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTMUSICTRACK_DIG_INPUT 10
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMUSICTRACK_DIG_INPUT 11
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMUSICTRACK_DIG_INPUT 12
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTMUSICTRACK_DIG_INPUT 13
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SYNCMUSICINFO_DIG_INPUT 14
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTRADIOGENRE_DIG_INPUT 15
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVRADIOGENRE_DIG_INPUT 16
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTRADIOGENRE_DIG_INPUT 17
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTRADIOGENRE_DIG_INPUT 18
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTRADIOTITLE_DIG_INPUT 19
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVRADIOTITLE_DIG_INPUT 20
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTRADIOTITLE_DIG_INPUT 21
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTRADIOTITLE_DIG_INPUT 22
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTMOVIEGENRE_DIG_INPUT 23
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMOVIEGENRE_DIG_INPUT 24
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMOVIEGENRE_DIG_INPUT 25
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTMOVIEGENRE_DIG_INPUT 26
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_FIRSTMOVIETITLE_DIG_INPUT 27
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMOVIETITLE_DIG_INPUT 28
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMOVIETITLE_DIG_INPUT 29
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTMOVIETITLE_DIG_INPUT 30
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PREVMOVIEDECRIPTION_DIG_INPUT 31
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NEXTMOVIEDESCRIPTION_DIG_INPUT 32
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SYNCMOVIEINFO_DIG_INPUT 33
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIESELECTOR_DIG_INPUT 34
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_EXIT_DIG_INPUT 35
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TOUCHUP_DIG_INPUT 36
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHSUBOFF_DIG_INPUT 37


/*
* ANALOG_INPUT
*/
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_GENRESPERSCREENSELECTOR_ANALOG_INPUT 0
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TITLESPERSCREENSELECTOR_ANALOG_INPUT 1
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TRACKSPERSCREENSELECTOR_ANALOG_INPUT 2
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MAXDATALENGTHSELECTOR_ANALOG_INPUT 3
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIESOURCESELECTOR_ANALOG_INPUT 4
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ELAPSEDTIMESTATUSSELECTOR_ANALOG_INPUT 5
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SYNCTVUISELECTOR_ANALOG_INPUT 6
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SOURCESELECTOR_ANALOG_INPUT 7
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICGENRESELECTOR_ANALOG_INPUT 8
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTITLESELECTOR_ANALOG_INPUT 9
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTRACKSELECTOR_ANALOG_INPUT 10
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOGENRESELECTOR_ANALOG_INPUT 11
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOTITLESELECTOR_ANALOG_INPUT 12
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEGENRESELECTOR_ANALOG_INPUT 13
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIETITLESELECTOR_ANALOG_INPUT 14
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NAVIGATEX_ANALOG_INPUT 18
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_NAVIGATEY_ANALOG_INPUT 19

#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPLASTCOMMAND$_STRING_INPUT 16
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPLASTCOMMAND$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPLASTCOMMAND$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPLASTCOMMAND$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TITLESEARCH$_STRING_INPUT 17
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TITLESEARCH$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TITLESEARCH$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TITLESEARCH$_STRING_MAX_LEN );

#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ESCIENT_RX$_BUFFER_INPUT 15
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ESCIENT_RX$_BUFFER_MAX_LEN 20000
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __ESCIENT_RX$, __S2_Escient_FireBall_Text_Processor_v5_0_2_ESCIENT_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_POWERONFB_DIG_OUTPUT 0
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_POWEROFFFB_DIG_OUTPUT 1
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHFOUND_DIG_OUTPUT 2
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHFAILED_DIG_OUTPUT 3
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ERRORSUBON_DIG_OUTPUT 4
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIESOURCEENABLE_DIG_OUTPUT 5
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SYNCTVUIENABLE_DIG_OUTPUT 6
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHOFFMOVIES_DIG_OUTPUT 7
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHOFFMUSIC_DIG_OUTPUT 8
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHOFFRADIO_DIG_OUTPUT 9


/*
* ANALOG_OUTPUT
*/
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_PLAYSTATE_ANALOG_OUTPUT 0
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_DATABASECHANGED_ANALOG_OUTPUT 1
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SOURCE_ANALOG_OUTPUT 2
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEDESCRIPTIONPOINTER_ANALOG_OUTPUT 3

#define __S2_Escient_FireBall_Text_Processor_v5_0_2_ESCIENT_TX$_STRING_OUTPUT 4
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCH1$_STRING_OUTPUT 5

#define __S2_Escient_FireBall_Text_Processor_v5_0_2_STRINGOUT$_STRING_OUTPUT 6
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_STRINGOUT$_ARRAY_LENGTH 95

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENREOUT, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENREOUT, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENREOUT, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMUSICINFO, 5 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLES, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTRACKS, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTRADIOINFO, 4 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLES, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMOVIEINFO, 5 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLES, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEINFO, 7 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __TRACKSINTITLE, 10 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENREDATA, 4 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLESINGENRE, 255 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENREDATA, 4 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLESINGENRE, 255 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENREDATA, 4 );;
CREATE_INTARRAY1D( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLESINGENRE, 255 );;


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_INBUFFERSTRING$_STRING_MAX_LEN 20000
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __INBUFFERSTRING$, __S2_Escient_FireBall_Text_Processor_v5_0_2_INBUFFERSTRING$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_DATA1RX$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __DATA1RX$, __S2_Escient_FireBall_Text_Processor_v5_0_2_DATA1RX$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_DATA2RX$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __DATA2RX$, __S2_Escient_FireBall_Text_Processor_v5_0_2_DATA2RX$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPSTRING$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPSTRING$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPSTRINGLONG$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPSTRINGLONG$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPSTRINGLONG$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTCOMMAND$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __LASTCOMMAND$, __S2_Escient_FireBall_Text_Processor_v5_0_2_LASTCOMMAND$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHSTRING$_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SEARCHSTRING$, __S2_Escient_FireBall_Text_Processor_v5_0_2_SEARCHSTRING$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTRACKNUMBERINT$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTRACKNUMBERINT$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTRACKNUMBERINT$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTARTISTINT$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTARTISTINT$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTARTISTINT$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTITLEINT$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTITLEINT$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTITLEINT$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTRACKINT$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTRACKINT$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTTRACKINT$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTMUSICTITLE$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMUSICTITLE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTMUSICTITLE$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMUSICTITLE$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMUSICTITLE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMUSICTITLE$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTMOVIETITLE$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMOVIETITLE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_CURRENTMOVIETITLE$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIECAST$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIECAST$, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIECAST$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIECAST$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPMOVIECAST$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIECAST$_STRING_MAX_LEN );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TRACKCACHE$_ARRAY_NUM_ELEMS 255
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TRACKCACHE$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __TRACKCACHE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TRACKCACHE$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_TRACKCACHE$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICGENRECACHE$_ARRAY_NUM_ELEMS 255
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICGENRECACHE$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENRECACHE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICGENRECACHE$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICGENRECACHE$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTITLENAMES$_ARRAY_NUM_ELEMS 10
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTITLENAMES$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLENAMES$, __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTITLENAMES$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_MUSICTITLENAMES$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOGENRECACHE$_ARRAY_NUM_ELEMS 255
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOGENRECACHE$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENRECACHE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOGENRECACHE$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOGENRECACHE$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOTITLENAMES$_ARRAY_NUM_ELEMS 10
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOTITLENAMES$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLENAMES$, __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOTITLENAMES$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_RADIOTITLENAMES$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEGENRECACHE$_ARRAY_NUM_ELEMS 255
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEGENRECACHE$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENRECACHE$, __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEGENRECACHE$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIEGENRECACHE$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIETITLENAMES$_ARRAY_NUM_ELEMS 10
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIETITLENAMES$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLENAMES$, __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIETITLENAMES$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_MOVIETITLENAMES$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEINFO$_ARRAY_NUM_ELEMS 5
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEINFO$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIEINFO$, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEINFO$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEINFO$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEDESCRIPTION$_ARRAY_NUM_ELEMS 16
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEDESCRIPTION$_ARRAY_NUM_CHARS 240
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIEDESCRIPTION$, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEDESCRIPTION$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_SELECTEDMOVIEDESCRIPTION$_ARRAY_NUM_CHARS );
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIEINFO$_ARRAY_NUM_ELEMS 5
#define __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIEINFO$_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPMOVIEINFO$, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIEINFO$_ARRAY_NUM_ELEMS, __S2_Escient_FireBall_Text_Processor_v5_0_2_TEMPMOVIEINFO$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __STRINGOUT$ );
   unsigned short __NEWX;
   unsigned short __NEWY;
   unsigned short __GENRESPERSCREEN;
   unsigned short __TITLESPERSCREEN;
   unsigned short __TRACKSPERSCREEN;
   unsigned short __MAXDATALENGTH;
   unsigned short __MOVIESOURCE;
   unsigned short __ELAPSEDTIMESTATUS;
   unsigned short __SYNCTVUI;
   unsigned short __RXOK;
   unsigned short __COMMANDRX;
   unsigned short __SUBCOMMANDRX;
   unsigned short __NUMBEROFITEMSRX;
   unsigned short __RESENDLASTCOMMAND;
   unsigned short __DATA1LENGTHRX;
   unsigned short __DATA2LENGTHRX;
   unsigned short __LENGTHRX;
   unsigned short __GENRELENGTH;
   unsigned short __TITLELENGTH;
   unsigned short __TRACKLENGTH;
   unsigned short __POINTER;
   unsigned short __MARKER;
   unsigned short __I;
   unsigned short __J;
   unsigned short __MINUTES;
   unsigned short __SECONDS;
   unsigned short __MEDIATYPE;
   unsigned short __GUIDEVIEW;
   unsigned short __DATACHANGED;
   unsigned short __MUSICTITLEINFO;
   unsigned short __MUSICTRACKINFO;
   unsigned short __RADIOTITLEINFO;
   unsigned short __MOVIETITLEINFO;
   unsigned short __CURRENTMUSICGENRESCREEN;
   unsigned short __CURRENTRADIOGENRESCREEN;
   unsigned short __CURRENTMOVIEGENRESCREEN;
   unsigned short __TOTALMUSICTITLES;
   unsigned short __TOTALRADIOTITLES;
   unsigned short __TOTALMOVIETITLES;
   unsigned short __CURRENTMUSICTITLESCREEN;
   unsigned short __CURRENTRADIOTITLESCREEN;
   unsigned short __CURRENTMOVIETITLESCREEN;
   unsigned short __TOTALMUSICTITLESCREENS;
   unsigned short __TOTALRADIOTITLESCREENS;
   unsigned short __TOTALMOVIETITLESCREENS;
   unsigned short __CURRENTMUSICTITLEINDEX;
   unsigned short __CURRENTRADIOTITLEINDEX;
   unsigned short __CURRENTMOVIETITLEINDEX;
   unsigned short __CURRENTTRACKSCREEN;
   unsigned short __TOTALTRACKSCREENS;
   unsigned short __DBCHANGED;
   unsigned short __DATABASE;
   unsigned short __DBTYPE;
   unsigned short __PLAYLISTGENRE;
   unsigned short __TOTALTRACKS;
   unsigned short __TRACK;
   unsigned short __TITLESTOCLEAR;
   unsigned short __MUSICDBTYPE;
   unsigned short __MUSICGENRE;
   unsigned short __MUSICTITLE;
   unsigned short __SELECTEDMUSICDBTYPE;
   unsigned short __SELECTEDMUSICGENRE;
   unsigned short __SELECTEDMUSICTITLE;
   unsigned short __CURRENTMUSICDBTYPE;
   unsigned short __CURRENTMUSICGENRE;
   unsigned short __CURRENTMUSICTITLE;
   unsigned short __CURRENTMUSICUPDATE;
   unsigned short __MUSICTRACK;
   unsigned short __TOTALMUSICTRACKS;
   unsigned short __RADIODBTYPE;
   unsigned short __RADIOGENRE;
   unsigned short __RADIOTITLE;
   unsigned short __MOVIEDBTYPE;
   unsigned short __MOVIEGENRE;
   unsigned short __MOVIETITLE;
   unsigned short __SELECTEDMOVIEDBTYPE;
   unsigned short __SELECTEDMOVIEGENRE;
   unsigned short __SELECTEDMOVIETITLE;
   unsigned short __CURRENTMOVIEDBTYPE;
   unsigned short __CURRENTMOVIEGENRE;
   unsigned short __CURRENTMOVIETITLE;
   unsigned short __CURRENTMOVIEUPDATE;
   unsigned short __MDPOINTER;
   unsigned short __MDPOINTERLIMIT;
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENREOUT );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENREOUT );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENREOUT );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMUSICINFO );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLES );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTRACKS );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTRADIOINFO );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLES );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMOVIEINFO );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLES );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEINFO );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __TRACKSINTITLE );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENREDATA );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLESINGENRE );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENREDATA );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLESINGENRE );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENREDATA );
   DECLARE_INTARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLESINGENRE );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __INBUFFERSTRING$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __DATA1RX$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __DATA2RX$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPSTRINGLONG$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __LASTCOMMAND$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SEARCHSTRING$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTRACKNUMBERINT$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTARTISTINT$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTITLEINT$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTTRACKINT$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMUSICTITLE$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMUSICTITLE$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __CURRENTMOVIETITLE$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIECAST$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPMOVIECAST$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __TRACKCACHE$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICGENRECACHE$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MUSICTITLENAMES$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOGENRECACHE$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __RADIOTITLENAMES$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIEGENRECACHE$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __MOVIETITLENAMES$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIEINFO$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __SELECTEDMOVIEDESCRIPTION$ );
   DECLARE_STRING_ARRAY( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPMOVIEINFO$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TEMPLASTCOMMAND$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __TITLESEARCH$ );
   DECLARE_STRING_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2, __ESCIENT_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Escient_FireBall_Text_Processor_v5_0_2 )
{
};

DEFINE_WAITEVENT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_Escient_FireBall_Text_Processor_v5_0_2, __SPLS_TMPVAR__WAITLABEL_1__ );


#endif //__S2_ESCIENT_FIREBALL_TEXT_PROCESSOR_V5_0_2_H__

