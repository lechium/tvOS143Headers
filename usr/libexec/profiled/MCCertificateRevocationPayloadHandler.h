//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCCertificateRevocationPayloadHandler : MCNewPayloadHandler
{
}

- (id)additionsDictionary;	// IMP=0x000000010001cb64
- (_Bool)setAdditions:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001cb04
- (id)applicationID;	// IMP=0x000000010001c954
- (void)_remove;	// IMP=0x000000010001c940
- (_Bool)_installOutError:(id *)arg1;	// IMP=0x000000010001c8d8
- (void)unsetAside;	// IMP=0x000000010001c8c8
- (void)setAside;	// IMP=0x000000010001c8bc
- (void)remove;	// IMP=0x000000010001c848
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001c838

@end
