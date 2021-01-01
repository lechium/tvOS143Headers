/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface NUIContentScrollView : UIScrollView {

	BOOL _canScrollDocumentViewHorizontally;
	BOOL _canScrollDocumentViewVertically;
	UIView* _documentView;
	long long _horizontalAlignment;
	long long _verticalAlignment;

}

@property (nonatomic,retain) UIView * contentView; 
@property (nonatomic,retain) UIView * documentView;                               //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                       //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                         //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) BOOL canScrollDocumentViewHorizontally;              //@synthesize canScrollDocumentViewHorizontally=_canScrollDocumentViewHorizontally - In the implementation block
@property (assign,nonatomic) BOOL canScrollDocumentViewVertically;                //@synthesize canScrollDocumentViewVertically=_canScrollDocumentViewVertically - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(UIView *)contentView;
-(UIView *)documentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDocumentView:(UIView *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithDocumentView:(id)arg1 ;
-(long long)verticalAlignment;
-(id)initWithContentView:(id)arg1 ;
-(void)layoutSubviews;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)_layoutHeightDependsOnWidth;
-(unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)canScrollDocumentViewHorizontally;
-(BOOL)canScrollDocumentViewVertically;
-(void)setCanScrollDocumentViewHorizontally:(BOOL)arg1 ;
-(void)setCanScrollDocumentViewVertically:(BOOL)arg1 ;
@end

