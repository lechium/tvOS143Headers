/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class NSDate, NSTimer, NSString;

@interface TILanguageModelMaintainer : NSObject <TIKeyboardActivityObserving> {

	NSDate* _nextEligibleMaintenanceDate;
	NSTimer* _dynamicLearningCacheTimer;

}

@property (nonatomic,retain) NSDate * nextEligibleMaintenanceDate;              //@synthesize nextEligibleMaintenanceDate=_nextEligibleMaintenanceDate - In the implementation block
@property (nonatomic,retain) NSTimer * dynamicLearningCacheTimer;               //@synthesize dynamicLearningCacheTimer=_dynamicLearningCacheTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLanguageModelMaintainer;
-(id)init;
-(void)dealloc;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)touchDynamicLearningCacheTimer;
-(BOOL)isMaintenanceDue;
-(void)performMaintenanceIfNecessary;
-(void)dynamicLearningCacheTimerFired:(id)arg1 ;
-(NSDate *)nextEligibleMaintenanceDate;
-(void)setNextEligibleMaintenanceDate:(NSDate *)arg1 ;
-(NSTimer *)dynamicLearningCacheTimer;
-(void)setDynamicLearningCacheTimer:(NSTimer *)arg1 ;
@end

