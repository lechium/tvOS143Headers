//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol Device;

@interface LoadStoreQueueRequestEncoder : AMSURLRequestEncoder
{
    id <Device> _device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002e6b4c
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;	// IMP=0x00000001002e6a70
- (id)initWithBag:(id)arg1 device:(id)arg2;	// IMP=0x00000001002e69d8
- (id)initWithBag:(id)arg1;	// IMP=0x00000001002e6950

@end

