//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSRapportClient, NSDictionary, NSString;

@protocol IDSRapportClientDelegate <NSObject>

@optional
- (void)rapportClient:(IDSRapportClient *)arg1 didReceiveMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3;
- (void)rapportClient:(IDSRapportClient *)arg1 didLoseDevice:(NSString *)arg2;
- (void)rapportClient:(IDSRapportClient *)arg1 didDiscoverDevice:(NSString *)arg2;
@end

