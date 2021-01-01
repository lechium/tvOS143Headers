//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MRDExternalDeviceCredentialDatabase : NSObject
{
    struct sqlite3 *_dbHandle;	// 8 = 0x8
    NSMutableArray *_tokenRecords;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000334ac
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_loadTokenRecords;	// IMP=0x00000001000331a0
- (void)_initializeDatabaseSchema;	// IMP=0x0000000100033100
- (void)_validateDatabase;	// IMP=0x0000000100032eb0
- (void)_openDatabase;	// IMP=0x0000000100032cf8
- (_Bool)clearExpiredTokenRecords;	// IMP=0x0000000100032ae8
- (_Bool)saveTokenRecord:(id)arg1;	// IMP=0x00000001000326c4
@property(readonly, nonatomic) NSArray *tokenRecords;
- (void)dealloc;	// IMP=0x0000000100032608
- (id)init;	// IMP=0x00000001000325f8
- (id)initWithPath:(id)arg1;	// IMP=0x000000010003253c

@end

