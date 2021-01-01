/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {

	NSData* _imageData;
	NSString* _mimeType;

}

@property (nonatomic,copy,readonly) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(NSData *)imageData;
-(NSString *)mimeType;
-(id)initWithImageData:(id)arg1 mimeType:(id)arg2 ;
-(id)copyImageData;
-(BOOL)hasArtworkData;
@end

