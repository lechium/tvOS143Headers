//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@class NSIndexPath;

@interface SATVTableView : UITableView
{
    NSIndexPath *_indexPathForDirectlyFocusedItem;	// 8 = 0x8
    NSIndexPath *_indexPathForLastFocusedItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100076c80
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void)reloadData;	// IMP=0x0000000100076c1c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100076a44
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x00000001000769e8

@end
