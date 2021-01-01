/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger {

	unsigned long long _destinationType;
	unsigned long long _minutesBefore;

}

@property (assign,nonatomic) unsigned long long destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) unsigned long long minutesBefore;                //@synthesize minutesBefore=_minutesBefore - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(double)timeIntervalUpperBound;
-(double)timeIntervalLowerBound;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)destinationType;
-(void)setDestinationType:(unsigned long long)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(unsigned long long)minutesBefore;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setMinutesBefore:(unsigned long long)arg1 ;
@end

