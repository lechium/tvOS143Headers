/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSPolicy.h>

@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyGibraltar : CSPolicy {

	CSPolicy* _voiceTriggerEnabledPolicy;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerEnabledPolicy;              //@synthesize voiceTriggerEnabledPolicy=_voiceTriggerEnabledPolicy - In the implementation block
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(CSPolicy *)voiceTriggerEnabledPolicy;
-(void)setVoiceTriggerEnabledPolicy:(CSPolicy *)arg1 ;
@end

