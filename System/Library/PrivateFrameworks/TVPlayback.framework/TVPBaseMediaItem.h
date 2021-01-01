/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPMediaItem.h>

@class NSMutableDictionary, NSString;

@interface TVPBaseMediaItem : NSObject <TVPMediaItem> {

	NSMutableDictionary* _metadataDictionary;
	NSMutableDictionary* _transactionDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1 ;
-(id)reportingDelegate;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(BOOL)arg3 ;
@end
