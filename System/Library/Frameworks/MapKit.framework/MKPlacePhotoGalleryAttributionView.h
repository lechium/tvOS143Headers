/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, NSArray;

@interface MKPlacePhotoGalleryAttributionView : UIView {

	UIVisualEffectView* _effectView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _attributionLogoImageView;
	NSArray* _regularConstraints;
	NSArray* _primaryLabelOnlyConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                     //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                              //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                            //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * attributionLogoImageView;              //@synthesize attributionLogoImageView=_attributionLogoImageView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                        //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * primaryLabelOnlyConstraints;               //@synthesize primaryLabelOnlyConstraints=_primaryLabelOnlyConstraints - In the implementation block
-(id)init;
-(UIVisualEffectView *)effectView;
-(void)setupSubviews;
-(void)updateFonts;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(long long)blurEffectWithStyle:(long long)arg1 ;
-(void)updateStyle:(long long)arg1 ;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(NSArray *)primaryLabelOnlyConstraints;
-(NSArray *)regularConstraints;
-(UIImageView *)attributionLogoImageView;
-(void)setDescription:(id)arg1 license:(id)arg2 author:(id)arg3 ;
-(void)setAttributionLogoImage:(id)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setAttributionLogoImageView:(UIImageView *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(void)setPrimaryLabelOnlyConstraints:(NSArray *)arg1 ;
@end

