/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class TVLHeadToHeadBannerView, TVLItemTitleView, TVLHockeyScoreboardView;

@interface TVLHockeyPreviewView : UIView {

	TVLHeadToHeadBannerView* _bannerView;
	TVLItemTitleView* _titleView;
	TVLHockeyScoreboardView* _scoreboardView;

}

@property (nonatomic,retain) TVLHeadToHeadBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) TVLItemTitleView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) TVLHockeyScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)layoutSubviews;
-(TVLHeadToHeadBannerView *)bannerView;
-(void)setBannerView:(TVLHeadToHeadBannerView *)arg1 ;
-(void)setTitleView:(TVLItemTitleView *)arg1 ;
-(TVLItemTitleView *)titleView;
-(TVLHockeyScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLHockeyScoreboardView *)arg1 ;
@end

