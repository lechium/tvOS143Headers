//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class APSMessage;

@interface INFamilyPushDetailsRequest : AAFamilyRequest
{
    APSMessage *_pushMessage;	// 8 = 0x8
}

+ (Class)responseClass;	// IMP=0x0000000100002eec
- (void).cxx_destruct;	// IMP=0x00000001000031c0
@property(retain, nonatomic) APSMessage *pushMessage; // @synthesize pushMessage=_pushMessage;
- (id)urlRequest;	// IMP=0x0000000100002f54
- (id)urlString;	// IMP=0x0000000100002ef8

@end

