/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSThread, CADisplayLink, NSTimer;

@interface _UIScrollViewGestureSimulator : NSObject {

	CFRunLoopSourceRef _mainThreadRunLoopSource;
	NSMutableArray* _simulatedGestures;
	NSThread* _workThread;
	CADisplayLink* _displayLink;
	NSTimer* _timer;
	BOOL _hasSimulatedGestures;
	double _lastWakeUpTime;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_update;
-(void)_threadMain;
-(void)_setHasSimulatedGestures:(id)arg1 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)_signalMainThreadIfNecessary;
-(void)simulateGestureWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
@end
