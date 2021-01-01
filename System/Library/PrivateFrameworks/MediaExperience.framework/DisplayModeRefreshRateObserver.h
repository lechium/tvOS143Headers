/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, CADisplay;

@interface DisplayModeRefreshRateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	double _refreshRate;
	CADisplay* _tvOutDisplay;

}
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)updateHDMILatencyOnCoreAnimation:(double)arg1 ;
-(double)readHDMILatencyFromCoreAnimation;
@end
