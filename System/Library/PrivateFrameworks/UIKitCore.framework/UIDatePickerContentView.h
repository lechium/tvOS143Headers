/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	SCD_Struct_UI30 _datePickerContentViewFlags;
	UILabel* _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelMaxX;                 //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(_UIDatePickerMode *)mode;
-(id)initWithMode:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(BOOL)_canBeReusedInPickerView;
-(BOOL)isAmPm;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(double)titleLabelMaxX;
@end

