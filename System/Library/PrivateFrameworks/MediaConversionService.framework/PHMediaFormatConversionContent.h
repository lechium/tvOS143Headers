/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface PHMediaFormatConversionContent : NSObject {

	unsigned long long _length;
	NSURL* _fileURL;
	NSString* _fileSignature;
	long long _mediaType;

}

@property (readonly) NSString * fileSignature; 
@property (assign) long long mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (retain) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) NSString * fileType; 
-(id)description;
-(unsigned long long)length;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)fileType;
-(BOOL)isVideo;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(NSString *)fileSignature;
-(BOOL)isImage;
-(BOOL)isAssetBundle;
-(id)typeIdentifierFromFileExtensionWithError:(id*)arg1 ;
@end

