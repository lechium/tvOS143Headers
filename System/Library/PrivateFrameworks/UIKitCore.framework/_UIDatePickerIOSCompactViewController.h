/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIDatePicker;

@interface _UIDatePickerIOSCompactViewController : UIViewController {

	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIDatePicker *)datePicker;
-(BOOL)_canShowWhileLocked;
-(void)_updatePreferredContentSize;
-(id)initWithValuesFromDataModel:(id)arg1 ;
@end

