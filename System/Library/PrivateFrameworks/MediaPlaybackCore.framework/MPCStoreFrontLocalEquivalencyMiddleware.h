/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPModelGenericObject, NSIndexPath, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPModelGenericObject* _overridePlayingItem;
	NSIndexPath* _playingItemIndexPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPModelGenericObject * overridePlayingItem;              //@synthesize overridePlayingItem=_overridePlayingItem - In the implementation block
@property (nonatomic,copy) NSIndexPath * playingItemIndexPath;                        //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id)_stateDumpObject;
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(void)setOverridePlayingItem:(MPModelGenericObject *)arg1 ;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(MPModelGenericObject *)overridePlayingItem;
-(NSIndexPath *)playingItemIndexPath;
@end
