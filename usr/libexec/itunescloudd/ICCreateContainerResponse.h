//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICDResponse.h"

@interface ICCreateContainerResponse : ICDResponse
{
    _Bool _updateRequired;	// 8 = 0x8
    unsigned int _containerID;	// 12 = 0xc
}

@property(nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(nonatomic) unsigned int containerID; // @synthesize containerID=_containerID;

@end
