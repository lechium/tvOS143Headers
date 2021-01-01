//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNetworkRequest-Protocol.h"

@class NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKInstanceScoreNetworkRequest : NSObject <GKNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSMutableURLRequest *nsurlRequest;	// 16 = 0x10
    NSURLSessionTask *nsurlTask;	// 24 = 0x18
    NSString *playerID;	// 32 = 0x20
    NSString *uuid;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSMutableDictionary *requestData;	// 56 = 0x38
}

+ (id)bagKey;	// IMP=0x00000001001da2c0
- (void).cxx_destruct;	// IMP=0x00000001001daa98
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00000001001da8d8
- (void)removeFromStore:(id)arg1;	// IMP=0x00000001001da8d4
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001001da878
- (id)taskInfo;	// IMP=0x00000001001da708
- (id)postBody;	// IMP=0x00000001001da6fc
- (id)initWithInstanceScore:(id)arg1 bundleID:(id)arg2 challenges:(id)arg3;	// IMP=0x00000001001da470
- (id)initWithTask:(id)arg1;	// IMP=0x00000001001da2cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
