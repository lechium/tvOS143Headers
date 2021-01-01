/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AMSUIOnboardingFeatureView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
-(id)initWithFeature:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

