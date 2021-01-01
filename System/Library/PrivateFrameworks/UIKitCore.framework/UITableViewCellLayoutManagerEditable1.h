/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(id)editableTextFieldForCell:(id)arg1 ;
-(double)defaultTextFieldFontSizeForCell:(id)arg1 ;
-(void)_textFieldStartEditing:(id)arg1 ;
-(void)_textFieldEndEditing:(id)arg1 ;
-(void)_textFieldEndEditingOnReturn:(id)arg1 ;
-(void)_textValueChanged:(id)arg1 ;
@end

