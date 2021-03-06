//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary, VCPFaceClusterer;
@protocol OS_dispatch_queue;

@interface VCPFaceProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
    VCPFaceClusterer *_clusterer;	// 32 = 0x20
}

+ (id)batchForPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x000000010003abcc
- (void).cxx_destruct;	// IMP=0x000000010003ba6c
- (void)publishOnCancel;	// IMP=0x000000010003b664
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010003af98
- (void)_publishPendingChanges;	// IMP=0x000000010003ada4
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x000000010003ac64
- (id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x000000010003aa88

@end

