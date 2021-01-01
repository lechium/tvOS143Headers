/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GLKTextureInfo : NSObject <NSCopying> {

	unsigned name;
	unsigned target;
	unsigned width;
	unsigned height;
	unsigned depth;
	int alphaState;
	int textureOrigin;
	BOOL containsMipmaps;
	unsigned mimapLevelCount;
	unsigned arrayLength;
	BOOL lossyCompressedSource;

}

@property (readonly) unsigned name; 
@property (readonly) unsigned target; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) unsigned depth; 
@property (readonly) int alphaState; 
@property (readonly) int textureOrigin; 
@property (readonly) BOOL containsMipmaps; 
@property (readonly) unsigned mimapLevelCount; 
@property (readonly) unsigned arrayLength; 
-(unsigned)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)target;
-(unsigned)depth;
-(unsigned)width;
-(unsigned)height;
-(unsigned)arrayLength;
-(BOOL)lossyCompressedSource;
-(int)alphaState;
-(int)textureOrigin;
-(BOOL)containsMipmaps;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(id)initWithTextureTXR:(id)arg1 textureName:(unsigned)arg2 ;
-(unsigned)mimapLevelCount;
@end

