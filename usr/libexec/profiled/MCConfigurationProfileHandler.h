//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCProfileHandler.h"

@class MCProfileServiceProfileHandler;

@interface MCConfigurationProfileHandler : MCProfileHandler
{
    MCProfileServiceProfileHandler *_OTAHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001ddf8
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010001dd58
- (void)unsetAside;	// IMP=0x000000010001dcfc
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010001dc7c
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001dbe0
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001da94
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010001d9d4

@end

