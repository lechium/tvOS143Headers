//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerPath.h"

@interface MCMContainerStagingPath : MCMContainerPath
{
    MCMContainerPath *_destinationContainerPath;	// 88 = 0x58
}

+ (id)stagingContainerPathForDestinationContainerPath:(id)arg1 stagingPathIdentifier:(id)arg2;	// IMP=0x0000000100089978
+ (Class)_containerClassPathClass;	// IMP=0x000000010008996c
- (void).cxx_destruct;	// IMP=0x0000000100089958
@property(retain, nonatomic) MCMContainerPath *destinationContainerPath; // @synthesize destinationContainerPath=_destinationContainerPath;

@end

