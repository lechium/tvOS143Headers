//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, TVTableView;

@protocol TVTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(TVTableView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(TVTableView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(TVTableView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end
