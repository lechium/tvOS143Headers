/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMOutputComponent.h>

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent : AXMOutputComponent {

	AVAudioEngine* _engine;
	AVAudioPlayerNode* _oneShotSoundPlayer;
	NSMutableArray* _activeSounds;
	id _configChangedObserverToken;

}

@property (nonatomic,retain) id configChangedObserverToken;              //@synthesize configChangedObserverToken=_configChangedObserverToken - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_startEngineIfNeeded:(id*)arg1 ;
-(void)_scheduleOneShotSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_scheduleActiveSound:(id)arg1 ;
-(void)_stopActiveSound:(id)arg1 ;
-(void)_logAudioFileInfo:(id)arg1 ;
-(id)configChangedObserverToken;
-(void)setConfigChangedObserverToken:(id)arg1 ;
@end

