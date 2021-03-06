//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKADIProxy : NSObject
{
}

+ (int)eraseProvisioningForDSID:(unsigned long long)arg1;	// IMP=0x0000000100011ffc
+ (int)synchronizeWithDSID:(unsigned long long)arg1 SIM:(const char *)arg2 SIMLength:(unsigned int)arg3 outMID:(char **)arg4 outMIDLength:(unsigned int *)arg5 outSRM:(char **)arg6 outSRMLength:(unsigned int *)arg7;	// IMP=0x0000000100011fd8
+ (int)destroyProvisioningSession:(unsigned int)arg1;	// IMP=0x0000000100011fd0
+ (int)endProvisioningWithSession:(unsigned int)arg1 PTM:(const char *)arg2 PTMLength:(unsigned int)arg3 TK:(const char *)arg4 TKLength:(unsigned int)arg5;	// IMP=0x0000000100011fb8
+ (int)startProvisioningWithDSID:(unsigned long long)arg1 SPIM:(const char *)arg2 SPIMLength:(unsigned int)arg3 outCPIM:(char **)arg4 outCPIMLength:(unsigned int *)arg5 outSession:(unsigned int *)arg6;	// IMP=0x0000000100011f9c
+ (int)isMachineProvisioned:(unsigned long long)arg1;	// IMP=0x0000000100011f94
+ (int)dispose:(void *)arg1;	// IMP=0x0000000100011f8c
+ (int)requestOTPForDSID:(unsigned long long)arg1 outMID:(char **)arg2 outMIDSize:(unsigned int *)arg3 outOTP:(char **)arg4 outOTPSize:(unsigned int *)arg5;	// IMP=0x0000000100011f74
+ (int)setIDMSRoutingInfo:(unsigned long long)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x0000000100011f68
+ (int)getIDMSRoutingInfo:(unsigned long long *)arg1 forDSID:(unsigned long long)arg2;	// IMP=0x0000000100011f5c

@end

