//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import "CPLEngineStoreUserIdentifier-Protocol.h"

@class NSString;

@interface CKRecordID (CPLCloudKitImplementation) <CPLEngineStoreUserIdentifier>
- (id)cpl_scopedIdentifierWithScopeIdentifier:(id)arg1;	// IMP=0x00000001000acebc
- (id)cplUserDescription;	// IMP=0x00000001000c254c
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x00000001000c2478
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x00000001000c2348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

