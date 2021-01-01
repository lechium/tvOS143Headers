/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TXRParser.h>

@protocol OS_dispatch_queue;
@class TXRTextureInfo, NSDictionary, TXRDeferredTextureInfo, NSObject, NSString;

@interface TXRParserKTX : NSObject <TXRParser> {

	TXRTextureInfo* _textureInfo;
	unsigned _bytesOfKeyValueData;
	BOOL _isCompressed;
	NSDictionary* _internalSizedFormatLookup;
	TXRDeferredTextureInfo* _deferredTextureInfo;
	NSObject*<OS_dispatch_queue> _parserQueue;
	BOOL _shouldFlipVertically;

}

@property (nonatomic,readonly) TXRTextureInfo * textureInfo;              //@synthesize textureInfo=_textureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
+(BOOL)handlesData:(id)arg1 ;
-(BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(unsigned long long)determineFormatFromType:(unsigned)arg1 format:(unsigned)arg2 internalFormat:(unsigned)arg3 baseInternalFormat:(unsigned)arg4 ;
-(void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3 ;
@end

