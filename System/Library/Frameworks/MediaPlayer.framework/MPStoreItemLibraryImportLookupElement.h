/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {

	ICStorePlatformMetadata* _storeItem;
	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
-(NSDictionary *)lookupDictionary;
-(id)storeItem;
-(id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2 ;
@end

