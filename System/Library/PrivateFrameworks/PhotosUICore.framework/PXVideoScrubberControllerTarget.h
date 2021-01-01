/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXVideoScrubberControllerTarget <NSObject>
@property (nonatomic,copy) id durationChangeHandler; 
@property (nonatomic,copy) id statusChangeHandler; 
@property (nonatomic,copy) id playerItemChangeHandler; 
@optional
-(void)videoScrubberControllerDidEndSeeking:(id)arg1;
-(void)videoScrubberControllerWillBeginSeeking:(id)arg1;

@required
-(void)removeTimeObserver:(id)arg1;
-(id)playerItem;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_PX8)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(void)cancelPendingSeeks;
-(float)playRate;
-(SCD_Struct_PX8*)currentItemDuration;
-(SCD_Struct_PX8*)playerCurrentTime;
-(void)videoScrubberController:(id)arg1 seekToTime:(SCD_Struct_PX8)arg2 toleranceBefore:(SCD_Struct_PX8)arg3 toleranceAfter:(SCD_Struct_PX8)arg4 completionHandler:(/*^block*/id)arg5;
-(long long)playerStatus;
-(void)setPlayerItemChangeHandler:(/*^block*/id)arg1;
-(void)setStatusChangeHandler:(/*^block*/id)arg1;
-(void)setDurationChangeHandler:(/*^block*/id)arg1;
-(id)statusChangeHandler;
-(id)durationChangeHandler;
-(id)playerItemChangeHandler;

@end

