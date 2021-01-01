/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class _UIContentUnavailableView, NSString;

@interface AMSUIErrorView : AMSUICommonView {

	_UIContentUnavailableView* _backingView;

}

@property (nonatomic,retain) _UIContentUnavailableView * backingView;              //@synthesize backingView=_backingView - In the implementation block
@property (nonatomic,copy) id buttonAction; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)buttonAction;
-(void)layoutSubviews;
-(void)setButtonAction:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(_UIContentUnavailableView *)backingView;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_handleButtonTap;
-(void)setBackingView:(_UIContentUnavailableView *)arg1 ;
@end
