/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVImageProxy;

@interface TVHKBackgroundImageRequest : NSObject {

	BOOL _requiresBackdropImage;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,readonly) TVImageProxy * imageProxy;              //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL requiresBackdropImage;               //@synthesize requiresBackdropImage=_requiresBackdropImage - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(TVImageProxy *)imageProxy;
-(id)initWithImageProxy:(id)arg1 ;
-(BOOL)requiresBackdropImage;
-(void)setRequiresBackdropImage:(BOOL)arg1 ;
@end
