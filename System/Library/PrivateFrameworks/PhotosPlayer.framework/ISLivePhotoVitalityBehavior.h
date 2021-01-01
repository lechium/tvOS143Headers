/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoVitalityBehavior : ISBehavior {

	id _easeOutObserver;
	id _transitionToPhotoObserver;
	BOOL _pauseDuringTransition;
	BOOL _prepared;
	BOOL _playing;
	BOOL _playingBeyondPhoto;
	BOOL _preparing;
	BOOL __shouldPlayAfterPreparation;
	float _playRate;
	double _photoTransitionDuration;
	unsigned long long _assetOptions;
	SCD_Struct_IS1 _playbackEndTime;
	SCD_Struct_IS1 _playDuration;

}

@property (assign,setter=_setPrepared:,getter=isPrepared,nonatomic) BOOL prepared;                                            //@synthesize prepared=_prepared - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL preparing;                                        //@synthesize preparing=_preparing - In the implementation block
@property (assign,setter=_setPlayingBeyondPhoto:,getter=isPlayingBeyondPhoto,nonatomic) BOOL playingBeyondPhoto;              //@synthesize playingBeyondPhoto=_playingBeyondPhoto - In the implementation block
@property (assign,setter=_setShouldPlayAfterPreparation:,nonatomic) BOOL _shouldPlayAfterPreparation;                         //@synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 playbackEndTime;                                                                //@synthesize playbackEndTime=_playbackEndTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 playDuration;                                                                   //@synthesize playDuration=_playDuration - In the implementation block
@property (nonatomic,readonly) double photoTransitionDuration;                                                                //@synthesize photoTransitionDuration=_photoTransitionDuration - In the implementation block
@property (nonatomic,readonly) BOOL pauseDuringTransition;                                                                    //@synthesize pauseDuringTransition=_pauseDuringTransition - In the implementation block
@property (nonatomic,readonly) unsigned long long assetOptions;                                                               //@synthesize assetOptions=_assetOptions - In the implementation block
@property (nonatomic,readonly) float playRate;                                                                                //@synthesize playRate=_playRate - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing;                                                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic,__weak) id<ISLivePhotoVitalityBehaviorDelegate> delegate; 
-(void)dealloc;
-(BOOL)isPlaying;
-(BOOL)isPrepared;
-(SCD_Struct_IS1)playbackEndTime;
-(float)playRate;
-(void)videoReadyForDisplayDidChange;
-(long long)behaviorType;
-(void)activeDidChange;
-(void)_handleDidFinishPreroll;
-(double)photoTransitionDuration;
-(BOOL)_isPreparing;
-(void)_setPreparing:(BOOL)arg1 ;
-(void)prepareForVitality;
-(void)playVitality;
-(void)cancelSettleToPhoto;
-(id)initWithInitialLayoutInfo:(id)arg1 playbackEndTime:(SCD_Struct_IS1)arg2 playDuration:(SCD_Struct_IS1)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(BOOL)arg6 assetOptions:(unsigned long long)arg7 ;
-(BOOL)isPlayingBeyondPhoto;
-(void)_startObservingVideo;
-(void)_stopObservingVideo;
-(void)_handleDidSeekToStartTime;
-(void)_startVideoPlayback;
-(void)_didReachTransitionTime;
-(void)_didReachTransitionToPhotoTime;
-(SCD_Struct_IS1)playDuration;
-(BOOL)pauseDuringTransition;
-(unsigned long long)assetOptions;
-(void)_setPrepared:(BOOL)arg1 ;
-(void)_setPlayingBeyondPhoto:(BOOL)arg1 ;
-(BOOL)_shouldPlayAfterPreparation;
-(void)_setShouldPlayAfterPreparation:(BOOL)arg1 ;
@end

