#ifndef __S2_TSTAT_SCH_2_1_H__
#define __S2_TSTAT_SCH_2_1_H__



/*
* STRUCTURE S2_tstat_sch_2_1__SCHEDULE
*/
START_STRUCTURE_DEFINITION( S2_tstat_sch_2_1, SCHEDULE )
{
   unsigned short SCHEDULE__IMINUTE;
   CREATE_INTARRAY1D( S2_tstat_sch_2_1, SCHEDULE__ISETPOINT, 2 );;
   DECLARE_INTARRAY( S2_tstat_sch_2_1, SCHEDULE__ISETPOINT );
   short SCHEDULE__IHOUR;
};


/*
* Constructor and Destructor
*/
int S2_tstat_sch_2_1_SCHEDULE_Constructor ( START_STRUCTURE_DEFINITION( S2_tstat_sch_2_1, SCHEDULE ) * me, int nVerbose );
int S2_tstat_sch_2_1_SCHEDULE_Destructor ( START_STRUCTURE_DEFINITION( S2_tstat_sch_2_1, SCHEDULE ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_tstat_sch_2_1_WEEKDAY_WAKE_DIG_INPUT 0
#define __S2_tstat_sch_2_1_WEEKDAY_LEAVE_DIG_INPUT 1
#define __S2_tstat_sch_2_1_WEEKDAY_RETURN_DIG_INPUT 2
#define __S2_tstat_sch_2_1_WEEKDAY_SLEEP_DIG_INPUT 3
#define __S2_tstat_sch_2_1_WEEKEND_WAKE_DIG_INPUT 4
#define __S2_tstat_sch_2_1_WEEKEND_LEAVE_DIG_INPUT 5
#define __S2_tstat_sch_2_1_WEEKEND_RETURN_DIG_INPUT 6
#define __S2_tstat_sch_2_1_WEEKEND_SLEEP_DIG_INPUT 7
#define __S2_tstat_sch_2_1_AWAY_DIG_INPUT 8
#define __S2_tstat_sch_2_1_HOUR_UP_DIG_INPUT 9
#define __S2_tstat_sch_2_1_HOUR_DOWN_DIG_INPUT 10
#define __S2_tstat_sch_2_1_MINUTE_UP_DIG_INPUT 11
#define __S2_tstat_sch_2_1_MINUTE_DOWN_DIG_INPUT 12
#define __S2_tstat_sch_2_1_HEAT_SETPOINT_UP_DIG_INPUT 13
#define __S2_tstat_sch_2_1_HEAT_SETPOINT_DOWN_DIG_INPUT 14
#define __S2_tstat_sch_2_1_COOL_SETPOINT_UP_DIG_INPUT 15
#define __S2_tstat_sch_2_1_COOL_SETPOINT_DOWN_DIG_INPUT 16
#define __S2_tstat_sch_2_1_SLAB_SETPOINT_UP_DIG_INPUT 17
#define __S2_tstat_sch_2_1_SLAB_SETPOINT_DOWN_DIG_INPUT 18
#define __S2_tstat_sch_2_1_REMOVE_SCHEDULE_DIG_INPUT 19
#define __S2_tstat_sch_2_1_RESET_SCHEDULES_DIG_INPUT 20
#define __S2_tstat_sch_2_1_TEMP_SCALE_DIG_INPUT 21
#define __S2_tstat_sch_2_1_HALF_DEGREE_C_STEPS_DIG_INPUT 22
#define __S2_tstat_sch_2_1_RUN_PROGRAM_DIG_INPUT 23
#define __S2_tstat_sch_2_1_RUN_AWAY_DIG_INPUT 24
#define __S2_tstat_sch_2_1_RUN_HOLD_DIG_INPUT 25
#define __S2_tstat_sch_2_1_SINGLE_BUTTON_SELECT_DIG_INPUT 26
#define __S2_tstat_sch_2_1_SINGLE_BUTTON_ADJUST_DIG_INPUT 27
#define __S2_tstat_sch_2_1_USE_DEFAULT_SCHEDULE_TIMES_DIG_INPUT 28
#define __S2_tstat_sch_2_1_SUNDAY_NIGHT_IS_WEEKDAY_DIG_INPUT 29
#define __S2_tstat_sch_2_1_FRIDAY_NIGHT_IS_WEEKEND_DIG_INPUT 30
#define __S2_tstat_sch_2_1_AWAYDAY_INC_DIG_INPUT 31
#define __S2_tstat_sch_2_1_AWAYDAY_DEC_DIG_INPUT 32
#define __S2_tstat_sch_2_1_AWAYSCHED_INC_DIG_INPUT 33
#define __S2_tstat_sch_2_1_SLAB_SP_ENABLED_DIG_INPUT 34


/*
* ANALOG_INPUT
*/
#define __S2_tstat_sch_2_1_CURRENT_HEAT_SP_ANALOG_INPUT 0
#define __S2_tstat_sch_2_1_CURRENT_COOL_SP_ANALOG_INPUT 1
#define __S2_tstat_sch_2_1_CURRENT_SLAB_SP_ANALOG_INPUT 2
#define __S2_tstat_sch_2_1_INSTANCE_ID_ANALOG_INPUT 3
#define __S2_tstat_sch_2_1_SCHEDULEDHEATSETPOINT_ANALOG_INPUT 5
#define __S2_tstat_sch_2_1_SCHEDULEDCOOLSETPOINT_ANALOG_INPUT 6
#define __S2_tstat_sch_2_1_SCHEDULEDSLABSETPOINT_ANALOG_INPUT 7
#define __S2_tstat_sch_2_1_SCHEDULEDAUTOSETPOINT_ANALOG_INPUT 8

#define __S2_tstat_sch_2_1_PATH$_STRING_INPUT 4
#define __S2_tstat_sch_2_1_PATH$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_tstat_sch_2_1, __PATH$, __S2_tstat_sch_2_1_PATH$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_tstat_sch_2_1_SCHEDULE_DUE_DIG_OUTPUT 0
#define __S2_tstat_sch_2_1_PM_FB_DIG_OUTPUT 1
#define __S2_tstat_sch_2_1_RUN_DIG_OUTPUT 2
#define __S2_tstat_sch_2_1_AWAY_MODE_FB_DIG_OUTPUT 3
#define __S2_tstat_sch_2_1_HOLD_MODE_FB_DIG_OUTPUT 4


/*
* ANALOG_OUTPUT
*/
#define __S2_tstat_sch_2_1_CURRENT_SCHEDULE_ANALOG_OUTPUT 0
#define __S2_tstat_sch_2_1_CURRENT_DAYOFWEEK_ANALOG_OUTPUT 1

#define __S2_tstat_sch_2_1_SCHEDULE_NAME$_STRING_OUTPUT 2
#define __S2_tstat_sch_2_1_SCHEDULE_TIME$_STRING_OUTPUT 3
#define __S2_tstat_sch_2_1_SINGLE_BUTTON_SELECT$_STRING_OUTPUT 4
#define __S2_tstat_sch_2_1_SINGLE_BUTTON_ADJUST$_STRING_OUTPUT 5
#define __S2_tstat_sch_2_1_AWAY_SCHEDULE$_STRING_OUTPUT 6
#define __S2_tstat_sch_2_1_AWAY_DATE$_STRING_OUTPUT 7

#define __S2_tstat_sch_2_1_SETPOINT_ANALOG_OUTPUT 11
#define __S2_tstat_sch_2_1_SETPOINT_ARRAY_LENGTH 4
#define __S2_tstat_sch_2_1_SCHEDULE_SETPOINT$_STRING_OUTPUT 8
#define __S2_tstat_sch_2_1_SCHEDULE_SETPOINT$_ARRAY_LENGTH 3

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
CREATE_INTARRAY1D( S2_tstat_sch_2_1, __G_IPREVSETPTS, 2 );;


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

/*
* STRUCTURE
*/
#define __S2_tstat_sch_2_1_G_SCHED_STRUCT_MAX_LEN 8
CREATE_STRUCTURE_ARRAY( S2_tstat_sch_2_1, __G_SCHED, SCHEDULE, __S2_tstat_sch_2_1_G_SCHED_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_tstat_sch_2_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SETPOINT );
   DECLARE_IO_ARRAY( __SCHEDULE_SETPOINT$ );
   unsigned short __G_ISINGLEBUTTONSELECTCAT;
   unsigned short __G_ISINGLEBUTTONSELECTSCHED;
   unsigned short __G_ISINGLEBUTTONADJUSTDIR;
   unsigned short __G_BIGNORESINGLEBUTTONRELEASE;
   unsigned long __G_TODAYJDAY;
   DECLARE_STRING_STRUCT( S2_tstat_sch_2_1, __PATH$ );
   DECLARE_STRUCT_ARRAY( S2_tstat_sch_2_1, __G_SCHED );
};

START_NVRAM_VAR_STRUCT( S2_tstat_sch_2_1 )
{
   unsigned short __G_IEDITSCHEDULE;
   unsigned short __G_IAWAYMSGINDEX;
   unsigned short __G_ICURRENTSCHEDULE;
   DECLARE_INTARRAY( S2_tstat_sch_2_1, __G_IPREVSETPTS );
   unsigned long __G_LTARGETJDAY;
};

DEFINE_WAITEVENT( S2_tstat_sch_2_1, WAIT_SAVE );
DEFINE_WAITEVENT( S2_tstat_sch_2_1, SBA_WAIT_1 );
DEFINE_WAITEVENT( S2_tstat_sch_2_1, SBA_WAIT_2 );


#endif //__S2_TSTAT_SCH_2_1_H__

