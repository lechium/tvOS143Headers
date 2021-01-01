//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOSAccount;

__attribute__((visibility("hidden")))
@interface CKKeyParameter : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001c53b0
@property(retain) SOSAccount *account; // @synthesize account;
- (_Bool)SOSTransportKeyParameterPublishCloudParameters:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c50c4
- (_Bool)SOSTransportKeyParameterKVSAppendKeyInterests:(id)arg1 ak:(struct __CFArray *)arg2 firstUnLock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x00000001001c509c
- (id)initWithAccount:(id)arg1;	// IMP=0x00000001001c5000
- (void)SOSTransportKeyParameterHandleNewAccount:(id)arg1 acct:(id)arg2;	// IMP=0x00000001001c4ff8
- (long long)SOSTransportKeyParameterGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c4ff0
- (id)SOSTransportKeyParameterGetAccount:(id)arg1;	// IMP=0x00000001001c4fe8
- (_Bool)SOSTransportKeyParameterHandleKeyParameterChanges:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError *)arg3;	// IMP=0x00000001001c494c

@end

