/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality> {

	id _entityIdentifier;
	id _namespaceIdentifier;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	id _revisionIdentifier;
	CGSize _scaledFittingSize;
	double _tileSpacing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)stringRepresentation;
-(id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
@end
