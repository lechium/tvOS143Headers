//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class MADArtworkServer, NSString;

@interface MADXPCDelegate : NSObject <NSXPCListenerDelegate>
{
    MADArtworkServer *_artworkService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000033d0
@property(retain, nonatomic) MADArtworkServer *artworkService; // @synthesize artworkService=_artworkService;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000030ec
- (id)init;	// IMP=0x0000000100003078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

