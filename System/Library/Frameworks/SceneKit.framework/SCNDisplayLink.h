/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class CADisplayLink, NSObject, SCNRecursiveLock;

@interface SCNDisplayLink : NSObject {

	CADisplayLink* _caDisplayLink;
	BOOL _supportTargetTimestamp;
	/*^block*/id _block;
	/*^block*/id _adaptativeFrameDuration;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _invalidated;
	double _lastFrameTime;
	float _preferredFrameRate;
	SCNRecursiveLock* _runningLock;
	Ai _queuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFrameRate; 
@property (nonatomic,copy) id adaptativeFrameRate; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)_cleanup;
-(BOOL)_isInvalidated;
-(id)initWithQueue:(id)arg1 screen:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setPreferredFrameRate:(float)arg1 ;
-(BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3 ;
-(float)preferredFrameRate;
-(void)_caDisplayLinkCallback;
-(void)_callbackWithTime:(double)arg1 ;
-(id)adaptativeFrameRate;
-(void)setAdaptativeFrameRate:(id)arg1 ;
-(int)queuedFrameCount;
@end

