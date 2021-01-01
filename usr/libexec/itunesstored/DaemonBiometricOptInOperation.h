//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation
{
    NSData *_authToken;	// 96 = 0x60
    _Bool _requiresStoreAuthentication;	// 104 = 0x68
    CDUnknownBlockType _resultBlock;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100073bb0
- (_Bool)_updateTouchIDSettingsForAccount:(id)arg1;	// IMP=0x00000001000734dc
- (id)_authenticateWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100072684
- (void)run;	// IMP=0x0000000100072218
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool requiresStoreAuthentication;
- (id)init;	// IMP=0x0000000100072050

@end
