/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PXNavigationListControllerView : UIView {

	UIView* _contentView;
	double _contentViewHeight;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;              //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)addSubview:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentViewHeight:(double)arg1 ;
-(void)_updateContentViewFrame;
-(double)contentViewHeight;
@end

