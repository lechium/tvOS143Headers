//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncCommandPullSnapshotRequestMutating-Protocol.h"

@class ADDeviceSyncCommandPullSnapshotRequest, NSString;

@interface _ADDeviceSyncCommandPullSnapshotRequestMutation : NSObject <ADDeviceSyncCommandPullSnapshotRequestMutating>
{
    ADDeviceSyncCommandPullSnapshotRequest *_baseModel;	// 8 = 0x8
    NSString *_dataType;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDataType:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100053c3c
- (id)generate;	// IMP=0x0000000100053b88
- (void)setDataType:(id)arg1;	// IMP=0x0000000100053b54
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000100053adc
- (id)init;	// IMP=0x0000000100053acc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

