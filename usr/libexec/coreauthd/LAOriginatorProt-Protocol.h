//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol LAContextCallbackXPC;

@protocol LAOriginatorProt
@property(readonly, nonatomic) unsigned long long originatorId;
@property(readonly, nonatomic) id <LAContextCallbackXPC> callback;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken;
@property(readonly, nonatomic) int auditSessionId;
@property(readonly, nonatomic) unsigned int userId;
@property(readonly, nonatomic) int processId;
@property(readonly, nonatomic) _Bool cApiOrigin;
- (_Bool)checkEntitlement:(NSString *)arg1;
@end

