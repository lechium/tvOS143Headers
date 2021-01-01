/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextureIO/TextureIO-Structs.h>
@interface TXRAssetCatalogFileAttributes : NSObject {

	CGColorSpaceRef _colorSpace;
	unsigned char _exifOrientation;
	unsigned long long _fileFormat;

}

@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (assign,nonatomic) unsigned char exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormat;              //@synthesize fileFormat=_fileFormat - In the implementation block
-(id)init;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(unsigned long long)fileFormat;
-(unsigned char)exifOrientation;
-(void)setExifOrientation:(unsigned char)arg1 ;
-(void)setFileFormat:(unsigned long long)arg1 ;
@end

