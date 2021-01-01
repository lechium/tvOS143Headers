/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {

	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;

}

@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)initWithCacheSize:(long long)arg1 ;
-(id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)metadataForItemIdentifier:(id)arg1 ;
-(id)metadataForItemIdentifier:(id)arg1 ignoreExpiration:(BOOL)arg2 ;
-(void)removeExpiredMetadata;
@end
