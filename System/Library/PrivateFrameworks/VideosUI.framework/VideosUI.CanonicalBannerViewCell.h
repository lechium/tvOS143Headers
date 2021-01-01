/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class NSArray;

@interface VideosUI.CanonicalBannerViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate> {

	 bannerLayout;
	 titleImageView;
	 contentTitleView;
	 contentSubtitleView;
	 episodeInfoTextView;
	 promoTextView;
	 buttonViews;
	 availabilityTextView;
	 availabilityImageView;
	 disclaimerTextView;
	 descriptionTextView;
	 rolesSummaryView;
	 tagsView;
	 contentTextLegibilityGradientView;
	 attributionImageView;
	 attributionImageGradientView;
	 comingSoonView;
	 cardInsets;
	 cardShowcaseFactor;
	 alignLogoToLeftIfRTL;
	 lastFocusedView;
	 cardUIEnabled;
	 containerGuide;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
@end

