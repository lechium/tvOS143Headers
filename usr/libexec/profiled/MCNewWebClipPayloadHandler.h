//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class UIWebClip;

@interface MCNewWebClipPayloadHandler : MCNewPayloadHandler
{
    UIWebClip *_setAsideClip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002a4bc
- (void)unsetAside;	// IMP=0x000000010002a3f8
- (void)setAside;	// IMP=0x000000010002a290
- (_Bool)isInstalled;	// IMP=0x000000010002a1a0
- (void)remove;	// IMP=0x000000010002a014
- (id)_findInstalledClipWithIdentifier:(id)arg1;	// IMP=0x0000000100029e74
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100029898
- (id)savedWebClipIdentifier;	// IMP=0x00000001000297b4

@end

