/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutYAxisAnchor, UIView;

@interface SeymourUI.RecencyIconView : UIView {

	 title;
	 label;
	 layout;
	 imageView;
	 layoutView;

}

@property (readonly,nonatomic) NSLayoutYAxisAnchor * firstBaselineAnchor; 
@property (readonly,nonatomic) NSLayoutYAxisAnchor * lastBaselineAnchor; 
@property (readonly,nonatomic) UIView * viewForFirstBaselineLayout; 
@property (readonly,nonatomic) UIView * viewForLastBaselineLayout; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSLayoutYAxisAnchor *)firstBaselineAnchor;
-(NSLayoutYAxisAnchor *)lastBaselineAnchor;
-(void)didMoveToSuperview;
-(UIView *)viewForFirstBaselineLayout;
-(UIView *)viewForLastBaselineLayout;
@end

