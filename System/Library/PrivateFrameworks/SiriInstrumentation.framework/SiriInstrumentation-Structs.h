/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct {
	unsigned timeToFirstPartialMs : 1;
	unsigned timeToFinalResultMs : 1;
	unsigned latencyFinalResultMs : 1;
} SCD_Struct_LT0;

typedef struct {
	unsigned carPlayActiveWithin24Hours : 1;
} SCD_Struct_SI1;

typedef struct {
	unsigned batchSeqNo : 1;
	unsigned numberOfParagraphs : 1;
	unsigned responseTimeMs : 1;
	unsigned numParagraphFailures : 1;
} SCD_Struct_LT2;

typedef struct {
	unsigned eventTransmittedRelativeToBootTimeTimestampNs : 1;
	unsigned serverArrivedTimestampNs : 1;
} SCD_Struct_SI3;

typedef struct {
	unsigned clientDeviceSamplingTimestampMs : 1;
	unsigned assistantRecordPublishTimestampMs : 1;
	unsigned spokenNotificationsproxCardSeen : 1;
	unsigned spokenNotificationsControlCenterModuleEnabled : 1;
	unsigned spokenNotificationsWhitelistSettings : 1;
} SCD_Struct_SI4;

typedef struct {
	unsigned assistantEnabled : 1;
	unsigned dictationEnabled : 1;
	unsigned hardwareButtonEnabled : 1;
	unsigned heySiriEnabled : 1;
	unsigned assistantOnLockscreen : 1;
	unsigned raiseToSpeakEnabled : 1;
	unsigned spokenNotificationsEnabled : 1;
	unsigned hasHomekitHome : 1;
	unsigned shortcutsAvailable : 1;
	unsigned dataSharingOptInStatus : 1;
	unsigned typeToSiriEnabled : 1;
	unsigned isPreciseLocationEnabled : 1;
	unsigned voiceFeedback : 1;
} SCD_Struct_SI5;

typedef struct {
	unsigned upload_time : 1;
	unsigned is_internal : 1;
	unsigned is_seed : 1;
	unsigned is_gm : 1;
	unsigned config_version : 1;
	unsigned is_internal_carry : 1;
	unsigned is_config_enabled : 1;
	unsigned is_testing_data : 1;
	unsigned is_trial_upload : 1;
} SCD_Struct_PE6;

