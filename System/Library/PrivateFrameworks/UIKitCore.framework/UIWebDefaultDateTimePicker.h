/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIWebFormControl.h>

@class DOMHTMLInputElement, UIDatePicker, NSString;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {

	DOMHTMLInputElement* _inputElement;
	UIDatePicker* _datePicker;
	NSString* _formatString;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;

}

@property (nonatomic,retain) DOMHTMLInputElement * _inputElement;              //@synthesize inputElement=_inputElement - In the implementation block
@property (nonatomic,retain) UIDatePicker * _datePicker;                       //@synthesize datePicker=_datePicker - In the implementation block
-(void)dealloc;
-(void)_dateChanged;
-(UIDatePicker *)_datePicker;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)_dateChangeHandler:(id)arg1 ;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(void)set_inputElement:(DOMHTMLInputElement *)arg1 ;
-(void)set_datePicker:(UIDatePicker *)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(DOMHTMLInputElement *)_inputElement;
@end

