//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface KeybagSyncOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001001977f0
- (id)_newRequestPropertiesWithBodyData:(id)arg1;	// IMP=0x00000001001976b0
- (id)_newBodyDataWithBodyPlist:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100197604
- (void)run;	// IMP=0x0000000100196eec
- (id)initWithKeybagSyncRequest:(id)arg1;	// IMP=0x0000000100196e5c

@end
