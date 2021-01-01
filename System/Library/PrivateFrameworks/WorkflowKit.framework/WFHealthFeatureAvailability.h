/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFHealthFeatureObserver;
@interface WFHealthFeatureAvailability : NSObject {

	id<WFHealthFeatureObserver> _observer;

}

@property (assign,nonatomic,__weak) id<WFHealthFeatureObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepOnboardingStatus; 
-(void)setObserver:(id<WFHealthFeatureObserver>)arg1 ;
-(id<WFHealthFeatureObserver>)observer;
-(unsigned long long)sleepOnboardingStatus;
-(id)initWithSleepFeature:(unsigned long long)arg1 ;
@end

