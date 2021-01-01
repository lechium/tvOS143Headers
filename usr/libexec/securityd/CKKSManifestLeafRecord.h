//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKKSManifestLeafRecord : CKKSCKRecordHolder
{
    NSString *_uuid;	// 8 = 0x8
    NSMutableDictionary *_recordDigestDict;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    NSData *_derData;	// 32 = 0x20
    NSData *_digestValue;	// 40 = 0x28
}

+ (id)sqlTable;	// IMP=0x0000000100053a50
+ (id)sqlColumns;	// IMP=0x0000000100053a44
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100053830
+ (id)leafRecordForPendingRecord:(id)arg1;	// IMP=0x00000001000536fc
+ (id)tryLeafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053614
+ (id)leafRecordForID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005352c
+ (id)leafUUIDForRecordID:(id)arg1;	// IMP=0x000000010005348c
+ (_Bool)recordExistsForID:(id)arg1;	// IMP=0x0000000100053300
- (void).cxx_destruct;	// IMP=0x000000010005314c
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSDictionary *recordDigestDict; // @synthesize recordDigestDict=_recordDigestDict;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)clearDigest;	// IMP=0x00000001000530dc
@property(readonly, nonatomic) NSData *digestValue;
@property(readonly, nonatomic) NSData *derData;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0000000100052e4c
- (void)setFromCKRecord:(id)arg1;	// IMP=0x0000000100052b60
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100052a5c
- (id)ckRecordType;	// IMP=0x0000000100052a30
- (id)CKRecordName;	// IMP=0x00000001000529e0
- (id)whereClauseToFindSelf;	// IMP=0x0000000100052894
- (id)sqlValues;	// IMP=0x00000001000526b8
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4 encodedRecord:(id)arg5;	// IMP=0x00000001000525d0
- (id)initWithUUID:(id)arg1 digest:(id)arg2 recordDigestDict:(id)arg3 zone:(id)arg4;	// IMP=0x00000001000523dc
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00000001000520e8
- (id)description;	// IMP=0x0000000100051fd8

@end

