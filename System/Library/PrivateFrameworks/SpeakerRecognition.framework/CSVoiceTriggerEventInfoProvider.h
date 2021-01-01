/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject {

	NSDictionary* _voiceTriggerInfo;
	NSDictionary* _rtsTriggerInfo;
	unsigned long long _triggerNotifiedMachTime;

}

@property (nonatomic,copy) NSDictionary * voiceTriggerInfo;                           //@synthesize voiceTriggerInfo=_voiceTriggerInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * rtsTriggerInfo;                             //@synthesize rtsTriggerInfo=_rtsTriggerInfo - In the implementation block
@property (assign,nonatomic) unsigned long long triggerNotifiedMachTime;              //@synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)voiceTriggerInfo;
-(void)setVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)rtsTriggerInfo;
-(void)setRtsTriggerInfo:(NSDictionary *)arg1 ;
-(unsigned long long)triggerNotifiedMachTime;
-(void)setTriggerNotifiedMachTime:(unsigned long long)arg1 ;
@end
