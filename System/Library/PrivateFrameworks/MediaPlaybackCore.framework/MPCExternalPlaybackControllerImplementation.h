/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MFExternalPlaybackController.h>
#import <libobjc.A.dylib/MPCExternalPlaybackRouter.h>

@class MPAVRoutingController, MPCPlaybackEngine, MPCMediaFoundationTranslator, NSString;

@interface MPCExternalPlaybackControllerImplementation : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter> {

	MPAVRoutingController* _routingController;
	MPCPlaybackEngine* _playbackEngine;
	MPCMediaFoundationTranslator* _translator;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(void)pickBestDeviceRoute;
-(MPCMediaFoundationTranslator *)translator;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 ;
-(BOOL)isExternalPlaybackAllowedForItem:(id)arg1 ;
-(BOOL)playerShouldUseAudiOnlyMode:(id)arg1 item:(id)arg2 externalScreenType:(long long)arg3 ;
-(long long)exernalPlaybackRouteRestrictionForItem:(id)arg1 route:(id)arg2 isScreenMirroringActive:(BOOL)arg3 ;
-(void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2 ;
@end

