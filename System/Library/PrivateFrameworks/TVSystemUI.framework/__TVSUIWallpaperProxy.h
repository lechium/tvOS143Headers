/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface __TVSUIWallpaperProxy : NSObject {

	NSString* _cacheKey;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) UIImage * image;                       //@synthesize image=_image - In the implementation block
+(void)initialize;
+(void)relinquishWallpaperProxy:(id)arg1 ;
+(id)acquireWallpaperProxyWithVariant:(long long)arg1 userInterfaceStyle:(long long)arg2 ;
+(id)_wallpaperWithImage:(id)arg1 cacheKey:(id)arg2 ;
-(UIImage *)image;
-(NSString *)cacheKey;
@end

