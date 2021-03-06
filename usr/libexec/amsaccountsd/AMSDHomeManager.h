//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromise;
@protocol AMSDHomeManagerDataSource;

@interface AMSDHomeManager : NSObject
{
    id <AMSDHomeManagerDataSource> _dataSource;	// 8 = 0x8
}

+ (unsigned long long)multiUserStatusForHomeUser:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010001a088
+ (id)identifiersForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100019e5c
+ (id)identifiersForRecord:(id)arg1;	// IMP=0x0000000100019d94
+ (id)homeUserIdentifierForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100019b68
+ (id)homeUserIdentifierForRecord:(id)arg1;	// IMP=0x0000000100019ab4
+ (id)homeIdentifierForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100019880
+ (id)homeIdentifierForRecord:(id)arg1;	// IMP=0x00000001000197cc
- (void).cxx_destruct;	// IMP=0x000000010001aa48
@property(retain, nonatomic) id <AMSDHomeManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)settingForKeyPath:(id)arg1 user:(id)arg2 home:(id)arg3;	// IMP=0x000000010001a974
- (id)settingForKeyPath:(id)arg1;	// IMP=0x000000010001a8f4
- (id)sendCloudShare:(id)arg1 inContainer:(id)arg2 toOwnerOfHome:(id)arg3;	// IMP=0x000000010001a834
- (id)sendCloudDataRepairRequestToHomeUser:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010001a798
- (void)registerToAcceptCloudSharesForContainers:(id)arg1;	// IMP=0x000000010001a72c
- (id)homeWithHomeIdentifier:(id)arg1;	// IMP=0x000000010001a498
@property(readonly, nonatomic) AMSPromise *allHomes;
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000010001a384
- (id)homeForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000196a4
- (id)homeForRecord:(id)arg1;	// IMP=0x0000000100019530

@end

