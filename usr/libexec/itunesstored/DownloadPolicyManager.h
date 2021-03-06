//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadsDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject
{
    DownloadsDatabase *_database;	// 8 = 0x8
    NSMutableDictionary *_policies;	// 16 = 0x10
    NSMutableDictionary *_sizeLimitOverrides;	// 24 = 0x18
}

@property(readonly, nonatomic) __weak DownloadsDatabase *downloadsDatabase; // @synthesize downloadsDatabase=_database;
- (long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010018da58
- (_Bool)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3;	// IMP=0x000000010018d9f4
- (_Bool)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010018d968
- (_Bool)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010018d780
- (void)_initializePolicy;	// IMP=0x000000010018d43c
- (void)_addPolicy:(id)arg1;	// IMP=0x000000010018d21c
- (void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2;	// IMP=0x000000010018d170
- (void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;	// IMP=0x000000010018d0e4
- (id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;	// IMP=0x000000010018d07c
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(long long)arg2;	// IMP=0x000000010018cfe0
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1;	// IMP=0x000000010018cf8c
- (id)downloadPolicyForID:(long long)arg1;	// IMP=0x000000010018cf20
- (long long)addDownloadPolicy:(id)arg1;	// IMP=0x000000010018ca80
- (void)dealloc;	// IMP=0x000000010018ca30
- (id)initWithDownloadsDatabase:(id)arg1;	// IMP=0x000000010018c97c
- (id)init;	// IMP=0x000000010018c93c

@end

