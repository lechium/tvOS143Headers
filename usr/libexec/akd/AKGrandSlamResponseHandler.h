//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject
{
    AKAppleIDAuthenticationContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000097d4
@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
- (void)_revokeDeviceTrust;	// IMP=0x00000001000096d8
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;	// IMP=0x00000001000096b4
- (void)handleResponseError:(id)arg1;	// IMP=0x0000000100009554
- (id)initWithContext:(id)arg1;	// IMP=0x00000001000094f0

@end

