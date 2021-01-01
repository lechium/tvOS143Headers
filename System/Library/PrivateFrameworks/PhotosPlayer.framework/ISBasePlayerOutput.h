/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ISBasePlayerOutput <NSObject>
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@optional
-(BOOL)isVideoReadyForDisplay;
-(void)setVideoLayerReadyForDisplayChangeHandler:(/*^block*/id)arg1;
-(id)videoLayerReadyForDisplayChangeHandler;

@required
-(void)setContent:(id)arg1;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;

@end

