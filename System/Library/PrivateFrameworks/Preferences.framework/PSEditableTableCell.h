/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController, NSString;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
	BOOL _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	BOOL _valueChanged;
	BOOL _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) BOOL returnKeyTapped;                                    //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic,__weak) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)layoutSubviews;
-(id)textField;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)cellRemovedFromView;
-(BOOL)canBecomeFirstResponder;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)controlChanged:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(BOOL)isTextFieldEditing;
-(void)_setValueChanged;
-(void)_saveForExit;
-(void)endEditingAndSave;
-(id)_defaultTextColor;
-(BOOL)canResignFirstResponder;
-(BOOL)_cellIsEditing;
-(BOOL)returnKeyTapped;
-(PSListController *)controllerDelegate;
-(void)setControllerDelegate:(PSListController *)arg1 ;
@end
