/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class _TVImageView, IKViewElement, VUIChannelBannerView;

@interface VUIChannelBannerViewController : UIViewController {

	_TVImageView* _bgImageView;
	IKViewElement* _viewElement;
	VUIChannelBannerView* _bannerView;

}

@property (nonatomic,retain) _TVImageView * bgImageView;                       //@synthesize bgImageView=_bgImageView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUIChannelBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(VUIChannelBannerView *)bannerView;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(_TVImageView *)bgImageView;
-(void)setBgImageView:(_TVImageView *)arg1 ;
-(void)_configureSubviews;
@end
