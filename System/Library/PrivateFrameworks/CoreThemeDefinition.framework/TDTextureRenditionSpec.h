/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDThemeCompressionType, TDTexturePixelFormat;

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) BOOL cubeMap; 
@property (nonatomic,retain) NSSet * mipLevels; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,retain) TDTexturePixelFormat * pixelFormat; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
@end

