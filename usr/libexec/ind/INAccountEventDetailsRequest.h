//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, APSMessage, NSData;

@interface INAccountEventDetailsRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    APSMessage *_pushMessage;	// 16 = 0x10
    NSData *_pushToken;	// 24 = 0x18
}

+ (Class)responseClass;	// IMP=0x0000000100007de0
- (void).cxx_destruct;	// IMP=0x00000001000081e0
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)urlRequest;	// IMP=0x0000000100007efc
- (id)urlString;	// IMP=0x0000000100007ea0
- (id)initWithAccount:(id)arg1 pushMessage:(id)arg2;	// IMP=0x0000000100007dec

@end

