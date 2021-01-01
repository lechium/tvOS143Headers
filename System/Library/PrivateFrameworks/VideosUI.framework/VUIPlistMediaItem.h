/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseItem* _databaseItem;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseItem * databaseItem;              //@synthesize databaseItem=_databaseItem - In the implementation block
-(id)isLocal;
-(id)assetType;
-(id)showTitle;
-(id)seasonNumber;
-(id)showIdentifier;
-(id)playedState;
-(id)seasonIdentifier;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)seasonTitle;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseItem *)databaseItem;
-(void)setDatabaseItem:(VUIPlistMediaDatabaseItem *)arg1 ;
@end

