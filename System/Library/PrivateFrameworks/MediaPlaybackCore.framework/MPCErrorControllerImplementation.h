/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFErrorController.h>

@protocol MPCExternalPlaybackRouter;
@class NSString, MPCPlaybackEngine, MPCMediaFoundationTranslator, NSMutableSet, MPAVItem;

@interface MPCErrorControllerImplementation : NSObject <MFErrorController> {

	BOOL itemsHavePlayed;
	NSString* preferredFirstContentItemID;
	MPCPlaybackEngine* _playbackEngine;
	MPCMediaFoundationTranslator* _translator;
	NSMutableSet* _failedItemsIdentifiers;
	id<MPCExternalPlaybackRouter> _externalPlaybackRouter;
	MPAVItem* _lastItemUsedForErrorResolution;

}

@property (assign,nonatomic,__weak) MPCPlaybackEngine * playbackEngine;                         //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;                       //@synthesize translator=_translator - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedItemsIdentifiers;                             //@synthesize failedItemsIdentifiers=_failedItemsIdentifiers - In the implementation block
@property (nonatomic,retain) id<MPCExternalPlaybackRouter> externalPlaybackRouter;              //@synthesize externalPlaybackRouter=_externalPlaybackRouter - In the implementation block
@property (nonatomic,retain) MPAVItem * lastItemUsedForErrorResolution;                         //@synthesize lastItemUsedForErrorResolution=_lastItemUsedForErrorResolution - In the implementation block
@property (nonatomic,copy) NSString * preferredFirstContentItemID; 
@property (assign,nonatomic) BOOL itemsHavePlayed; 
-(void)reset;
-(MPCMediaFoundationTranslator *)translator;
-(MPCPlaybackEngine *)playbackEngine;
-(NSString *)preferredFirstContentItemID;
-(void)setPreferredFirstContentItemID:(NSString *)arg1 ;
-(void)resolveError:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)itemsHavePlayed;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 externalPlaybackRouter:(id)arg3 ;
-(void)setItemsHavePlayed:(BOOL)arg1 ;
-(void)setLastItemUsedForErrorResolution:(MPAVItem *)arg1 ;
-(NSMutableSet *)failedItemsIdentifiers;
-(id<MPCExternalPlaybackRouter>)externalPlaybackRouter;
-(MPAVItem *)lastItemUsedForErrorResolution;
-(void)_playbackFailedWithError:(id)arg1 item:(id)arg2 canResolve:(BOOL)arg3 proposedResolution:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_notifyObserversForError:(id)arg1 item:(id)arg2 ;
-(long long)_resolutionForPlaybackError:(id)arg1 item:(id)arg2 ;
-(BOOL)shouldHandleFirstItemFailure:(id)arg1 item:(id)arg2 ;
-(BOOL)isUnrecoverableAssetLoadingError:(id)arg1 ;
-(BOOL)canHandleFirstItemFailure;
-(BOOL)isQueueLoadingFailure:(id)arg1 ;
-(BOOL)isFirstItemFailure:(id)arg1 item:(id)arg2 ;
-(BOOL)isAssetUnavailableFailure:(id)arg1 ;
-(void)reportCriticalError:(id)arg1 forItem:(id)arg2 ;
-(void)setFailedItemsIdentifiers:(NSMutableSet *)arg1 ;
-(void)setExternalPlaybackRouter:(id<MPCExternalPlaybackRouter>)arg1 ;
@end
