//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBRootCell.h"

#import "HBFolderObserver-Protocol.h"

@class HBFolder, HBFolderCellIconVendor, NSString;

@interface HBFolderCell : HBRootCell <HBFolderObserver>
{
    HBFolderCellIconVendor *_iconVendor;	// 8 = 0x8
}

+ (id)_baseFolderLayerStackWithInterfaceStyle:(long long)arg1;	// IMP=0x000000010000967c
- (void).cxx_destruct;	// IMP=0x0000000100009a60
- (void)_updateIconImagesWithReasons:(unsigned long long)arg1 previousTraitCollection:(id)arg2;	// IMP=0x0000000100009460
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000092c4
- (void)iconImagesDidChange:(id)arg1;	// IMP=0x00000001000092b0
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000091dc
- (void)setDropState:(long long)arg1;	// IMP=0x00000001000091cc
@property(readonly, nonatomic) HBFolder *folder;
- (void)setItem:(id)arg1;	// IMP=0x00000001000090ec
- (id)notificationObject:(id)arg1;	// IMP=0x0000000100008f68
@property(readonly, nonatomic) HBFolderCellIconVendor *iconVendor; // @synthesize iconVendor=_iconVendor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

