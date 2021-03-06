/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UITableView, UIPickerView;

@interface PKFixedAmountWrapperView : UIView {

	UITableView* _tableView;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
@end

