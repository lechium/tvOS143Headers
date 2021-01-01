//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSString;

@interface PublishPlaylistResponseParserDelegate : NSObject <DKDAAPParserDelegate>
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    NSString *_playlistShareURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031064
@property(readonly, nonatomic) NSString *playlistShareURL; // @synthesize playlistShareURL=_playlistShareURL;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0000000100030f84
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0000000100030f4c
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0000000100030ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

