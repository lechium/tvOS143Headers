//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDActivityRequestRecord.h"

@class NSData, NSString, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface SDActivityPayloadRequestRecord : SDActivityRequestRecord
{
    NSData *_advertisementPayload;	// 64 = 0x40
    NSString *_command;	// 72 = 0x48
    RPCompanionLinkClient *_linkClient;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010003bcbc
@property(retain, nonatomic) RPCompanionLinkClient *linkClient; // @synthesize linkClient=_linkClient;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (id)description;	// IMP=0x000000010003bb14
- (void)dealloc;	// IMP=0x000000010003babc

@end

