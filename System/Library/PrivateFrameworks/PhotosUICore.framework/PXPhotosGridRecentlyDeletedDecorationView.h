/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGDecorationView.h>

@class PXAssetReference, PXTextBannerView;

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView> {

	unsigned long long _decorationOptions;
	PXAssetReference* _userData;
	PXTextBannerView* _textBannerView;
	CGRect _clippingRect;

}

@property (nonatomic,retain) PXTextBannerView * textBannerView;                 //@synthesize textBannerView=_textBannerView - In the implementation block
@property (nonatomic,copy) PXAssetReference * userData;                         //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) unsigned long long decorationOptions;              //@synthesize decorationOptions=_decorationOptions - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                               //@synthesize clippingRect=_clippingRect - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserData:(PXAssetReference *)arg1 ;
-(PXAssetReference *)userData;
-(void)layoutSubviews;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
-(unsigned long long)decorationOptions;
-(void)setDecorationOptions:(unsigned long long)arg1 ;
-(void)updateTextBanner;
-(PXTextBannerView *)textBannerView;
-(void)setTextBannerView:(PXTextBannerView *)arg1 ;
@end
