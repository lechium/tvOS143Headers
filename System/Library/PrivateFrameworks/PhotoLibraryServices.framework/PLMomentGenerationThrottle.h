/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLMomentGenerationThrottleTimeProvider;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLMomentGenerationThrottle : NSObject {

	BOOL _canDelayAnyQOS;
	/*^block*/id _targetBlock;
	NSString* _name;
	id<PLMomentGenerationThrottleTimeProvider> _timeProvider;
	BOOL _singleThreaded;
	atomic_flag _shouldRunAgain;
	atomic_flag _isExecutingOrConsideringExecution;
	double _lastRunDuration;
	double _lastRunEndTime;
	double _nextExpectedRun;

}
-(void)update;
-(id)initWithName:(id)arg1 canDelayAnyQOS:(BOOL)arg2 singleThreadedMode:(BOOL)arg3 timeProvider:(id)arg4 target:(/*^block*/id)arg5 ;
-(BOOL)isIdle;
@end

