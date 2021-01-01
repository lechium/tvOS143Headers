//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;
@protocol OS_nw_endpoint, OS_nw_path;

@interface IDSTransportLevelAgentClientInfo : NSObject
{
    NSUUID *_clientUUID;	// 8 = 0x8
    NSObject<OS_nw_path> *_path;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *_endpoint;	// 24 = 0x18
    NSArray *_hostComponents;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100427dd0
@property(readonly, nonatomic) NSArray *hostComponents; // @synthesize hostComponents=_hostComponents;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSObject<OS_nw_path> *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
- (id)initWithClientUUID:(id)arg1;	// IMP=0x0000000100427924

@end

