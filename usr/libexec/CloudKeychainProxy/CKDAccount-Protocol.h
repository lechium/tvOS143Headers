//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSSet;

@protocol CKDAccount
- (_Bool)syncWithAllPeers:(id *)arg1;
- (NSSet *)syncWithPeers:(NSSet *)arg1 backups:(NSSet *)arg2 error:(id *)arg3;
- (_Bool)ensurePeerRegistration:(id *)arg1;
- (NSSet *)keysChanged:(NSDictionary *)arg1 error:(id *)arg2;
@end

