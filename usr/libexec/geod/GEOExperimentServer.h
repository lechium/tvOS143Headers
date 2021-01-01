//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (_Bool)shouldStartImmediately;	// IMP=0x0000000100011178
+ (id)identifier;	// IMP=0x000000010001116c
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x0000000100014324
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x00000001000140dc
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x0000000100013dd4
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x0000000100013d3c
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x0000000100013c08
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x0000000100013a14
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x000000010001394c
- (void)updateWithMessage:(id)arg1;	// IMP=0x0000000100013904
- (id)init;	// IMP=0x0000000100013890
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100011180

@end
