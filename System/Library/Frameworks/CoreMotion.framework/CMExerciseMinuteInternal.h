/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMExerciseMinuteData;

@interface CMExerciseMinuteInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	BOOL fStartedUpdates;
	CMExerciseMinuteData* fMostRecentRecord;
	/*^block*/id fHandler;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopUpdates;
@end

