//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncMessageMutating-Protocol.h"

@class ADDeviceSyncCommandPullDeltaRequest, ADDeviceSyncCommandPullDeltaResponse, ADDeviceSyncCommandPullGenerationsRequest, ADDeviceSyncCommandPullGenerationsResponse, ADDeviceSyncCommandPullSnapshotRequest, ADDeviceSyncCommandPullSnapshotResponse, ADDeviceSyncCommandPushGenerationsRequest, ADDeviceSyncCommandPushGenerationsResponse, ADDeviceSyncMessage, NSString;

@interface _ADDeviceSyncMessageMutation : NSObject <ADDeviceSyncMessageMutating>
{
    ADDeviceSyncMessage *_baseModel;	// 8 = 0x8
    unsigned long long _sequence;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ADDeviceSyncCommandPushGenerationsRequest *_commandPushGenerationsRequest;	// 32 = 0x20
    ADDeviceSyncCommandPushGenerationsResponse *_commandPushGenerationsResponse;	// 40 = 0x28
    ADDeviceSyncCommandPullGenerationsRequest *_commandPullGenerationsRequest;	// 48 = 0x30
    ADDeviceSyncCommandPullGenerationsResponse *_commandPullGenerationsResponse;	// 56 = 0x38
    ADDeviceSyncCommandPullDeltaRequest *_commandPullDeltaRequest;	// 64 = 0x40
    ADDeviceSyncCommandPullDeltaResponse *_commandPullDeltaResponse;	// 72 = 0x48
    ADDeviceSyncCommandPullSnapshotRequest *_commandPullSnapshotRequest;	// 80 = 0x50
    ADDeviceSyncCommandPullSnapshotResponse *_commandPullSnapshotResponse;	// 88 = 0x58
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSequence:1;
        unsigned int hasType:1;
        unsigned int hasCommandPushGenerationsRequest:1;
        unsigned int hasCommandPushGenerationsResponse:1;
        unsigned int hasCommandPullGenerationsRequest:1;
        unsigned int hasCommandPullGenerationsResponse:1;
        unsigned int hasCommandPullDeltaRequest:1;
        unsigned int hasCommandPullDeltaResponse:1;
        unsigned int hasCommandPullSnapshotRequest:1;
        unsigned int hasCommandPullSnapshotResponse:1;
    } _mutationFlags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100050714
- (id)generate;	// IMP=0x0000000100050414
- (void)setCommandPullSnapshotResponse:(id)arg1;	// IMP=0x00000001000503dc
- (void)setCommandPullSnapshotRequest:(id)arg1;	// IMP=0x00000001000503a4
- (void)setCommandPullDeltaResponse:(id)arg1;	// IMP=0x0000000100050370
- (void)setCommandPullDeltaRequest:(id)arg1;	// IMP=0x0000000100050338
- (void)setCommandPullGenerationsResponse:(id)arg1;	// IMP=0x0000000100050300
- (void)setCommandPullGenerationsRequest:(id)arg1;	// IMP=0x00000001000502c8
- (void)setCommandPushGenerationsResponse:(id)arg1;	// IMP=0x0000000100050290
- (void)setCommandPushGenerationsRequest:(id)arg1;	// IMP=0x0000000100050258
- (void)setType:(long long)arg1;	// IMP=0x0000000100050240
- (void)setSequence:(unsigned long long)arg1;	// IMP=0x000000010005022c
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001000501b4
- (id)init;	// IMP=0x00000001000501a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

