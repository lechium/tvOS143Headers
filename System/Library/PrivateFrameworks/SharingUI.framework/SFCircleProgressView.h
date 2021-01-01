/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView

@property (assign,nonatomic) long long progressStartPoint; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (nonatomic,retain) UIColor * progressBackgroundColor; 
@property (assign,nonatomic) double progressLineWidth; 
@property (assign,nonatomic) BOOL showProgressTray; 
@property (assign,nonatomic) double progress; 
+(Class)layerClass;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(UIColor *)progressBackgroundColor;
-(double)progressLineWidth;
-(BOOL)showProgressTray;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)progressPresentationValue;
-(void)animateProgressCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)setProgressStartPoint:(long long)arg1 ;
-(long long)progressStartPoint;
@end

