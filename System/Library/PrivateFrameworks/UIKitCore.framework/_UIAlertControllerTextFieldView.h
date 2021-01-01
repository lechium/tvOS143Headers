/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIAlertControllerTextField, NSArray, UITextField;

@interface _UIAlertControllerTextFieldView : UIView {

	UIView* _containerView;
	_UIAlertControllerTextField* _textField;
	NSArray* _containerViewConstraints;

}

@property (nonatomic,retain) UIView * containerView; 
@property (readonly) UITextField * textField; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITextField *)textField;
-(UIView *)containerView;
-(double)_borderWidth;
-(void)setContainerView:(UIView *)arg1 ;
-(id)_textFieldFont;
-(void)_loadConstraints;
@end
