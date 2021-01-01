/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UITableView;

@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView {

	UITableView* _tableView;

}

@property (__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UIEdgeInsets)insetsForHeaderFooter;
@end
