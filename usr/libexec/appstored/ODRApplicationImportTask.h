//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ODRApplication, ODRManifest;

@interface ODRApplicationImportTask : Task
{
    ODRApplication *_application;	// 8 = 0x8
    ODRManifest *_manifest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002853c8
@property(retain) ODRManifest *manifest; // @synthesize manifest=_manifest;
- (void)_main;	// IMP=0x0000000100284930
- (void)main;	// IMP=0x0000000100284894
- (id)initWithApplication:(id)arg1;	// IMP=0x000000010028480c

@end
