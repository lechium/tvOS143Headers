/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIAssetManager, UIImage;

@interface TVVolatileImage : NSObject {

	_UIAssetManager* _assetManager;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
+(id)volatileImageWithImage:(id)arg1 fromAssetManager:(id)arg2 ;
+(id)volatileImageWithImage:(id)arg1 ;
-(id)init;
-(id)_init;
-(UIImage *)image;
@end

