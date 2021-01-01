//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBSnapshotDataProvider-Protocol.h"

@class NSString, UIImage, XBApplicationSnapshot, XBApplicationSnapshotPredicate, XBSnapshotDataProviderContext;

@interface PBSavedSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    XBSnapshotDataProviderContext *_context;	// 8 = 0x8
    XBApplicationSnapshot *_snapshot;	// 16 = 0x10
    XBApplicationSnapshotPredicate *_predicate;	// 24 = 0x18
    NSString *_sceneID;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    double _scaleFactor;	// 48 = 0x30
    UIImage *_cachedImage;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001da95c
@property(readonly, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(readonly, nonatomic) XBApplicationSnapshotPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) XBApplicationSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void)invalidateImage;	// IMP=0x00000001001da83c
- (id)fetchImage;	// IMP=0x00000001001d9e14
- (id)initWithSnapshotPredicate:(id)arg1 sceneID:(id)arg2 bundleIdentifier:(id)arg3 scaleFactor:(double)arg4;	// IMP=0x00000001001d9bf0
- (id)init;	// IMP=0x00000001001d9bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
